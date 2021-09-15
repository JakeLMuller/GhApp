//
//  LogInViewController.swift
//  App
//
//  Created by Garnet Health on 12/14/20.
//

import UIKit
import LocalAuthentication

class LogInViewController: UIViewController, UITextFieldDelegate, WPAPIAuthenticationDelegate  {
    
    func loginSucceeded() {
        activityIndicator.stopAnimating()
               activityIndicator.isHidden = true
        performSegue(withIdentifier: "Test", sender: self)
        
        
        
    }
    
    func loginFailedWithError(_ error: Error) {
        activityIndicator.stopAnimating()
               activityIndicator.isHidden = true
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
    

   var activityIndicator: UIActivityIndicatorView!
    @IBOutlet weak var Password: UITextField!
    @IBOutlet weak var Username: UITextField!
    
   
    
    override func viewDidLoad() {
        super.viewDidLoad()
                   
       //Load saved password and username because this template is for internal testing only
    
        // Do any additional setup after loading the view.
    }
    override func viewDidAppear(_ animated: Bool) {
            performSegue(withIdentifier: "Test", sender: self)
           super.viewDidAppear(animated)
           
           // only logout when we come to this view controller if the user was
           // previously successfully logged in.
           
           
    }
       
       // MARK: login/logout
       func logout() {
           WPAPIAuthentication.logout()
       }
       
       func login() {
           //Disable login button during login to prevent multiple requests
         
           //WPAPIAuthentication.login(withUsername: Username.text!, password: Password.text!, delegate: self)
        WPAPIAuthentication.login(withUsername: "Cocoa", password: "Password1", delegate: self)
       }
   
    
    @IBAction func SignIn(_ sender: Any) {
        activityIndicator = UIActivityIndicatorView()
               activityIndicator.center = self.view.center
               activityIndicator.hidesWhenStopped = true
               activityIndicator.center = self.view.center
               if #available(iOS 13.0, *) {
                   activityIndicator.style = UIActivityIndicatorView.Style.large
               } else {
                   // Fallback on earlier versions
               }
               activityIndicator.startAnimating()
                       view.addSubview(activityIndicator)
        login()
        
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
