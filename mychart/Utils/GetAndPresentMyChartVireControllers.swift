//
//  GetAndPresentMyChartVireControllers.swift
//  mychart
//
//  Created by Garnet Health on 6/30/21.
//

import Foundation
extension UIViewController{
 
func MyChartVcs(Index : Int?)  {
    var index = Index
    switch index {
    //appointments
    case 0:
        if let currentPerson = WPAPIPersonManager.getCurrentPerson(){
            
        
            var check =  WPAPIAppointments.accessResultForAppointmentCheckIn(for: currentPerson as! IWPPatient)
             let vc = WPAPIAppointments.getListController()
            self.navigationController?.pushViewController(vc!, animated: true)
        }else{
            
            let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
           self.navigationController?.pushViewController(vc, animated: true)
        }
     
    // "native" home page
    case 1:
        if let vc = WPAPIHomepage.getControllerThatManagesNavbarVisibility(true){
            self.navigationController?.pushViewController(vc, animated: true)
        }else{
            
            let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
           self.navigationController?.pushViewController(vc, animated: true)
        }
    case 2:
    // billing
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
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
        
    // test result details
    case 3:
      
        let check = WPAPITestResults.accessResultForTestResultDetails()
        if (check == .accessAllowed){
            let vc  = WPAPITestResults.getListController()
            self.navigationController?.pushViewController(vc!, animated: true)
        }else{
            
            let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
           self.navigationController?.pushViewController(vc, animated: true)
        }
    
    // Account Settings
    case 4:
        let check = WPAPIAccountSettings.accessResultForAccountSettings()
        if (check == .accessAllowed){
            let vc  = WPAPIAccountSettings.getController()
            self.navigationController?.pushViewController(vc!, animated: true)
        }else{
            
            let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
           self.navigationController?.pushViewController(vc, animated: true)
        }
       
        
    // Insurance
    case 5:
        let check = WPAPIInsurance.accessResultForInsurance()
        if (check == .accessAllowed){
            let vc  = WPAPIInsurance.getController()
            self.navigationController?.pushViewController(vc!, animated: true)
        }else{
            
            let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
           self.navigationController?.pushViewController(vc, animated: true)
        }
    //document center
    case 6:
        let check = WPAPIDocumentCenter.accessResultForDocumentCenter()
        if (check == .accessAllowed){
            let vc  = WPAPIDocumentCenter.getModalDocumentCenterController()!
            self.present(vc, animated: true, completion: nil)
        }else{
            
            let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
           self.navigationController?.pushViewController(vc, animated: true)
        }
     //appointments
    case 7:
        if WPAPIAppointmentLocationManager.getAppointmentArrivalFeatureStatus() == .enabled {
            WPAPIAppointmentLocationManager.disableAppointmentArrivalFeature()
        } else if let vc = WPAPIActivity.getViewControllerForActivity(withDeepLink: WPAPIActivity.appointmentArrivalSetup) {
            self.present(vc, animated: true)
        } else {
            //CustomDeepLinkManager.showToast(message: "There was an error launching Appointment Arrival setup.", navigationController: self.navigationController)
        }
     //Estimates
    case 8:
        if (WPAPIBilling.accessResultForBillingEstimates() == .accessAllowed) {
                 
                    let vc: UIViewController = WPAPIBilling.getEstimatesController()!
                    self.present(vc, animated: true, completion: nil)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
    //letters
    case 9:
        if (WPAPILetters.accessResultForLetters() == .accessAllowed) {
                 
            let vc: UIViewController = WPAPILetters.getModalLettersController()!
            self.present(vc, animated: true, completion: nil)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
        // Health Summary
    case 10:
        if (WPAPIHealthSummary.accessResultForHealthSummary() == .accessAllowed) {
                 
                let vc: UIViewController = WPAPIHealthSummary.getController()!
                    self.navigationController?.pushViewController(vc, animated: true)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
        // Link Accounts
    case 11:
        if (WPAPILinkMyAccounts.accessResultForLinkMyAccounts() == .accessAllowed) {
                 
            let vc: UIViewController = WPAPILinkMyAccounts.getController()!
                    self.navigationController?.pushViewController(vc, animated: true)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
    // Medications
    case 12:
        if (WPAPIMedications.accessResultForMedications() == .accessAllowed) {
                 
            let vc: UIViewController = WPAPIMedications.getController()!
            self.present(vc, animated: true, completion: nil)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
        //Personalize
    case 13:
        if (WPAPIPersonalize.accessResultForPersonalize() == .accessAllowed) {
                 
            let vc: UIViewController = WPAPIPersonalize.getController()!
                    self.navigationController?.pushViewController(vc, animated: true)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
   //Messages
    case 14:
        if (WPAPIMessages.accessResultForMessageList() == .accessAllowed) {
                 
            let vc: UIViewController = WPAPIMessages.getMessageListController()!
                    self.navigationController?.pushViewController(vc, animated: true)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
        //Questions
    case 15:
        if (WPAPIQuestionnaires.accessResultForQuestionnaires() == .accessAllowed) {
                 
            let vc: UIViewController = WPAPIQuestionnaires.getModalQuestionnairesController()!
               self.present(vc, animated: true, completion: nil)
                         
               }else{
                
                let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
               self.navigationController?.pushViewController(vc, animated: true)
            }
    case 16:
        if (WPAPIShareEverywhere.accessResultForShareEverywhere() == .accessAllowed) {
                 
            let vc: UIViewController = WPAPIShareEverywhere.getController()!
                    self.navigationController?.pushViewController(vc, animated: true)
                         
        }else{
            
            let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
           self.navigationController?.pushViewController(vc, animated: true)
        }
        //Locations
    case 17:
        let vc = LocationViewController()
        self.navigationController?.pushViewController(vc, animated: true)
        
    case 18:
        let vc = NewsViewController()
        self.navigationController?.pushViewController(vc, animated: true)
        
    case 19:
        let vc = ScheduleAppViewController()
        self.navigationController?.pushViewController(vc, animated: true)
    case 20:
        let vc = SafetyViewController()
        self.navigationController?.pushViewController(vc, animated: true)
    case 21:
        let vc = ToGarnetViewController()
        self.navigationController?.pushViewController(vc, animated: true)
    case 22:
        let vc = TeleMedViewController()
        self.navigationController?.pushViewController(vc, animated: true)
    case 23:
        let vc = MCViewController()
        self.navigationController?.pushViewController(vc, animated: true)
    case 24:
        let vc = PCViewController()
        self.navigationController?.pushViewController(vc, animated: true)
    case 25:
        let vc = AboutViewController()
        self.navigationController?.pushViewController(vc, animated: true)
        
    default:
         let vc = UIStoryboard.init(name: "Main", bundle: Bundle.main).instantiateViewController(withIdentifier: "LogIn")
        self.navigationController?.pushViewController(vc, animated: true)
}
}
}
