//
//  MainPageSection2Cells.swift
//  mychart
//
//  Created by Garnet Health on 6/10/21.
//

import UIKit

class MainPageSection2Cells: UICollectionViewCell {
    let imageView = UIImageView(image: UIImage(named: "logo"))
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        let screenSize = UIScreen.main.bounds
        let screenWidth = screenSize.width
        backgroundColor = .white
        imageView.frame.size.width = frame.width
        imageView.frame.size.height = frame.height
        addSubview(imageView)
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        layer.cornerRadius = frame.width / 2
        layer.cornerRadius = 2
       layer.borderColor   = UIColor.darkGray.cgColor
       layer.shadowColor = UIColor.black.cgColor
       layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
       layer.shadowRadius = 8
       layer.shadowOpacity = 0.2
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError()
    }
}
