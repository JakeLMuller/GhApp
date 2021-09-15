//
//  WebViewController.swift
//  App
//
//  Created by Garnet Health on 12/14/20.
//
import WebKit
import UIKit

class WebViewController: UIViewController, WKNavigationDelegate ,WKUIDelegate {
    var activityIndicator: UIActivityIndicatorView!
    @IBOutlet weak var WebView: WKWebView!
    var bannerView = UIView(frame: CGRect.zero)
    override func viewDidLoad() {
        
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        let url = URL(string: "https://mychart.garnethealth.org/GH/accesscheck.asp?mobile=1")!
        WebView.load(URLRequest(url: url))
        super.viewDidLoad()
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
        bannerView = UIView(frame: CGRect(x: 0, y: 0, width: screenSize.width , height: screenSize.height ))
        bannerView.backgroundColor = UIColor.black.withAlphaComponent(0.6)
        
        view.addSubview(bannerView);
        bannerView.isHidden = true;
        WebView.frame.size.width = screenSize.width;
        WebView.frame.size.height = screenSize.height;
        activityIndicator.startAnimating()
                view.addSubview(activityIndicator)
        // Do any additional setup after loading the view.
        WebView.load(URLRequest(url: url))
        WebView.frame.size.width = screenSize.width;
           

    }
    
    func webView(_ webView: WKWebView, didStartProvisionalNavigation navigation: WKNavigation!) {
            activityIndicator.isHidden = false
            activityIndicator.startAnimating()
            bannerView.isHidden = false;
        }
   
    func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
           activityIndicator.stopAnimating()
           activityIndicator.isHidden = true
           title = WebView.title
           bannerView.isHidden = true;
       }
    func reloadWebView(newURL: String) {
        let urlRequest = NSURLRequest(url: NSURL(string: newURL)! as URL)
        WebView.load(urlRequest as URLRequest)
        }
    func webView(_ webView: WKWebView, decidePolicyFor navigationAction: WKNavigationAction, decisionHandler: @escaping (WKNavigationActionPolicy) -> Void) {
                
                  decisionHandler(.allow)
                
              }
              func webView(_ webView: WKWebView, createWebViewWith configuration: WKWebViewConfiguration, for navigationAction: WKNavigationAction, windowFeatures: WKWindowFeatures) -> WKWebView? {
                  if navigationAction.targetFrame == nil {
                      // Here we load this request manually in current window
                      webView.load(navigationAction.request)
                  }
                  return nil
              }


}
