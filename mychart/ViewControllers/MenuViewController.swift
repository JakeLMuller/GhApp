//
//  MenuViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/26/21.
//

import UIKit

class MenuViewController:
    UIViewController {
        var delegate : MenuDelegate?
        
    @IBOutlet weak var collectionView: UICollectionView!
  
        let productCollectionViewCellId = "ProductCollectionViewCell"
        var Menus = [MenuDTO]()
        
        var menus1 : Array = [["txtMenu":"Home", "imgMenu":"house.fill"],["txtMenu":"Find A Doc", "imgMenu":"magnifyingglass.circle.fill"],["txtMenu":"My Chart", "imgMenu":"heart.circle.fill"],["txtMenu":"New & Blog", "imgMenu":"newspaper.fill"],["txtMenu":"Directions", "imgMenu":"mappin.and.ellipse"]]
        
        
        override func viewDidLoad() {
            super.viewDidLoad()
          
            let nibCell = UINib(nibName: "MenuCollectionViewCell", bundle: nil)
            collectionView.register(nibCell, forCellWithReuseIdentifier: productCollectionViewCellId)
           
            // init data
            for (n, prime) in menus1.enumerated() {
                let product = MenuDTO()
                product?.name = menus1[n]["txtMenu"]
                product?.image = menus1[n]["imgMenu"]
                Menus.append(product!)
            }
            collectionView.reloadData()
        }

    }
extension MenuViewController: UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout {
    
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 1
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return Menus.count
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, insetForSectionAt section: Int) -> UIEdgeInsets {
        let inset:CGFloat = 10
        return UIEdgeInsets(top: inset, left: inset, bottom: inset, right: inset)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        return CGSize(width: collectionView.frame.size.width, height: 60)
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: productCollectionViewCellId, for: indexPath) as! MenuCollectionViewCell
        let singleMenu = Menus[indexPath.row]
        //if (indexPath.row == 1){
            //cell.img.image = UIImage(systemName: singleMenu.image!)
       // }else{
        //    cell.img.image = UIImage(named: singleMenu.image!)
        //}
        cell.img.image = UIImage(systemName: singleMenu.image!)
        cell.lbName.text = singleMenu.name!
        
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        let product = menus1[indexPath.row]
        if (indexPath.row == 0){
            if let tabBarController = self.parent?.parent as? UITabBarController {
                tabBarController.selectedIndex = 0
            }
        }else if (indexPath.row == 1){
            if let tabBarController = self.parent?.parent as? UITabBarController {
                tabBarController.selectedIndex = 1
            }
        }else if (indexPath.row == 2){
            if let tabBarController = self.parent?.parent as? UITabBarController {
                tabBarController.selectedIndex = 2
            }
        }else if (indexPath.row == 3){
            if let tabBarController = self.parent?.parent as? UITabBarController {
                tabBarController.selectedIndex = 3
            }
        }else if (indexPath.row == 4){
            if let tabBarController = self.parent?.parent as? UITabBarController {
                tabBarController.selectedIndex = 4
            }
        }
    }
}


