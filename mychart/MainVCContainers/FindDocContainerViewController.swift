//
//  FindDocContainerViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/28/21.
//

import UIKit

class FindDocContainerViewController: UIViewController {
    
    
    var menuController : MenuViewController!
        var centerVC :UIViewController!
        var homeVC :ScheduleAppViewController!
        var isExpandMenu : Bool = false
        override func viewDidLoad() {
            super.viewDidLoad()
            setHomeFun()
            // Do any additional setup after loading the view.
            self.modalPresentationStyle = .fullScreen
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
                homeVC = ScheduleAppViewController()
                homeVC.delegate = self
                homeVC.delegateHideNav = self
                centerVC = UINavigationController(rootViewController: homeVC)
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
                homeVC.navigationController?.pushViewController(ScheduleAppViewController(), animated: true)
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

    extension FindDocContainerViewController : MenuDelegate{
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
extension FindDocContainerViewController: ProtocolHideNavigation{
    func hideNavigation()  {
        self.navigationController?.popToRootViewController(animated: true)
    }
}
