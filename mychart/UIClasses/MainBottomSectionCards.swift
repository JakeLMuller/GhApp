//
//  MainBottomSectionCards.swift
//  mychart
//
//  Created by Garnet Health on 6/16/21.
//

import UIKit

class MainBottomSectionCards: UICollectionViewCell {
    let imageView = UIImageView(image: UIImage(named: "logo"))
    let topLabel = UILabel(frame: CGRect(x: 0, y: 0, width: 200, height: 30))
    let bottomLabel = UILabel(frame: CGRect(x: 0, y: 0, width: 200, height: 30))
    override init(frame: CGRect) {
        super.init(frame: frame)
        let screenSize = UIScreen.main.bounds
        let screenWidth = screenSize.width
        backgroundColor = .white
        topLabel.frame.size.width = frame.width
        topLabel.frame.size.height = 40
        topLabel.frame.origin.y =  15;
        topLabel.layer.cornerRadius = 20
        topLabel.font = UIFont.systemFont(ofSize: 14)
        topLabel.textAlignment = .center
        topLabel.backgroundColor = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
        topLabel.textColor = .white
        
        imageView.frame.origin.y = 75;
        imageView.frame.size.width = frame.width
        imageView.frame.size.height = frame.height - 100
        
        bottomLabel.frame.size.width = frame.width - 10
        bottomLabel.frame.size.height = imageView.frame.size.height + 25 + 10
        bottomLabel.frame.origin.y = 10;
        bottomLabel.font = UIFont.systemFont(ofSize: 20)
        bottomLabel.textAlignment = .center
        bottomLabel.textColor = .black
        
        
        addSubview(imageView)
        addSubview(topLabel)
        
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        layer.cornerRadius = frame.width / 2
        layer.cornerRadius = 2
       layer.borderColor   = UIColor.darkGray.cgColor
       layer.shadowColor = UIColor.black.cgColor
       layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
       layer.shadowRadius = 8
       layer.shadowOpacity = 0.6
        layer.cornerRadius = 20
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError()
    }
}
