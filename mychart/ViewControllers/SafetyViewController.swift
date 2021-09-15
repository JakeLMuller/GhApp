//
//  SafetyViewController.swift
//  App
//
//  Created by Garnet Health on 12/15/20.
//
import WebKit
import UIKit

class SafetyViewController: UIViewController, WKNavigationDelegate, WKUIDelegate {
    var activityIndicator: UIActivityIndicatorView!
     var WebViewS: WKWebView!
    var bannerView = UIView(frame: CGRect.zero)
    override func viewDidLoad() {
        
           
        super.viewDidLoad()
        WebViewS = WKWebView()
        WebViewS.frame  = CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height)
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
        let url = URL(string: "https://www.garnethealth.org/patients-visitors/patient-information-resources/safety?disable_global_elements=1")!
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
          WebViewS.evaluateJavaScript("var getA = document.querySelectorAll('a');for (var i = 0; i < getA.length; i++){if (getA[i].href.indexOf('https://www.garnethealth.org') >= 0){if (getA[i].href.indexOf('?') < 0){getA[i].href += '?disable_global_elements=1';}else {getA[i].href += '&disable_global_elements=1';}}}if (document.getElementById('headerNavbar')){var getHeader = document.getElementById('headerNavbar');var getHeaderHeight = getHeader.offsetHeight;getHeader.parentElement.parentElement.removeChild(getHeader.parentElement);var getMain = document.querySelector('main');getMain.style.marginTop = (-getHeaderHeight)+ 'px';}if (document.getElementById('siteAlert')){ document.getElementById('siteAlert').parentElement.removeChild(document.getElementById('siteAlert'))}if (document.getElementById('block-hgefooterblock')){ document.getElementById('block-hgefooterblock').parentElement.removeChild(document.getElementById('block-hgefooterblock'))}");
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
