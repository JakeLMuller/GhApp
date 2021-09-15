//
//  AboutViewController.swift
//  mychart
//
//  Created by Garnet Health on 9/1/21.
//

import UIKit

class AboutViewController: UIViewController {
    let mainLogo1 = UIImageView(image: UIImage(named: "logo"))
    let labelBottom = UILabel()
    let labelTop = UILabel()
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = UIColor.white
        // Do any additional setup after loading the view.
        let screenSize = UIScreen.main.bounds
        let screenWidth = screenSize.width
        let screenHeight = screenSize.height
        mainLogo1.frame.origin.y = 100
        mainLogo1.frame.origin.x = (screenWidth - 50)/2
        mainLogo1.frame.size.width = 50
        mainLogo1.frame.size.height = 50
        labelTop.text = "About Garnet Health Mobile"
        labelTop.frame.origin.x = 0
        labelTop.frame.size.width = screenWidth
        labelTop.frame.size.height = 100
        labelTop.frame.origin.y =  150;
        labelTop.font = UIFont.boldSystemFont(ofSize: 32)
        labelTop.textAlignment = .center
        labelTop.textColor = .black
        labelTop.numberOfLines = 3
        labelTop.lineBreakMode = .byWordWrapping
        
        labelBottom.text = "Dark mode not support and HealthKit not enabled in this release in all aspects of application. Welcome to Garnet Health. We are dedicated to providing you and your family exceptional care and excellent patient experiences. Our health system offers three hospital locations and a growing medical practice that provides care throughout Orange and Sullivan Counties in New York. Access services and information from Garnet Health through our Mobile app experience. Features include: •    Access to MyChart Health Information Resources •    Find a Doctor, Location or Service •    Instant driving direction •    Online scheduling with Garnet Health Doctors •    Pay Bill •    News information •    MyChart notifications. At Garnet Health, your health matters most. Whether you require emergency care, urgent care, a doctor’s appointment or specialty care, we offer a wide range of inpatient and outpatient services. Garnet Health. Exceptional Lives Here."
        labelBottom.frame.origin.x = 25
        labelBottom.frame.size.width = screenWidth - 50
        labelBottom.frame.size.height = 200
        labelBottom.frame.origin.y = labelTop.frame.origin.y + labelTop.frame.height + 10;
        labelBottom.font = UIFont.systemFont(ofSize: 18)
        labelBottom.textAlignment = .center
        labelBottom.textColor = .black
        labelBottom.numberOfLines = 20
        labelBottom.lineBreakMode = .byWordWrapping
        view.addSubview(mainLogo1)
        view.addSubview(labelTop)
        view.addSubview(labelBottom)
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
