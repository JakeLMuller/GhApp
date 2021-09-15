//
//  NewsViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/14/21.
//

import UIKit
import WebKit

class NewsViewController: UIViewController,  WKNavigationDelegate,WKUIDelegate{
    var delegate: MenuDelegate?
    
    
    var activityIndicator: UIActivityIndicatorView!
    var WebView: WKWebView!
    var bannerView = UIView(frame: CGRect.zero)
    
    override func viewDidLoad() {
    
        super.viewDidLoad()
        WebView = WKWebView()
        WebView.frame  = CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height)
        WebView.navigationDelegate = self
        WebView.uiDelegate = self
        
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
        bannerView = UIView(frame: CGRect(x: 0, y: 0, width: screenSize.width , height: UIScreen.main.bounds.height  ))
        bannerView.backgroundColor = UIColor.black.withAlphaComponent(0.6)
        WebView.frame.size.width = screenSize.width;
        WebView.frame.size.height = screenSize.height - 135;
        view.addSubview(WebView);
        view.addSubview(bannerView);
        bannerView.isHidden = true;
        activityIndicator.startAnimating()
                view.addSubview(activityIndicator)
        // Do any additional setup after loading the view.
        let url = URL(string: "https://www.garnethealth.org/news?disable_global_elements=1")!
        WebView.load(URLRequest(url: url))
        
           

    }
    func reloadWebView(newURL: String) {
        let urlRequest = NSURLRequest(url: NSURL(string: newURL)! as URL)
        WebView.load(urlRequest as URLRequest)
     }
    override func viewDidAppear(_ animated: Bool) {
       
        let vc = self.navigationController?.viewControllers.first
        if vc == self.navigationController?.visibleViewController {
            setupNavigationBarItems()
            setupLeftNavItem()
            WebView.evaluateJavaScript("window.scrollTo(0,0)", completionHandler: nil)
        }
        let url = URL(string: "https://www.garnethealth.org/news?disable_global_elements=1")!
        WebView.load(URLRequest(url: url))
        
        
    }
    private func setupLeftNavItem() {
        
        let followButton = UIButton(type: .system)
        followButton.setImage(UIImage(systemName:  "line.horizontal.3"), for: .normal)
        followButton.frame = CGRect(x: 0, y: 0, width: 34, height: 34)
        followButton.contentMode = .scaleAspectFit
        followButton.tintColor = .white
        followButton.addTarget(self, action: #selector(handleMenu), for: .touchUpInside)
        navigationItem.leftBarButtonItem = UIBarButtonItem(customView: followButton)
        
    }
    @objc func handleMenu(){
            delegate?.menuHandler(index: -1)
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
        WebView.evaluateJavaScript("var getA = document.querySelectorAll('a');for (var i = 0; i < getA.length; i++){if (getA[i].href.indexOf('https://www.garnethealth.org') >= 0){if (getA[i].href.indexOf('?') < 0){getA[i].href += '?disable_global_elements=1';}else {getA[i].href += '&disable_global_elements=1';}}}if (document.getElementById('headerNavbar')){var getHeader = document.getElementById('headerNavbar');var getHeaderHeight = getHeader.offsetHeight;getHeader.parentElement.parentElement.removeChild(getHeader.parentElement);var getMain = document.querySelector('main');getMain.style.marginTop = (-getHeaderHeight)+ 'px';}if (document.getElementById('siteAlert')){ document.getElementById('siteAlert').parentElement.removeChild(document.getElementById('siteAlert'))}if (document.getElementById('block-hgefooterblock')){ document.getElementById('block-hgefooterblock').parentElement.removeChild(document.getElementById('block-hgefooterblock'))}");
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
                         }else if (navigationAction.request.url?.host?.range(of:"mychart.garnethealth") != nil){
                                              var check = WPAPIHomepage.accessResultForHomepage();
                                              if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
                                                  navigationController?.pushViewController(vc, animated: true)
                                              }else{
                                               let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
                                               self.navigationController?.pushViewController(vc, animated: true)
                                              }
                                              decisionHandler(.cancel)
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
                                         var check = WPAPIHomepage.accessResultForHomepage();
                                        if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
                                             navigationController?.pushViewController(vc, animated: true)
                                          }else{
                                           let vc = UIStoryboard.init(name: "HomeScreen", bundle: Bundle.main).instantiateViewController(withIdentifier: "loginMain")
                                           self.navigationController?.pushViewController(vc, animated: true)
                                          }
                                          decisionHandler(.cancel)
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
}
