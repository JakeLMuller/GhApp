//
//  MainNav.swift
//  mychart
//
//  Created by Garnet Health on 6/24/21.
//

import UIKit

class MainNav: UINavigationController {
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let vc = MainLayoutViewController()
        viewControllers = [vc]
        // Do any additional setup after loading the view.
    }
    

    
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    //override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
       // self.
   // }
    

}
    
