//
//  ForgotPasswordViewController.swift
//  mychart
//
//  Created by Garnet Health on 4/15/21.
//  Copyright © 2021 Garnet Health. All rights reserved.
//

import UIKit
import WebKit

class ForgotPasswordViewController: UIViewController, WKNavigationDelegate ,WKUIDelegate  {

    
    var activityIndicator: UIActivityIndicatorView!
    var WebViewS: WKWebView!
    var bannerView = UIView(frame: CGRect.zero)
    override func viewDidLoad() {
            
        super.viewDidLoad()
        WebViewS = WKWebView()
        WebViewS.frame  = CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height - 95)
           super.viewDidLoad()
           WebViewS.navigationDelegate = self
           WebViewS.uiDelegate = self
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
        view.addSubview(WebViewS);
           view.addSubview(bannerView);
           WebViewS.frame.size.width = screenSize.width;
           WebViewS.frame.size.height = screenSize.height;
           bannerView.isHidden = true;
           activityIndicator.startAnimating()
                   view.addSubview(activityIndicator)
           // Do any additional setup after loading the view.
           let url = URL(string: "https://mychart.garnethealth.org/GH/passwordreset.asp?mobile=1")!
           WebViewS.load(URLRequest(url: url))
            WebViewS.frame.size.width = screenSize.width;
              

       }
       func webView(_ webView: WKWebView, didStartProvisionalNavigation navigation: WKNavigation!) {
               activityIndicator.isHidden = false
               activityIndicator.startAnimating()
               bannerView.isHidden = false;
           }
      
       func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
              activityIndicator.stopAnimating()
              activityIndicator.isHidden = true
              title = WebViewS.title
              bannerView.isHidden = true;
            
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

        /*
        // MARK: - Navigation

        // In a storyboard-based application, you will often want to do a little preparation before navigation
        override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
            // Get the new view controller using segue.destination.
            // Pass the selected object to the new view controller.
        }
        */
}

