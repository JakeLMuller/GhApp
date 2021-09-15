//
//  MainContainerViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/26/21.
//

import UIKit

class MainContainerViewController: UIViewController, ProtocolHideNavigation{
    var menuController : MenuViewController!
        var centerVC :UIViewController!
        var homeVC :MainLayoutViewController!
        var isExpandMenu : Bool = false
       
    
        override func viewDidLoad() {
            super.viewDidLoad()
            setHomeFun()
            
            self.modalPresentationStyle = .fullScreen
            // Do any additional setup after loading the view.
        }
        override func viewWillAppear(_ animated: Bool) {
            if isExpandMenu {
                isExpandMenu = !isExpandMenu
                showMenu(isExpand: isExpandMenu)
            }
            
            homeVC.navigationController?.popToRootViewController(animated: true)
            
        }
        func setHomeFun(){
            
            if homeVC == nil {
                homeVC = MainLayoutViewController()
                homeVC.delegate = self
                centerVC = UINavigationController(rootViewController: homeVC)
                homeVC.delegateHideNav = self
                self.view.addSubview(centerVC.view)
                addChild(centerVC)
                centerVC.didMove(toParent: self)
            }
            
        }
        
        func setHomeFun(index:Int){
            if (index == 1) {
                configureMenu()
            }
            else  if index == 2{
                homeVC.navigationController?.pushViewController(MainLayoutViewController(), animated: true)
            }
            else  if index == 3{
                    //Add view controller your requirement
                }
            else{
                configureMenu()
                }
        }
      //Configure the Menu bar
        func configureMenu()  {
            if menuController == nil {
                let storyBoard = UIStoryboard(name: "Main", bundle: nil)
                menuController = storyBoard.instantiateViewController(identifier: "MenuViewController") as? MenuViewController
                menuController.delegate = self
                view.insertSubview(menuController.view , at: 0)
                addChild(menuController)
                menuController.didMove(toParent: self)
                print("configureMenu called")
            }
        }
        func hideNavigation(){
          homeVC.navigationController?.popViewController(animated: true)
        }
        func showMenu(isExpand:Bool){
            if isExpand {
                //open Menu
                UIView.animate(withDuration: 0.5, delay: 0, usingSpringWithDamping: 0.8, initialSpringVelocity: 0, options: .curveEaseOut, animations: {
                    self.centerVC.view.frame.origin.x = self.centerVC.view.frame.width - 70
                }, completion: nil)
            }else{
                 //close Menu
               UIView.animate(withDuration: 0.5, delay: 0, usingSpringWithDamping: 0.8, initialSpringVelocity: 0, options: .curveEaseOut, animations: {
                self.centerVC.view.frame.origin.x = 0
                          }, completion: nil)
            }
        }
    }
    extension MainLayoutViewController: ProtocolHideNavigation{
        func hideNavigation()  {
            self.navigationController?.popToRootViewController(animated: true)
        }
    }
    extension MainContainerViewController : MenuDelegate{
        func menuHandler(index: Int) {
            if !isExpandMenu {
                configureMenu()
            }
            isExpandMenu = !isExpandMenu
            showMenu(isExpand: isExpandMenu)
            if index > -1 {
                setHomeFun(index: index)
            }
        }
    }

