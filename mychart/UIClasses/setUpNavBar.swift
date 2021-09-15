//
//  setUpNavBar.swift
//  
//
//  Created by Garnet Health on 6/24/21.
//

import Foundation

extension UIViewController {

    
    
    func setupNavigationBarItems() {
        
        navigationController?.navigationBar.barTintColor = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
        navigationController?.navigationBar.tintColor = UIColor.white
        navigationController?.navigationBar.titleTextAttributes = [.foregroundColor: UIColor.white]
        
        setupRightNavItems()
        setupRemainingNavItems()
    }
    
    private func setupRemainingNavItems() {
        let titleImageView = UIImageView(image: UIImage(named: "whiteGarnet_178px (1)"))
        titleImageView.frame = CGRect(x: 0, y: 0, width: 64, height: 38)
        titleImageView.contentMode = .scaleAspectFit
        
        navigationItem.titleView = titleImageView
        
        navigationController?.navigationBar.backgroundColor = .white
        navigationController?.navigationBar.isTranslucent = false
    }
    
    
    
    private func setupRightNavItems() {
        let searchButton = UIButton(type: .system)
        searchButton.setImage(UIImage(systemName:  "magnifyingglass"), for: .normal)
        searchButton.frame = CGRect(x: 0, y: 0, width: 34, height: 34)
        searchButton.contentMode = .scaleAspectFit
        searchButton.addTarget(self, action: #selector(ShowSearch), for: .touchUpInside)
        
        let composeButton = UIButton(type: .system)
        composeButton.setImage(UIImage(systemName:  "gear"), for: .normal)
        composeButton.frame = CGRect(x: 0, y: 0, width: 34, height: 34)
        composeButton.contentMode = .scaleAspectFit
        composeButton.addTarget(self, action: #selector(showSettings), for: .touchUpInside)
        
        navigationItem.rightBarButtonItems = [UIBarButtonItem(customView: composeButton), UIBarButtonItem(customView: searchButton)]
    }
    
    @objc func ShowSearch(){
        let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "search2")
        self.navigationController?.pushViewController(vc, animated: true)
     }
    @objc func showSettings(){
       MyChartVcs(Index: 4)
     }
}
