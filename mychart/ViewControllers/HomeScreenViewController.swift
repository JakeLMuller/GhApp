//
//  HomeScreenViewController.swift
//  App
//
//  Created by Garnet Health on 12/14/20.
//

import UIKit

class HomeScreenViewController: UIViewController, WPAPIMyChartNowFeatureListDelegate{
    func didGetMyChartNowFeatures(_ features: [String]?) {
        let alert = UIAlertController(title: "Failed", message:"Server Error Logging in", preferredStyle: UIAlertController.Style.alert)
          alert.addAction(UIAlertAction(title: "OK", style: UIAlertAction.Style.default, handler: nil))
          self.present(alert, animated: true, completion: nil)
        
    }
    
    
    
    
    @IBOutlet weak var UserIcon: UIImageView!
    @IBOutlet weak var SignInButton: UIButton!
    @IBOutlet weak var Username: UILabel!
    @IBOutlet weak var SubViewBG: UIView!
    @IBOutlet weak var trailing: NSLayoutConstraint!
    @IBOutlet weak var leading: NSLayoutConstraint!
    @IBOutlet weak var MyScrollView: UIScrollView!
    
    @IBOutlet weak var PayMyBillButton: UIButton!
    
    @IBOutlet weak var NewsButton: UIButton!
    @IBOutlet weak var AppointmentButton: UIButton!
    @IBOutlet weak var TelemedButton: UIButton!
    @IBOutlet weak var LocationButton: UIButton!
    @IBOutlet weak var MyChartButton: UIButton!
    
    @IBOutlet weak var menuBarTop: UIScrollView!
    @IBOutlet weak var pButton: UIButton!
    @IBOutlet weak var p2: UILabel!
    @IBOutlet weak var p1: UILabel!
    @IBOutlet weak var pWelcome: UILabel!
    @IBOutlet weak var pLogo: UIImageView!
    @IBOutlet weak var mainImg: UIImageView!
    @IBOutlet weak var bgPicForMenu: UIImageView!
    @IBOutlet weak var logoGH: UIImageView!
    @IBOutlet weak var BannerImage: UIButton!
    @IBOutlet var MainView: UIView!
    @IBOutlet weak var ParnetView: UIView!
    var menuIsOut = false;
    override func viewDidLoad() {
        super.viewDidLoad()
        // leading.constant = 0
        //trailing.constant = -20
        let screenSize = UIScreen.main.bounds
        let screenWidth = screenSize.width
        let screenHeight = screenSize.height
        navigationController?.navigationBar.barTintColor = UIColor(hexString: "5c0239")
        navigationController?.navigationBar.tintColor = UIColor.white
        navigationController?.navigationBar.titleTextAttributes = [.foregroundColor: UIColor.white]
        MyScrollView.backgroundColor = UIColor.white
        
        if (screenWidth > 450){
             menuBarTop.frame.size.width = (screenWidth * 0.5);
             menuBarTop.frame.origin.x = (0)
             menuBarTop.frame.origin.y = (screenWidth * 0.07)
             
             BannerImage.frame.size.width = screenWidth;
             let gettempheight = ((screenWidth * 635) / 1800);
             BannerImage.frame.size.height = gettempheight;
             BannerImage.frame.origin.x = (0)
             bgPicForMenu.isHidden = true
            
             MyChartButton.frame.origin.y = (gettempheight)
             MyChartButton.frame.origin.x = (0)
             MyChartButton.frame.size.width = (screenWidth * 0.35);
             MyChartButton.frame.size.height = (screenHeight * 0.12);
           
            
             PayMyBillButton.frame.size.width = (screenWidth * 0.34);
             PayMyBillButton.frame.origin.x = (screenWidth * 0.34)
             PayMyBillButton.frame.origin.y = (gettempheight)
             PayMyBillButton.frame.size.height = (screenHeight * 0.12);
            
            
             LocationButton.frame.size.width = (screenWidth * 0.34);
             LocationButton.frame.origin.x = (screenWidth * 0.67)
             LocationButton.frame.origin.y = (gettempheight)
             LocationButton.frame.size.height = (screenHeight * 0.12);
            
             TelemedButton.frame.size.width = (screenWidth * 0.34);
             TelemedButton.frame.origin.x = (0)
             TelemedButton.frame.origin.y = (gettempheight + MyChartButton.frame.size.height)
             TelemedButton.frame.size.height = (screenHeight * 0.12);
            
             AppointmentButton.frame.size.width = (screenWidth * 0.34);
             AppointmentButton.frame.origin.x = (screenWidth * 0.33)
             AppointmentButton.frame.origin.y = (gettempheight + MyChartButton.frame.size.height)
             AppointmentButton.frame.size.height = (screenHeight * 0.12);
            
             NewsButton.frame.size.width = (screenWidth * 0.34);
             NewsButton.frame.origin.x = (screenWidth * 0.67)
             NewsButton.frame.origin.y = (gettempheight + MyChartButton.frame.size.height)
             NewsButton.frame.size.height = (screenHeight * 0.12);
             var newStartHeight = (gettempheight + (MyChartButton.frame.size.height * 2))
            
            logoGH.frame.origin.y = newStartHeight ;
            logoGH.frame.size.width = (screenWidth * 0.50);
            logoGH.frame.size.height = (screenHeight * 0.30);
            logoGH.frame.origin.x = (screenWidth * 0.25)
            
            newStartHeight =  newStartHeight + logoGH.frame.size.height ;
            
            mainImg.frame.origin.y = newStartHeight - 60;
            mainImg.frame.size.width = (screenWidth );
            mainImg.frame.size.height = (screenHeight * 0.65);
            mainImg.frame.origin.x = (0)
            mainImg.layer.borderColor   = UIColor.darkGray.cgColor
            mainImg.layer.shadowColor = UIColor.black.cgColor
            mainImg.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
            mainImg.layer.shadowRadius = 8
            mainImg.layer.shadowOpacity = 0.45
            
            newStartHeight =  newStartHeight + mainImg.frame.size.height + 20;
            
            pLogo.frame.origin.y = newStartHeight + 10;
            pLogo.frame.origin.x = ((screenWidth - 50) / 2)
            pLogo.frame.size.width = 50;
            pLogo.frame.size.height = 50;
            
            newStartHeight =  newStartHeight + pLogo.frame.size.height + 20;
            pWelcome.frame.origin.y = newStartHeight ;
            pWelcome.frame.origin.x = (screenWidth * 0.32)
            pWelcome.frame.size.width = (screenWidth * 0.60);
            pWelcome.font = UIFont(name: pWelcome.font.fontName, size: 35)
            
            newStartHeight =  newStartHeight + pWelcome.frame.size.height + 20;
            p1.frame.origin.y = newStartHeight ;
            p1.frame.origin.x = (screenWidth * 0.10)
            p1.frame.size.width = (screenWidth * 0.80);
            p1.adjustsFontSizeToFitWidth = true
            p1.font = UIFont(name: p1.font.fontName, size: 28)
            
            
            newStartHeight =  newStartHeight + p1.frame.size.height + 5;
            p2.frame.origin.y = newStartHeight;
            p2.frame.origin.x = (screenWidth * 0.10)
            p2.frame.size.width = (screenWidth * 0.80);
            p2.adjustsFontSizeToFitWidth = true
            p2.font = UIFont(name: p2.font.fontName, size: 28)
            
            newStartHeight =  newStartHeight + p2.frame.size.height + 10;
            pButton.frame.origin.y = newStartHeight;
            pButton.frame.origin.x = (screenWidth * 0.20)
            pButton.frame.size.width = (screenWidth * 0.60);
            pButton.layer.cornerRadius = 10
           pButton.clipsToBounds = false
           pButton.layer.borderColor   = UIColor.darkGray.cgColor
           pButton.layer.shadowColor = UIColor.black.cgColor
           pButton.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
           pButton.layer.shadowRadius = 8
           pButton.layer.shadowOpacity = 0.45
            
            menuBarTop.frame.size.width = ( screenWidth * 0.50)
        }else{
        
            MyChartButton.frame.size.width = (screenWidth * 0.34);
            PayMyBillButton.frame.size.width = (screenWidth * 0.34);
            PayMyBillButton.frame.origin.x = (screenWidth * 0.33)
            LocationButton.frame.size.width = (screenWidth * 0.34);
            LocationButton.frame.origin.x = (screenWidth * 0.67)
            
            TelemedButton.frame.size.width = (screenWidth * 0.34);
            AppointmentButton.frame.size.width = (screenWidth * 0.34);
            AppointmentButton.frame.origin.x = (screenWidth * 0.33)
            NewsButton.frame.size.width = (screenWidth * 0.34);
            NewsButton.frame.origin.x = (screenWidth * 0.67)
            
            
            pButton.layer.cornerRadius = 10
            pButton.clipsToBounds = false
            pButton.layer.borderColor   = UIColor.darkGray.cgColor
            pButton.layer.shadowColor = UIColor.black.cgColor
            pButton.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
            pButton.layer.shadowRadius = 8
            pButton.layer.shadowOpacity = 0.45
        }
        if (screenHeight <= 740){
            menuBarTop.frame.size.height = (screenHeight * 0.3);
            menuBarTop.frame.origin.y = (screenWidth * 0.075)
        }
       
        menuBarTop.frame.size.width = ( screenWidth )
        MyScrollView.contentSize.width = screenWidth;
        MyScrollView.layer.backgroundColor   = UIColor.white.cgColor
        MyScrollView.frame.size.width = screenWidth;
        SubViewBG.frame.size.width = screenWidth ;
        SubViewBG.frame.origin.x = BannerImage.frame.origin.x;
        SubViewBG.isHidden = true
        if let currentPerson = WPAPIPersonManager.getCurrentPerson(){
            var currentPatientForAlerts: IWPPatient? = currentPerson as? IWPPatient //nil if non-patient proxy
            var getName = currentPerson.getNickname()
            let getPic = currentPerson.getPhotoUsingFallback(true);
            
            if (getName != ""){
                Username.text = getName
                SignInButton.setTitle("Log Out", for: .normal)
                UserIcon.image = getPic
            }
            
        }

        // Do any additional setup after loading the view.
    }
    func createSubView (){
        
        let label = UILabel(frame: CGRect(x: 0, y: 0, width: 200, height: 50))
           label.font = UIFont.systemFont(ofSize: 30)
           label.textAlignment = .left
           label.textColor = .black
           label.text = "Garnet Health is here, with you and for you."
        
        let labelInfo = UILabel(frame: CGRect(x: 0, y: 0, width: 200, height: 50))
          labelInfo.font = UIFont.systemFont(ofSize: 30)
          labelInfo.textAlignment = .left
          labelInfo.textColor = .black
          labelInfo.text = "We changed names to reflect that we are a unified health system delivering exceptional care throughout the region. The providers, services, facilities and appointment locations you are accustomed to, and your health records, have not changed. We are still the same independently-run healthcare organization on which you rely."
        
        MyScrollView.addSubview(label)
        MyScrollView.addSubview(labelInfo)
        
        var webView = WKWebView(frame: viewForEmbeddingWebView.frame, configuration: WKWebViewConfiguration() )
        self.viewForEmbeddingWebView.addSubview(webView)
        self.webView.allowsBackForwardNavigationGestures = true
        let myURL = URL(string: "https://www.apple.com")
        let myRequest = URLRequest(url: myURL!)
        webView.load(myRequest)
        
        
        var customView = UIView(frame: CGRect(x: 0, y: 0, width: 200, height: 50))
        
        
        
        
        MyScrollView.addSubview(customView)
        
    }
    @IBAction func Menu(_ sender: Any) {
        if menuIsOut == false{
            leading.constant = 330
            trailing.constant = -330
            menuIsOut = true
            SubViewBG.isHidden = false
            SubViewBG.backgroundColor = UIColor.black.withAlphaComponent(0.5)
        }else{
            leading.constant = 0
            trailing.constant = -20
            menuIsOut = false
            SubViewBG.isHidden = true
        }
        UIView.animate(withDuration: 0.2, delay: 0.0, options: .curveEaseIn,  animations: {
                        self.view.layoutIfNeeded()
            
        }) { (animationComplete) in print("Complete")
        }

    }
    override func viewDidAppear(_ animated: Bool) {
        let screenSize = UIScreen.main.bounds
        let screenWidth = screenSize.width
        let screenHeight = screenSize.height
        let imageName = "bannerbottom.png"
               let image = UIImage(named: imageName)
               let imageView = UIImageView(image: image!)
             
        if (screenHeight <= 740){
            imageView.frame = CGRect(x: 0, y: UIScreen.main.bounds.height+815, width: screenWidth, height: 90)
           MyScrollView.contentSize = CGSize(width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height+860)
        }else{
            imageView.frame = CGRect(x: 0, y: UIScreen.main.bounds.height+755, width: screenWidth, height: 90)
           MyScrollView.contentSize = CGSize(width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height+810)
        }
        MyScrollView.addSubview(imageView)
    }
    
    @IBAction func MenuButtonPayBill(_ sender: Any) {
        if (WPAPIBilling.accessResultForBillingAccountList() == .accessAllowed) {
          if (WPAPIBilling.isWebBillingAvailable()) {
                      let vc: UIViewController = WPAPIBilling.getModalWebBillingController()!
                      self.present(vc, animated: true, completion: nil)
                  } else {
                      //Otherwise, push vc to navigation stack
                      let vc: UIViewController = WPAPIBilling.getAccountListController()!
                      self.navigationController?.pushViewController(vc, animated: true)
                  }
        }else{
             let vc = UIStoryboard.init(name: "HomeScreen", bundle: Bundle.main).instantiateViewController(withIdentifier: "HomeScreenViewController")
                            self.navigationController?.pushViewController(vc, animated: true)
            }
    }
    @IBAction func LaunchPayMyBill(_ sender: Any) {
        if (WPAPIBilling.accessResultForBillingAccountList() == .accessAllowed) {
          if (WPAPIBilling.isWebBillingAvailable()) {
                      let vc: UIViewController = WPAPIBilling.getModalWebBillingController()!
                      self.present(vc, animated: true, completion: nil)
                  } else {
                      //Otherwise, push vc to navigation stack
                      let vc: UIViewController = WPAPIBilling.getAccountListController()!
                      self.navigationController?.pushViewController(vc, animated: true)
                  }
        }else{
             let vc = UIStoryboard.init(name: "HomeScreen", bundle: Bundle.main).instantiateViewController(withIdentifier: "loginMain")
                            self.navigationController?.pushViewController(vc, animated: true)
        }
        
    }
    
    @IBAction func MenuButtonMyChart(_ sender: Any) {
        var check = WPAPIHomepage.accessResultForHomepage();
        if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
            navigationController?.pushViewController(vc, animated: true)
        }else{
              let vc = UIStoryboard.init(name: "HomeScreen", bundle: Bundle.main).instantiateViewController(withIdentifier: "loginMain")
                             self.navigationController?.pushViewController(vc, animated: true)
        }
    }
    @IBAction func LaunchMyChart(_ sender: Any) {
        var check = WPAPIHomepage.accessResultForHomepage();
        if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
            navigationController?.pushViewController(vc, animated: true)
        }else{
              let vc = UIStoryboard.init(name: "HomeScreen", bundle: Bundle.main).instantiateViewController(withIdentifier: "loginMain")
                             self.navigationController?.pushViewController(vc, animated: true)
        }
    }
    
    @IBAction func SignInButton(_ sender: Any) {
        performSegue(withIdentifier: "Login", sender: self)
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
