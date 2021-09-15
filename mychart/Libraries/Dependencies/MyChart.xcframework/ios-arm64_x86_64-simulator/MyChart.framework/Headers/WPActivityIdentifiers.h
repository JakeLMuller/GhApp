//
//  WPActivityIdentifiers.h
//  MyChart
//
//  Created by Mohammed Rangwala on 2/1/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief MyChart standard activities
 * @warning If you add a new activity, make sure to add it to this enum
 */
typedef NS_ENUM(NSInteger, WPActivity) {
    WPActivityUnknown,
    WPActivityCustomApp,
    WPActivityTestResults,
    WPActivityMessages,
    WPActivityAppointments,
    WPActivityScheduling,
    WPActivityMedications,
    WPActivityHealthReminders,
    WPActivityHealthSummary,
    WPActivityBilling,
    WPActivityQuestionnaires,
    WPActivityLegacyGeneralQuestionnaire,   // This is only needed to support versions before Nov 20. For Nov 20 and later, use WPActivityAskQuestionnaire
    WPActivityHistoryQuestionnaire,
    WPActivityScreening,
    WPActivityTrackMyHealth,
    WPActivityAccountSettings,
    WPActivityNotificationPreferences,
    WPActivityInsuranceLegacy,
    WPActivityAskQuestion,
    WPActivityRefillMedications,
    WPActivityWebSchedulingTicket,
    WPActivityWebQuickSchedule,
    WPActivityPaperlessSignup,
    WPActivityPersonalize,
    WPActivityPatientEstimates,
    WPActivityShareEverywhere,
    WPActivityEVisit,
    WPActivitySymptomChecker,
    WPActivityFinancialAssistance,
    WPActivityPremiumBilling,
    WPActivityPremiumBillingPayment,
    WPActivityPremiumBillingAutopay,
    WPActivityDebugAppointmentMonitoring,
    WPActivityECheckIn,
    WPActivityPreventiveCare,
    
    
    // Upcoming and past visit details
    WPActivityFutureAppointmentDetails,
    WPActivityVisitSummary,
    
    // Messages
    WPActivitySendAMessage,
    WPActivitySendACustomerServiceMessage,
    WPActivityLegacySendAMessage,
    WPActivityLegacySendACustomerServiceMessage,
    WPActivityLegacyMessageDetails,
    WPActivityMessageDetails,
    WPActivityTestResultsDetails,
    
    //New feature introduction
    WPActivityCommunityOnboarding,
    
    //Shell activity identifier
    WPActivityCareTeam,
    WPActivityMyChartNowHome,
    
    //Community connections for H2G
    WPActivityCommunityInitialConnection,
    WPActivityCommunityManageMyAccounts,
    WPActivityCommunityManageMyAccountsLinking,
    
    WPActivityUnsupported,
    
    WPActivityLetters,
    //On My Way
    WPActivityOnMyWay,
    
    //Education
    WPActivityEducation,
    
    //Family Access
    WPActivityFamilyAccess,
    
    //Document Center
    WPActivityDocumentCenter,
    
    //password change
    WPActivityChangePassword,
    
    //FDI activities
    WPActivityFdiLink,
    
    //Custom modes
    WPActivityCustomMode,
    
    //Unspecified MO or pinch-to-zoom web browser
    WPActivityGenericMoJump,
    
    //Homepage sub-activities
    WPActivityBillingPayments,
    WPActivityBillingDetails,
    WPActivityBillingAutopay,
    WPActivityPatientEstimateDetails,
    
    //To Do and sub-activites
    WPActivityToDo,
    WPActivityToDoChanges,
    WPActivityToDoChangeDetails,
    WPActivityToDoOverdue,
    
    //Pregnancy Hub and sub-activities
    WPActivityPregnancyHubEnroll,
    
    //Open attachment
    WPActivityOpenAttachment,
    
    //Homepage Hubs
    WPActivityDocumentHub,
    
    //Contact Verification
    WPActivityContactVerification,
    WPActivityEmailVerification,
    WPActivityMobileVerification,
    
    // Upcoming Orders
    WPActivityUpcomingOrders,
    
    //Shortcut personalization
    WPActivityShortcutPersonalization,
    
    //Covid Status
    WPActivityCovidStatus,
    
    //Flowsheet
    WPActivityAddFlowsheetReadings,
    
    //Ask General Questionnaire
    WPActivityAskQuestionnaire,
    
    //Log out
    WPActivityLogout,
    
    // Hello Patient
    WPActivityAppointmentArrivalSetup,
    WPActivityAppointmentArrivalCheckIn,
    
    // Tiff attachment (can launch preview in acordex viewer or download)
    WPActivityTiffAttachment,
    
    // Mobile App Review
    WPActivityAppReview,
};

