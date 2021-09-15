//
//  SmallLongCardView.swift
//  mychart
//
//  Created by Garnet Health on 6/14/21.
//

import UIKit

class SmallLongCardView: UICollectionViewCell {
    let ScreenSize = UIScreen.main.bounds
    let image = UIImageView(image: UIImage(named: "logo"))
     let topLabel = UILabel(frame: CGRect(x: 0, y: 0, width: 200, height: 30))
     let bottomLabel = UILabel(frame: CGRect(x: 0, y: 0, width: 200, height: 30))
    override init(frame: CGRect) {
        super.init(frame: frame)
        backgroundColor = .white
        image.frame.size.width = frame.width/5
        image.frame.size.height = frame.size.height/3.5
        image.frame.origin.x = 10
        image.frame.origin.y = ((frame.size.height - (frame.size.height/2))/2)
        if ScreenSize.height > 1000 {
            image.frame.size.width = 100
            image.frame.size.height = 100
            image.frame.origin.x = 20
        }
        topLabel.frame.size.height = 60
        topLabel.frame.origin.x = image.frame.size.width + 10
        topLabel.frame.size.width = frame.width - image.frame.size.width - 15
        topLabel.frame.origin.y = 15;
        topLabel.font = UIFont.systemFont(ofSize: 23)
        topLabel.textAlignment = .center
        topLabel.numberOfLines = 2
        topLabel.textColor = .black
        
        bottomLabel.frame.origin.x = image.frame.size.width + 10
        bottomLabel.frame.size.width = frame.width - image.frame.size.width - 15
        bottomLabel.frame.size.height = 80
        bottomLabel.frame.origin.y = topLabel.frame.origin.y + topLabel.frame.size.height + 10;
        bottomLabel.font = UIFont.systemFont(ofSize: 18)
        bottomLabel.textAlignment = .center
        bottomLabel.textColor = .lightGray
        bottomLabel.numberOfLines = 4
        bottomLabel.lineBreakMode = .byWordWrapping
        
        addSubview(image)
        addSubview(topLabel)
        addSubview(bottomLabel)
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        layer.cornerRadius = frame.width / 2
        layer.cornerRadius = 10
       layer.borderColor   = UIColor.darkGray.cgColor
       layer.shadowColor = UIColor.black.cgColor
       layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
       layer.shadowRadius = 8
       layer.shadowOpacity = 0.55
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError()
    }
    
    
    
}
