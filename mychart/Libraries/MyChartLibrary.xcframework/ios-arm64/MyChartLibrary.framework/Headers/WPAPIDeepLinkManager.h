//
//  WPAPIDeepLinkManager.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 5/14/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

/**
 This notification is posted when the app is launched from an external source with a deep link after a user has logged in.
 The notification is posted when the app is launched by a deep link, regardless of which patient the deep link is for. As such, you should compare the WPR ID contained within the deep link info dictionary (use the key "wpr") with the account ID of the current person and, if necessary, switch the context to the correct person, before launching the activity that corresponds to the deep link.
 */
extern NSString * _Nonnull  const WPAPINotificationLaunchEpicMyChartDeepLinkActivity;
extern NSString * _Nonnull  const WPAPINotificationAppLaunchedWithNonECGPDF;

/**
 Delegate protocol used to notify a listener when an epichttp or epicmychart deep link is tapped, which could be contained in a push notification or a link in a third party app. This API is for those who use the standard MyChart springboard for epicmychart deep link and who use the standard MyChart message details activity for epichttp deep link.
 */
@protocol WPAPIDeepLinkActionDelegate <NSObject>

/**
 @brief Callback upon tapping of an epichttp or epicmychart deep link, which could be contained in message details, in a push notification payload or a link in a third party app. This API is for those who use the standard MyChart springboard for epicmychart deep link and who use the standard MyChart message details activity for epichttp deep link.
 @param params a params dictionary containing url, wprid (aka MyChart account ID), feature, csn, dat, orderid, mid (all in lowercase). e.g. ["wprid": "8765", "feature": "labdetail", "orderid": "123"]
 @return true if the listener chose to do something with the epicmychart deep link tap, false if the listener chose to ignore the tap
 @discussion
 The following is the list of supported features:
 @b"labs"@b - Test Results
 @b"labdetail"@b - Test Results Details
 @b"appointments"@b - Appointments List
 @b"visitdetails"@b - Future Appointment Details
 @b"visitsummary", @b"visitsummary/detail", @b"visitsummary/notes"@b - Past Appointment Details
 @b"admissionsummary/detail", @b"admissionsummary/notes"@b - Past Admission Details
 @b"apptmake"@b - Scheduling
 @b"apptsched"@b - Scheduling
 @b"scheduling"@b - Scheduling
 @b"medslist", @b"clinical/medications"@b - Medications
 @b"healthmaint"@b - Health Reminder or ToDo if it's supported
 @b"todo"@b - ToDo
 @b"snapshot", @b"healthsummary", @b"immunizations"@b - Health Summary
 @b"questionnairelist", @b"questionnaires"@b - Questionnaires
 @b"pefltlst", @b"trackmyhealth"@b - Track My Health
 @b"pefltdtl", @b"addflowsheetreadings"@b - Add Flowsheet Readings
 @b"insurance"@b - Insuarnce
 @b"letters"@b - Letters
 @b"onmyway"@b - On My Way
 @b"ondemandtelehealth", @b"telehealth"@b - On Demand Telehealth
 @b"accountsummary", @b"billing/summary", @b"billing/details", @b"billing/payment/makepayment" - Billing
 @b"premiumbilling"@b @b"insurance/premiumbilling", @b""insurance/premiumpayment/paymentlanding", @b""insurance/premiumautopay/start" - Premium Billing
 @b"billing/paperless"@b - Paperless billing
 @b"letters"@b - Letters
 @b"messages"@b - Messages
 @b"askquestion"@b - Message list (prompting for message type)
 @b"messagedetail", @b"messaging/review"@b - Inbox Message Details
 @b"medadvice"@b - Get Medical Advice
 @b"custsvc", @b"billingcustsvc"@b - Send A Customer Service Message
 @b"patientestimates"@b - Patient Estimates
 @b"preferences", @b"security", @b"accountsettings", @b"mobileaccountsettings"@b - Account Settings
 @b"mobilepersonalize"@b - Personalize
 @b"communitymanage"@b - Community Manage (in Account Settings)
 @b"careteam", @b"clinical/careteam"@b - Careteam
 @b"mydocs"@b - Document center (My Documents)
 @b"documents"@b - Document Hub
 @b"todo", @b"todochanges"@b - Care companion
 @b"patientestimates", @b"estimates", @b"estimates/getestimatedetails"@b - Estimates
 @b"communitymanage", @b"community/manage"@b - Manage my accounts
 @b"symptomchecker"@b - Symptom checker
 @b"fdiredirect"@b - FDI redirection activity
 @b"shareeverywhere"@b - Share everywhere
 @b"evisit"@b - Evisits
 @b"echeckin"@b - E check-in
 @b"preventivecare"@b - Preventive care reminders
 @b"coveragedetails"@b - Tapestry coverage
 @b"claims"@b - Claims
 @b"insurance/coveragecard", @b"htmlinsuranceidcard" - ID Cards
 @b"security/changepassword"@b - password change
 @b"education"@b - education
 @b"accountmanagement/sharemyrecord"@b - Sharing Hub
 @b"pregnancyhub/enroll"@b - Care Companion pregnancy updates enrollment workflow
 @b"app/upcoming-orders"@b - Upcoming Orders
 @b"menu/changeshortcuts"@b - Shortcut Personalization
 @b"covidstatus"@b - Covid Status
 @b"appointmentarrival/setup"@b - Hello Patient onboarding/setup
 @b"appointmentarrival/checkin"@b - Check-In for Hello Patient appointment 
 */
- (BOOL)didInvokeDeepLink: (NSDictionary * _Nonnull) params;

@end


/**
 Protocol for getting push notification details. Use it with getPushNotificationDetails only if you intercept push notification and not calling into the standard MyChart push notification logic.
 */
@protocol WPAPIGetPushNotificationDetailsDelegate <NSObject>

/**
 Did get push notification details successfully.
 @param params the  push notification details
 */
- (void)didGetPushNotificationDetails: (NSDictionary * _Nonnull) params;

/**
 Failed to get push notification details
 */
- (void)didFailToGetPushNotificationDetails;

@end


@interface WPAPIDeepLinkManager : NSObject

/**
 Registers a delegate to be notified when an epichttp or epicmychart deep link is tapped, which could be contains in a push notification payload or a link in a third party app. This API is for those who use the standard MyChart springboard for epicmychart deep link and who use the standard MyChart message details activity for epichttp deep link.

 @param delegate the delegate to register for this event
 */
+ (void)registerDeepLinkActionDelegate: (id <WPAPIDeepLinkActionDelegate> _Nonnull) delegate;

/**
 Unregisters a delegate to be notified when an epicmychart deep link is tapped, which could be contains in a push notification payload or a link in a third party app. This API is for those who use the standard MyChart springboard for epicmychart deep link and who use the standard MyChart message details activity for epichttp deep link.
 */
+ (void)unregisterDeepLinkActionDelegate;


/**
 Check whether there is a valid epicmychart deep link. Call it after authenticated. This works for those who don't use the standard MyChart springboard.

 @return YES if there is a valid epicmychart deep link; NO otherwise
 */
+ (BOOL) hasEpicMyChartDeepLink;

/**
 Get the epicmychart deep link info. The returned dictionary containing url, wprid (aka MyChart account ID), feature, csn, dat, orderid, mid (all in lowercase). e.g. ["wprid": "8765", "feature": "labdetail", "orderid": "123"]. Call hasEpicMyChartDeepLink to check there is a valid epicmychart deep link before calling this API. Otherwise, nil may be returned.
 The following is the list of supported features:
    "labs" - Test Results
    "labdetail","testresults/detail" - Test Results Details
    "appointments" - Appointments List
    "visitdetails" - Future Appointment Details (work with csn)
    "visitsummary" - Past Appointment Details (work with dat)
    "apptmake" - Scheduling
    "apptsched" - Scheduling
    "scheduling" - Scheduling
    "medslist" - Medications
    "healthmaint" - Health Reminder or ToDo if it's supported
    "todo" - ToDo
    "snapshot" - Health Summary
    "immunizations" - Immunizations (in Health Summary)
    "questionnairelist" - Questionnaires
    "pefltlst" - Track My Health
    "pefltdtl" - Add Flowsheet Readings (work with episode id)
    "addflowsheetreadings" -  Add Flowsheet Readings
    "insurance" - Insuarnce
    "onmyway" - On My Way
    "ondemandtelehealth" - On Demand Telehealth
    "premiumbilling" - Billing
    "letters" - Letters
    "messages" - Messages
    "messagedetail" - Inbox Message Details (work with mid)
    "medadvice" - Get Medical Advice
    "custsvc" - Send A Customer Service Message
    "patientestimates" - Patient Estimates
    "accountsettings" - Account Settings
    "communitymanage" - Community Manage (in Account Settings)
    "familyaccess" - Friends and Family Access
    "app/upcoming-orders" - Upcoming orders
 The dictionary may also contain a "filepath" key for Apple Watch ECG PDF file.

 @return a dictionary containing epicmychart deep link info, or nil if there is not a valid epicmychart deep link
 */
+ (NSDictionary * _Nullable) getEpicMyChartDeepLinkInfo;

/**
 Clear epicmychart deep link. Call it after you've consumed the epicmychart deep link.
 */
+ (void) clearEpicMyChartDeepLink;

/**
Manually sets a deep link for consumption post-login. This can be used to explicity provide a deep link to be handled by the standard MyChart home page post-login or simply as a way to store a deep link to be manually retrieved later via a call to getEpicMyChartDeepLinkInfo. This method does not need to be called for push notifications unless you are overriding the default handling.
 @param deepLink a constructed deep link URL, including wprID (aka MyChart account ID) and orgID query parameters, as well as any other parameters necessary for the corresponding feature to load. e.g. "epicmychart://messages?wprID=1&orgID=123"
*/
+ (void) setEpicMyChartDeepLink:(NSString * _Nonnull)deepLink;


/** Get push notification details. The dictionary returned in the callback is the same as documented in getEpicMyChartDeepLinkInfo

 @param pushNotificationID the push notification ID contained in the push notification payload
 @param delegate the delegate that contains deep link info
 */
+ (void) getPushNotificationDetails: (NSString * _Nonnull) pushNotificationID delegate:(_Nonnull id <WPAPIGetPushNotificationDetailsDelegate>) delegate;

@end

