//
//  TableViewCell.swift
//  mychart
//
//  Created by Garnet Health on 6/28/21.
//

import UIKit

class TableViewCell: UITableViewCell {
        
    @IBOutlet weak var textMenu: UILabel!
    @IBOutlet weak var imgMenu: UIImageView!
        
        override func awakeFromNib() {
            super.awakeFromNib()
            // Initialization code
        }
        func setData(_ data:[String:AnyObject] ) {
            if let cellTxt = data["txtMenu"] as? String
            {
                self.textMenu.text = cellTxt

            }
            if let cellImg = data["imgMenu"] as? String
            {
                self.imgMenu.image = UIImage(named: cellImg)

            }
        }

        override func setSelected(_ selected: Bool, animated: Bool) {
            super.setSelected(selected, animated: animated)
        }
        
    }
