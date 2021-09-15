//
//  MyChartContainerViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/28/21.
//

import UIKit

class MyChartContainerViewController: UIViewController {
    var menuController : MenuViewController!
        var centerVC :UIViewController!
        var homeVC :UIViewController!
        var isExpandMenu : Bool = false
        override func viewDidLoad() {
            super.viewDidLoad()
            setHomeFun()
            // Do any additional setup after loading the view.
        }
        override func viewWillAppear(_ animated: Bool) {
            if homeVC == nil {
               if  var vt = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
                    
                homeVC.navigationController?.present(vt, animated: false, completion: nil)
                  
               }else{
                 homeVC.navigationController?.popToRootViewController(animated: true)
               }
            
            
        }
        }
        func setHomeFun(){
            var vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false)
            if homeVC == nil {
               if  var vt = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
                    
                homeVC = vc
                  
               }else{
                vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
                 homeVC = vc
               }
                centerVC = UINavigationController(rootViewController: homeVC)
                self.view.addSubview(centerVC.view)
                addChild(centerVC)
                centerVC.didMove(toParent: self)
            }
            
        }
    
}
