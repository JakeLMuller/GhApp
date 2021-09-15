//
//  LogInViewController.swift
//  mychart
//
//  Created by Garnet Health on 6/17/21.
//

import UIKit
import LocalAuthentication

class LogInViewController: UIViewController, UITextFieldDelegate, WPAPIAuthenticationDelegate  {
    var delegate: MenuDelegate?
    
    func loginSucceeded() {
        activityIndicator.stopAnimating()
               activityIndicator.isHidden = true
        bannerView.isHidden = true;
         var check = WPAPIHomepage.accessResultForHomepage();
               if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(false){
                   navigationController?.pushViewController(vc, animated: true)
        }
        
        
        
    }
    @IBAction func biometricAuthClicked(_ sender: UIButton) {
        self.bannerView.isHidden = false
        self.activityIndicator.isHidden = false;
        WPAPIAuthentication.login(withBiometricAuthentication: self)
    }
    
    @IBAction func passcodeButtonClicked(_ sender: UIButton) {
        let alert = UIAlertController(title: "Passcode", message: "Enter your 4 digit passcode", preferredStyle: .alert)
        
        alert.addTextField { (textField: UITextField) in
            textField.keyboardType = UIKeyboardType.numberPad
        }
        
        alert.addAction(UIAlertAction(title: "Enter", style: .default, handler: { (action: UIAlertAction) in
            guard let textfield = alert.textFields!.first as UITextField? else {
                return
            }
            guard let text = textfield.text as String? else {
                return
            }
            self.bannerView.isHidden = false
            self.activityIndicator.isHidden = false;
            WPAPIAuthentication.login(withPasscode: text, delegate: self)
        }))
        
        alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        
        self.present(alert, animated: true, completion: nil)
    }
    
    func updateSecondaryLoginButtons() {
        let screenSize = UIScreen.main.bounds
        let screenWidth = screenSize.width
        let screenHeight = screenSize.height
        passcodeButton.isHidden = !WPAPIAuthentication.isPasscodeEnabled()
        if (!WPAPIAuthentication.isPasscodeEnabled() == false){
            Password.frame.origin.x = (screenWidth * 0.1)
            passcodeButton.frame.size.height = Password.frame.size.height
            passcodeButton.frame.origin.x = (Password.frame.origin.x + Password.frame.size.width + 10)
            passcodeButton.frame.origin.y = Password.frame.origin.y
            passcodeButton.layer.borderColor   = UIColor.darkGray.cgColor
            passcodeButton.layer.shadowColor = UIColor.black.cgColor
            passcodeButton.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
            passcodeButton.layer.shadowRadius = 8
            passcodeButton.layer.shadowOpacity = 0.2
            
        }else{
            passcodeButton.isHidden = true
        }
        if WPAPIAuthentication.isBiometricAuthenticationEnabled() {
            biometricAuthButton.isHidden = false
            Username.frame.origin.x = (screenWidth * 0.1)
            Username.frame.size.width = (screenWidth * 0.67);
            biometricAuthButton.frame.size.height = Username.frame.size.height
            biometricAuthButton.frame.origin.x = (Username.frame.origin.x + Username.frame.size.width + 10)
            biometricAuthButton.frame.origin.y = Username.frame.origin.y
            biometricAuthButton.frame.size.width = (screenWidth * 0.17);
            biometricAuthButton.layer.borderColor   = UIColor.darkGray.cgColor
            biometricAuthButton.layer.shadowColor = UIColor.black.cgColor
            biometricAuthButton.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
            biometricAuthButton.layer.shadowRadius = 8
            biometricAuthButton.layer.shadowOpacity = 0.2
           
            
            let context = LAContext()

            var authError: NSError?
            if context.canEvaluatePolicy(.deviceOwnerAuthenticationWithBiometrics, error: &authError) {
                if #available(iOS 11.0, *) {
                    if context.biometryType == LABiometryType.faceID {
                        biometricAuthButton .setTitle("Use Face ID", for: UIControl.State.normal);
                    }
                    else if context.biometryType == LABiometryType.touchID {
                        biometricAuthButton .setTitle("Use Touch ID", for: UIControl.State.normal);
                    }
                } else {
                    biometricAuthButton .setTitle("Use Touch ID", for: UIControl.State.normal);
                }
            }

        }
        else {
            biometricAuthButton.isHidden = true
        }
    }
    @IBAction func signUpAction(_ sender: Any) {
    let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "SignUp")
           self.navigationController?.pushViewController(vc, animated: true)
}

@IBAction func fUserName(_ sender: Any) {
    let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "fUsername")
    self.navigationController?.pushViewController(vc, animated: true)
}
@IBAction func fPassword(_ sender: Any) {
    let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "fPassword")
                      self.navigationController?.pushViewController(vc, animated: true)
}
@IBAction func signInAsGuest(_ sender: Any) {
    if let tabBarController = self.parent?.parent as? UITabBarController {
        tabBarController.selectedIndex = 0
    }
}
func loginFailedWithError(_ error: Error) {
        activityIndicator.stopAnimating()
               activityIndicator.isHidden = true
        bannerView.isHidden = true;
        var msg : String? = "failed"
                       var title : String? = "Error"
                       if let localizedError = error as NSError? {
                           msg = localizedError.localizedDescription
                           title = localizedError.localizedFailureReason
                       }
                       let alert = UIAlertController(title: title, message:msg, preferredStyle: UIAlertController.Style.alert)
                       alert.addAction(UIAlertAction(title: "OK", style: UIAlertAction.Style.default, handler: nil))
                       self.present(alert, animated: true, completion: nil)
    }
    
    func getPresentationViewController() -> UIViewController {
         return self
    }
    
    var bannerView = UIView(frame: CGRect.zero)
   var activityIndicator: UIActivityIndicatorView!
   
    @IBOutlet weak var Password: UITextField!
    
    @IBOutlet weak var Username: UITextField!
    
    
    
    @IBOutlet weak var SignGB: UIButton!
   
    
    
    @IBOutlet weak var scrollView: UIScrollView!
    @IBOutlet weak var biometricAuthButton: UIButton!
    @IBOutlet weak var passcodeButton: UIButton!
    @IBOutlet weak var ForgotUsername: UIButton!
    @IBOutlet weak var ButtonLogin: UIButton!
    @IBOutlet weak var SignInButton: UIButton!
    @IBOutlet weak var signInB: UIButton!
    @IBOutlet weak var ForgotPassword: UIButton!
    @IBOutlet weak var signUpText: UILabel!
    @IBOutlet weak var welcomeText: UILabel!
    @IBOutlet weak var mainLogo: UIImageView!
    override func viewDidLoad() {
       
        
       super.viewDidLoad()
       self.addDoneButtonOnKeyboard()
      
       let screenSize = UIScreen.main.bounds
       let screenWidth = screenSize.width
       let screenHeight = screenSize.height
       mainLogo.frame.origin.y = 5
        mainLogo.frame.origin.x = (screenWidth * 0.175)
       mainLogo.frame.size.width = (screenWidth * 0.65);
       mainLogo.frame.size.height = (screenHeight * 0.18);
        
        var currentHeightOffest =   (screenHeight * 0.18) + 5;
        if (screenWidth > 450){
                   currentHeightOffest =   currentHeightOffest + 10
        }
        welcomeText.frame.origin.y = currentHeightOffest
        welcomeText.frame.origin.x = ((screenWidth - welcomeText.frame.size.width) / 2)
        
        
        currentHeightOffest =   currentHeightOffest + welcomeText.frame.size.height + 5;
        
        signUpText.frame.origin.y = currentHeightOffest
        signUpText.frame.origin.x = ((screenWidth - signUpText.frame.size.width) / 2)
       //Load saved password and username because this template is for internal testing only
    
        currentHeightOffest =   currentHeightOffest + signUpText.frame.size.height + 50;
        
        Username.frame.origin.y = currentHeightOffest
        
        Username.frame.origin.x = (screenWidth * 0.125)
        Username.frame.size.width = (screenWidth * 0.75);
        Username.frame.size.height = (screenHeight * 0.05);
        Username.layer.borderColor   = UIColor.darkGray.cgColor
        Username.layer.shadowColor = UIColor.black.cgColor
        Username.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        Username.layer.shadowRadius = 8
        Username.layer.shadowOpacity = 0.2
        
        currentHeightOffest =   currentHeightOffest + Username.frame.size.height + 30;
        
        Password.frame.origin.y = currentHeightOffest
        Password.frame.origin.x = (screenWidth * 0.125)
        Password.frame.size.width = (screenWidth * 0.75);
        Password.frame.size.height = (screenHeight * 0.05);
        Password.layer.borderColor   = UIColor.darkGray.cgColor
        Password.layer.shadowColor = UIColor.black.cgColor
        Password.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        Password.layer.shadowRadius = 8
        Password.layer.shadowOpacity = 0.2
        
       currentHeightOffest =   currentHeightOffest + Password.frame.size.height + 9;
        ForgotPassword.frame.origin.y = currentHeightOffest
        ForgotPassword.frame.origin.x = (screenWidth * 0.54)
        
        
        ForgotUsername.frame.origin.y = currentHeightOffest
        ForgotUsername.frame.origin.x = (screenWidth * 0.20)
        if (screenWidth > 450){
            ForgotPassword.frame.origin.x = (screenWidth * 0.65)
            ForgotUsername.frame.origin.x = (screenWidth * 0.23)
        }
        
        currentHeightOffest =   currentHeightOffest + ForgotPassword.frame.size.height + 50;
        if (screenWidth > 450){
            currentHeightOffest =   currentHeightOffest + 50
        }
        ButtonLogin.frame.origin.y = currentHeightOffest
        ButtonLogin.frame.origin.x = (screenWidth * 0.135)
        ButtonLogin.frame.size.width = (screenWidth * 0.75);
        ButtonLogin.frame.size.height = (screenHeight * 0.06);
        ButtonLogin.layer.cornerRadius = 10
        ButtonLogin.clipsToBounds = false
        ButtonLogin.layer.borderColor   = UIColor.darkGray.cgColor
        ButtonLogin.layer.shadowColor = UIColor.black.cgColor
        ButtonLogin.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        ButtonLogin.layer.shadowRadius = 8
        ButtonLogin.layer.shadowOpacity = 0.6
        
        currentHeightOffest =   currentHeightOffest + ButtonLogin.frame.size.height + 30;
        if (screenWidth > 450){
                   currentHeightOffest =   currentHeightOffest + 20
        }
        
       SignInButton.frame.origin.y = currentHeightOffest
       SignInButton.frame.origin.x = (screenWidth * 0.135)
       SignInButton.frame.size.width = (screenWidth * 0.75);
       SignInButton.frame.size.height = (screenHeight * 0.06);
       SignInButton.layer.cornerRadius = 10
       SignInButton.clipsToBounds = false
       SignInButton.layer.borderColor   = UIColor.darkGray.cgColor
        SignInButton.layer.shadowColor = UIColor.black.cgColor
        SignInButton.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        SignInButton.layer.shadowRadius = 8
        SignInButton.layer.shadowOpacity = 0.6

        
        self.updateSecondaryLoginButtons()
        activityIndicator = UIActivityIndicatorView()
        activityIndicator.center = self.view.center
        activityIndicator.hidesWhenStopped = true
        activityIndicator.center = self.view.center
        activityIndicator.color = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)

        bannerView = UIView(frame: CGRect(x: 0, y: 0, width: screenSize.width , height: screenSize.height ))
        bannerView.backgroundColor = UIColor.black.withAlphaComponent(0.6)
        view.addSubview(bannerView);
        
        activityIndicator.startAnimating()
        view.addSubview(activityIndicator)
        bannerView.isHidden = true
        activityIndicator.isHidden = true;
        scrollView.contentSize = CGSize(width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height+210)
        scrollView.frame.size.width = UIScreen.main.bounds.width;
        // Do any additional setup after loading the view.
    }
        func addDoneButtonOnKeyboard(){
            let doneToolbar: UIToolbar = UIToolbar(frame: CGRect.init(x: 0, y: 0, width: SignInButton.frame.origin.y + SignInButton.frame.size.height + 100, height: 50))
            doneToolbar.barStyle = .default

            let flexSpace = UIBarButtonItem(barButtonSystemItem: .flexibleSpace, target: nil, action: nil)
            let done: UIBarButtonItem = UIBarButtonItem(title: "Done", style: .done, target: self, action: #selector(self.doneButtonAction))

            let items = [flexSpace, done]
            doneToolbar.items = items
            doneToolbar.sizeToFit()

            Username.inputAccessoryView = doneToolbar
            Password.inputAccessoryView = doneToolbar
        }
@objc func doneButtonAction(){
    Username.resignFirstResponder()
    Password.resignFirstResponder()
}
    
    private func setupLeftNavItem() {
        
        let followButton = UIButton(type: .system)
        followButton.setImage(UIImage(systemName:  "line.horizontal.3"), for: .normal)
        followButton.frame = CGRect(x: 0, y: 0, width: 34, height: 34)
        followButton.contentMode = .scaleAspectFit
        followButton.tintColor = .white
        followButton.addTarget(self, action: #selector(handleMenu), for: .touchUpInside)
        navigationItem.leftBarButtonItem = UIBarButtonItem(customView: followButton)
        
    }
    @objc func handleMenu(){
            delegate?.menuHandler(index: -1)
     }
override func viewDidAppear(_ animated: Bool) {
                
                let vc = self.navigationController?.viewControllers.first
                if vc == self.navigationController?.visibleViewController {
                    setupNavigationBarItems()
                }
                if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(true){
                    navigationController?.pushViewController(vc, animated: true)
                }else{
                  logout()
                }
        
           // only logout when we come to this view controller if the user was
           // previously successfully logged in.
           
           
    }
       @IBAction func passwordRecoveryClicked(_ sender: Any) {
           self.present(WPAPIPrelogin.getRecoverPasswordController(), animated: true, completion: nil)
       }
       // MARK: login/logout
       func logout() {
           WPAPIAuthentication.logout()
       }
       
       func login() {
           //Disable login button during login to prevent multiple requests
         
           //WPAPIAuthentication.login(withUsername: Username.text!, password: Password.text!, delegate: self)
        WPAPIAuthentication.login(withUsername: Username.text!, password: Password.text!, delegate: self)
       }
   
    
    @IBAction func SignIn(_ sender: Any) {
        let dateFormatter = DateFormatter()
        
        dateFormatter.dateFormat = "MM/dd/yyyy"
        // Convert String to Date
        let date = dateFormatter.date(from: "04/15/2021")! ;
        
        
       let today = NSDate()
        
        //Get just MM/dd/yyyy from current date

        //Convert to NSDate
        let startDateComparisionResult:ComparisonResult = today.compare(date )
        
        if (startDateComparisionResult == ComparisonResult.orderedDescending){
            bannerView.isHidden = false
            activityIndicator.isHidden = false;
                login()
        }else{
            let alert = UIAlertController(title: "My Chart Disabled", message:"My Chart functionality is disabled until after the 4/15 release of the new home page. ", preferredStyle: UIAlertController.Style.alert)
                  alert.addAction(UIAlertAction(title: "OK", style: UIAlertAction.Style.default, handler: nil))
                  self.present(alert, animated: true, completion: nil)
        }
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
