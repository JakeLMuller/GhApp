//
//  MainTabViewController.swift
//  mychart
//
//  Created by Garnet Health on 7/9/21.
//

import UIKit
import WebKit

class MainTabViewController:  UITabBarController,
UITabBarControllerDelegate{
     var tabViewControllers: [UIViewController]?
    override func viewDidLoad() {
        super.viewDidLoad()
        self.delegate = self;
        tabViewControllers = self.viewControllers
    }

    func tabBarController(tabBarController: UITabBarController,
        didSelectViewController viewController: UIViewController) {
            if let vc = viewController as? UINavigationController {
                vc.popViewController(animated: true);
            }
    }
    override func tabBar(_ tabBar: UITabBar, didSelect item: UITabBarItem) {
       
            let splitViewController = self.selectedViewController
        if let navController = splitViewController!.children[0] as? UINavigationController {
            
                    if navController.viewControllers.count == 1{
                        if !navController.viewControllers[0].isScrolledToTop {
                            navController.viewControllers[0].scrollToTop()
                                      
                        }
                        if item == (self.tabBar.items as! [UITabBarItem])[1]{
                            for view in navController.viewControllers[0].view.subviews  {
                                if let webView = view as? WKWebView {
                                    let url = URL(string: "https://www.garnethealth.org/providers?affiliation%5B1%5D=1&disable_global_elements=1")!
                                    webView.load(URLRequest(url: url))
                                }
                            }
                        }else if item == (self.tabBar.items as! [UITabBarItem])[3]{
                            for view in navController.viewControllers[0].view.subviews  {
                                if let webView = view as? WKWebView {
                                    let url = URL(string: "https://www.garnethealth.org/news?disable_global_elements=1")!
                                    webView.load(URLRequest(url: url))
                                }
                            }
                        }else if item == (self.tabBar.items as! [UITabBarItem])[4]{
                            for view in navController.viewControllers[0].view.subviews  {
                                if let webView = view as? WKWebView {
                                    let url = URL(string: "https://garnethealth.org/locations?disable_global_elements=1")!
                                    webView.load(URLRequest(url: url))
                                }
                            }
                        }
                    }else{
                       navController.popToRootViewController(animated: true)
                    }
            
         }
            
        
        
    }
    
    
}
extension UIViewController {
    func scrollToTop() {
        func scrollToTop(view: UIView?) {
            guard let view = view else { return }

            switch view {
            case let scrollView as UIScrollView:
                if scrollView.scrollsToTop == true {
                    scrollView.setContentOffset(CGPoint(x: 0.0, y: -scrollView.contentInset.top), animated: true)
                    return
                }
            default:
                break
            }

            for subView in view.subviews {
                scrollToTop(view: subView)
            }
        }

        scrollToTop(view: view)
    }

    // Changed this

    var isScrolledToTop: Bool {
        if self is UITableViewController {
            return (self as! UITableViewController).tableView.contentOffset.y == 0
        }
        for subView in view.subviews {
            if let scrollView = subView as? UIScrollView {
                return (scrollView.contentOffset.y == 0)
            }
        }
        return true
    }
}
