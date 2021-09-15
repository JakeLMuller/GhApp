//
//  WPAlertType.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/5/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

typedef NS_ENUM(NSInteger, WPAlertType) {
    
    WPAlertTypeUnknown = 0,
    
    // Account
    WPAlertTypePasswordExpire = 1,                 // passwordexpire
    WPAlertTypeNoEmailOnFile = 2,                  // emptyemail
    WPAlertTypeNewReleasedDocument = 3,            // newreleaseddocuments
    
    // Visits
    WPAlertTypeUpcomingAppts = 20,                 // upcomingappointments
    WPAlertTypeTelemedicine = 21,                  // telemedicine
    WPAlertTypeSchedulingTicket = 23,              // tickets not currently handled in MO so dont handle on client
    WPAlertTypeFastPassOffers = 24,
    WPAlertTypeFastPassExpired = 25,
    WPAlertTypeRecentEncounter = 26,               // deprecated 22 and switched to this
    
    // Messages & Letters
    WPAlertTypeNewMessages = 40,                    // newmessages
    WPAlertTypeNewLetter = 41,                      // newletters
    
    // Labs
    WPAlertTypeNewLabs = 60,                      // newlabs (deprecated)
    WPAlertTypeNewOutpatientLab = 61,               // newoplabs
    WPAlertTypeNewInpatientLab = 62,                // newiplabs
    
    // Medication
    WPAlertTypeRxRefillReady = 80,                  // prescriptionsready (either delivery or pickup)
    WPAlertTypeRxRefillReadyForPickup = 81,         // prescriptionsready (pickuponly)
    WPAlertTypeRxRefillDelivered = 82,              // prescriptionsready (deliveryonly)
    WPAlertTypeRxRefillDue = 83,                    // prescriptionrenewal
    
    // Medical Record
    WPAlertTypeHealthReminders = 100,                 // healthreminders
    
    // Billing and Insurance
    WPAlertTypePaperlessSignup = 120,                // paperlesssignup
    WPAlertTypeBillingBalanceDue = 121,              // balancedue
    WPAlertTypeBillingAutoPayError = 122,            // autopaycreditcardproblem
    WPAlertTypeNewStatements = 123,                 // newstatements
    WPAlertTypeNewBillingLetter = 124,               // newbillingletters
    WPAlertTypeNewInsuranceInvoice = 125,            // newinsuranceinvoice
    
    // Questionnaire
    WPAlertTypeQuestionnaireReminder = 140,          // questionnaires
    
    // Research
    WPAlertTypeJoinResearchStudy = 160,              // research
    
    //Notification Preferences
    WPAlertTypeUpdateNotificationPreferences = 180,
    
    // Estimates
    WPAlertTypeNewEstimates = 190,                   // newestimate
    
    // Financial Assistance
    WPAlertTypeNewFinancialAssistanceLetters = 200,  // newfaletters
	
	// Care Companion
    WCAlertTypeTask = 2000,                          // todotask
	WCAlertTypeTaskChange = 2001,                    // todochanges
    
    // H2G
    WPAlertTypeNewCommunityConnection = 3000,        // H2G alert
    
    //Web Only Alert Type -  This one does not match with a type on the website/webserver.
    //We are using this alert type client side only to create an alert in the table that will be used to jump to the website in an out of application web browser
    WPAlertTypeWebOnly = 9999,
    
    // Mobile only alerts
    WPAlertTypeProxyAccessExpiring = 9998,                   // Proxy Access Expiring
    WPAlertTypePushNotificationRegistration = 9997,                     // Push notification set up
    WPAlertTypeNewFeature = 9996,  // New feature introduction alert
    
    #if HEALTHKIT_ENABLED
    WPAlertTypeHealthKit = 9995,    // HealthKit requires Background App Refresh
    #endif
};
