//
//  test.swift
//  mychart
//
//  Created by Garnet Health on 6/10/21.
//

import UIKit

class test: UICollectionViewCell {
    let imageView = UIImageView(image: UIImage(named: "logo"))
    let label = UILabel(frame: CGRect(x: 0, y: 0, width: 200, height: 50))
    override init(frame: CGRect) {
        super.init(frame: frame)
        backgroundColor = .white
        imageView.frame.size.width = frame.width
        imageView.frame.size.height = frame.height - 40
        label.frame.size.width = frame.width
        label.font = UIFont.systemFont(ofSize: 14)
        label.textAlignment = .center
        label.backgroundColor = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
        label.textColor = .white
        label.layer.cornerRadius = 10
        label.frame.origin.y = frame.size.height - label.frame.height;
        addSubview(imageView)
        addSubview(label)
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
