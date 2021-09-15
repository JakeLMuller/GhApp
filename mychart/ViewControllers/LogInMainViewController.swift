//
//  LogInViewController.swift
//  App
//
//  Created by Garnet Health on 12/14/20.
//

import UIKit
import LocalAuthentication

class LogInMainViewController: UIViewController, UITextFieldDelegate, WPAPIAuthenticationDelegate  {
    
    func loginSucceeded() {
        activityIndicator.stopAnimating()
               activityIndicator.isHidden = true
        bannerView.isHidden = true;
        performSegue(withIdentifier: "Test2", sender: self)
        
        
        
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
       mainLogo.frame.origin.y = 40
        mainLogo.frame.origin.x = (screenWidth * 0.175)
       mainLogo.frame.size.width = (screenWidth * 0.65);
       mainLogo.frame.size.height = (screenHeight * 0.18);
        
        var currentHeightOffest =   (screenHeight * 0.18) + 40;
        if (screenWidth > 450){
                   currentHeightOffest =   currentHeightOffest + 50
        }
        welcomeText.frame.origin.y = currentHeightOffest
        welcomeText.frame.origin.x = ((screenWidth - welcomeText.frame.size.width) / 2)
        
        
        currentHeightOffest =   currentHeightOffest + welcomeText.frame.size.height + 5;
        
        signUpText.frame.origin.y = currentHeightOffest
        signUpText.frame.origin.x = ((screenWidth - signUpText.frame.size.width) / 2)
       //Load saved password and username because this template is for internal testing only
    
        currentHeightOffest =   currentHeightOffest + signUpText.frame.size.height + 50;
        
        Username.frame.origin.y = currentHeightOffest
        
        Username.frame.origin.x = (screenWidth * 0.175)
        Username.frame.size.width = (screenWidth * 0.65);
        Username.frame.size.height = (screenHeight * 0.05);
        Username.layer.borderColor   = UIColor.darkGray.cgColor
        Username.layer.shadowColor = UIColor.black.cgColor
        Username.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        Username.layer.shadowRadius = 8
        Username.layer.shadowOpacity = 0.2
        
        currentHeightOffest =   currentHeightOffest + Username.frame.size.height + 30;
        
        Password.frame.origin.y = currentHeightOffest
        Password.frame.origin.x = (screenWidth * 0.175)
        Password.frame.size.width = (screenWidth * 0.65);
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
        SignGB.frame.origin.y = currentHeightOffest
        SignGB.frame.origin.x = (screenWidth * 0.135)
        SignGB.frame.size.width = (screenWidth * 0.75);
        SignGB.frame.size.height = (screenHeight * 0.06);
        SignGB.layer.cornerRadius = 10
        SignGB.clipsToBounds = false
        SignGB.layer.borderColor   = UIColor.darkGray.cgColor
        SignGB.layer.shadowColor = UIColor.black.cgColor
        SignGB.layer.shadowOffset = CGSize(width: 0.3, height: 6.0)
        SignGB.layer.shadowRadius = 8
        SignGB.layer.shadowOpacity = 0.6
        
        
        currentHeightOffest =   currentHeightOffest + SignGB.frame.size.height + 30;
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

        
        // Do any additional setup after loading the view.
    }
    func addDoneButtonOnKeyboard(){
                let doneToolbar: UIToolbar = UIToolbar(frame: CGRect.init(x: 0, y: 0, width: UIScreen.main.bounds.width, height: 50))
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
    override func viewDidAppear(_ animated: Bool) {
        logout()
        let dateFormatter = DateFormatter()
               
               dateFormatter.dateFormat = "MM/dd/yyyy"
               // Convert String to Date
               let date = dateFormatter.date(from: "04/15/2021")! ;
               
               
              let today = NSDate()
               
               //Get just MM/dd/yyyy from current date

               //Convert to NSDate
               let startDateComparisionResult:ComparisonResult = today.compare(date )
               
               if (startDateComparisionResult == ComparisonResult.orderedDescending){
                    let alert = UIAlertController(title: "Log In Required", message:"Please Sign In with your My Chart Account and Password Or Sign In as a Guest", preferredStyle: UIAlertController.Style.alert)
                    alert.addAction(UIAlertAction(title: "OK", style: UIAlertAction.Style.default, handler: nil))
                    self.present(alert, animated: true, completion: nil)
                       super.viewDidAppear(animated)
               }else{
                
                let alert = UIAlertController(title: "My Chart Disabled", message:"My Chart functionality is disabled until after the 4/15 release of the new home page. Please Click Sign in As Guest for the time being.", preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "OK", style: UIAlertAction.Style.default, handler: nil))
                self.present(alert, animated: true, completion: nil)
        
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
        activityIndicator = UIActivityIndicatorView()
               activityIndicator.center = self.view.center
               activityIndicator.hidesWhenStopped = true
               activityIndicator.center = self.view.center
               activityIndicator.color = UIColor(displayP3Red: 92/255, green: 10/255, blue: 58/255, alpha: 255/255)
               if #available(iOS 13.0, *) {
                   activityIndicator.style = UIActivityIndicatorView.Style.large
               } else {
                   // Fallback on earlier versions
               }
               let screenSize = UIScreen.main.bounds
               bannerView = UIView(frame: CGRect(x: 0, y: 0, width: screenSize.width , height: screenSize.height ))
               bannerView.backgroundColor = UIColor.black.withAlphaComponent(0.6)
               view.addSubview(bannerView);
               bannerView.isHidden = false;
               activityIndicator.startAnimating()
                       view.addSubview(activityIndicator)
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
class MyAPIFunctions
{
    static let formatter: DateFormatter = {
        let formatter = DateFormatter()
        formatter.dateFormat = "dd.MM.yyyy"

        // make sure the following are the same as that used in the API
        formatter.timeZone = TimeZone(secondsFromGMT: 0)
        formatter.locale = Locale.current

        return formatter
    }()

    class func shortString(fromDate date: Date) -> String {
        return formatter.string(from: date)
    }

    class func date(fromShortString string: String) -> Date? {
        return formatter.date(from: string)
    }
}
