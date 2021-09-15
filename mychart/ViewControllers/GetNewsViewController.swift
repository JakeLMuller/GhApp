//
//  GetNewsViewController.swift
//  App
//
//  Created by Garnet Health on 12/21/20.
//
import WebKit
import UIKit

class GetNewsViewController: UIViewController, WKNavigationDelegate, WKUIDelegate {
    
    var activityIndicator: UIActivityIndicatorView!
    var news: WKWebView!
    var bannerView = UIView(frame: CGRect.zero)
    
    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        news = WKWebView()
        news.frame  = CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height)
        news.navigationDelegate = self
        news.uiDelegate = self
        activityIndicator = UIActivityIndicatorView()
        activityIndicator.center = self.view.center
        activityIndicator.hidesWhenStopped = true
        activityIndicator.center = self.view.center
        activityIndicator.color = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
        if #available(iOS 13.0, *) {
            activityIndicator.style = UIActivityIndicatorView.Style.large
        } else {
            // Fallback on earlier versions
        }
        let screenSize = UIScreen.main.bounds
        bannerView = UIView(frame: CGRect(x: 0, y: 0, width: screenSize.width , height: screenSize.height ))
        bannerView.backgroundColor = UIColor.black.withAlphaComponent(0.6)
        view.addSubview(news);
        view.addSubview(bannerView);
        news.frame.size.width = screenSize.width;
        news.frame.size.height = screenSize.height;
        bannerView.isHidden = true;
        showActivityIndicator(show: true)
                view.addSubview(activityIndicator)
        // Do any additional setup after loading the view.
        let url = URL(string: "https://www.garnethealth.org/news?disable_global_elements=1")!
        news.load(URLRequest(url: url))
         news.frame.size.width = screenSize.width;
    }

    func webView(_ webView: WKWebView, didStartProvisionalNavigation navigation: WKNavigation!) {
            activityIndicator.isHidden = false
            activityIndicator.startAnimating()
        bannerView.isHidden = false;
        }
   
    func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
           activityIndicator.stopAnimating()
           activityIndicator.isHidden = true
           bannerView.isHidden = true;
           news.evaluateJavaScript("var getA = document.querySelectorAll('a');for (var i = 0; i < getA.length; i++){if (getA[i].href.indexOf('https://www.garnethealth.org') >= 0){if (getA[i].href.indexOf('?') < 0){getA[i].href += '?disable_global_elements=1';}else {getA[i].href += '&disable_global_elements=1';}}}if (document.getElementById('headerNavbar')){var getHeader = document.getElementById('headerNavbar');var getHeaderHeight = getHeader.offsetHeight;getHeader.parentElement.parentElement.removeChild(getHeader.parentElement);var getMain = document.querySelector('main');getMain.style.marginTop = (-getHeaderHeight)+ 'px';}if (document.getElementById('siteAlert')){ document.getElementById('siteAlert').parentElement.removeChild(document.getElementById('siteAlert'))}");
       }
    
    func showActivityIndicator(show: Bool) {
        if show {
            activityIndicator.startAnimating()
        } else {
            activityIndicator.stopAnimating()
        }
    }
    func webView(_ webView: WKWebView, decidePolicyFor navigationAction: WKNavigationAction, decisionHandler: @escaping (WKNavigationActionPolicy) -> Void) {
         if navigationAction.navigationType == .linkActivated  {
           let host = navigationAction.request.url?.host
           if let url = navigationAction.request.url,  UIApplication.shared.canOpenURL(url) {
               if (host?.range(of:"google") != nil){
                 UIApplication.shared.open(url)
                 decisionHandler(.cancel)
                   activityIndicator.stopAnimating()
                   activityIndicator.isHidden = true
                   bannerView.isHidden = true;
               }else if (host?.range(of:".pdf") != nil){
                   UIApplication.shared.open(url)
                   decisionHandler(.allow)
               }else  if navigationAction.request.url?.scheme == "tel" {
                                    UIApplication.shared.openURL(navigationAction.request.url!)
                                    decisionHandler(.cancel)
               }else{
                   decisionHandler(.allow)
               }
           }else if navigationAction.request.url?.scheme == "tel" {
                                UIApplication.shared.openURL(navigationAction.request.url!)
                                decisionHandler(.cancel)
           }else if (navigationAction.request.url?.host?.range(of:"mychart.garnethealth") != nil){
                               // var check = WPAPIHomepage.accessResultForHomepage();
                                //if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
                                //    navigationController?.pushViewController(vc, animated: true)
                               // }else{
                                // let vc = UIStoryboard.init(name: "HomeScreen", bundle: Bundle.main).instantiateViewController(withIdentifier: "loginMain")
                                // self.navigationController?.pushViewController(vc, animated: true)
                                //}
                               // decisionHandler(.cancel)
           } else {
             decisionHandler(.allow)
           }
         } else {
           decisionHandler(.allow)
         }
       }
       
         func webView(_ webView: WKWebView, createWebViewWith configuration: WKWebViewConfiguration, for navigationAction: WKNavigationAction, windowFeatures: WKWindowFeatures) -> WKWebView? {
             if navigationAction.targetFrame == nil {
                 // Here we load this request manually in current window
                 webView.load(navigationAction.request)
             }
             return nil
         }
    
    /*func getJson(){
    let url = URL(string: "https://api.rss2json.com/v1/api.json?rss_url=https%3A%2F%2Fwww.ormc.org%2Ffeed")
    URLSession.shared.dataTask(with: url!) { (data, response, error) in
    if error != nil
    {
        print ("ERROR")
    }
    else
    {
        if let content = data
        {
            do
            {
                    //Dic
                    guard let myJson:[String:Any] = try JSONSerialization.jsonObject(with: content, options: JSONSerialization.ReadingOptions.mutableContainers) as? [String:Any] else {return}
                    //print(myJson)

                    for items in myJson {
                        print(items)
                    }

                    //here is the single value part, it looks for the rates then it puts it in label.

                    if let  rates = myJson["items"] as? NSDictionary{


                        if let currency = rates["title"]{


                            print(currency);

                           // self.label.text=String(describing: currency)


                        }


                    }

                }

                catch
                {


                }
        }else{
            print(data)
        }
        }
      }
    }
           
       
    struct ToDoResponseModel: Codable {
        let status: String
        let feed: Int
        let title: String
        let completed: Bool
    }
   
    
    // number of rows in table view
    func numberOfSections(in tableView: UITableView) -> Int {
            return self.animals.count
    }
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
           return 1
       }
       
       // Set the spacing between sections
       func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
           return cellSpacingHeight
       }
    // create a cell for each table view row
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        // create a new cell if needed or reuse an old one
        let cell:UITableViewCell = (self.tableView.dequeueReusableCell(withIdentifier: cellReuseIdentifier) as UITableViewCell?)!
        
        // set the text from the data model
        cell.textLabel?.text = self.animals[indexPath.row]
        cell.backgroundColor = UIColor.white
        cell.layer.borderColor = UIColor.black.cgColor
        cell.layer.borderWidth = 1
        cell.layer.cornerRadius = 8
        cell.clipsToBounds = true
        return cell
    }
    
    // method to run when table view cell is tapped
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        print("You tapped cell number \(indexPath.row).")
    }
 */
}

