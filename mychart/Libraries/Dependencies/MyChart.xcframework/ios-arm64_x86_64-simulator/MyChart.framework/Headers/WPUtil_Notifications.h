//
//  WPUtil_Notifications.h
//  iChart
//
//  Created by Larry Irwin II on 9/28/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.

static NSString * const WPNotificationReadMessage		= @"EpicWP.notification.readMessage";
static NSString * const WPNotificationViewedStatement		= @"EpicWP.notification.WPNotificationReadStatement";
static NSString * const WPNotificationViewedTestResult		= @"EpicWP.notification.WPNotificationViewedTestResult";
static NSString * const WPNotificationDeleteMessage     = @"EpicWP.notification.deleteMessage";
static NSString * const WPNotificationCheckReply        = @"EpicWP.notification.checkReply";
static NSString * const WPNotificationReadResult		= @"EpicWP.notification.readResult";
static NSString * const WPNotificationForceBadgeUpdate	= @"EpicWP.notification.forceUpdateBadges";
static NSString * const WPNotificationViewedEstimate    = @"EpicWP.notification.viewedEstimate";
static NSString * const WPNotificationRefreshMessages        = @"EpicWP.notification.messageSent";

static NSString * const WPNotificationUserInfoPatientIndexKey = @"EpicWP.notification.wpNotificationUserInfoPatientIndexKey";
static NSString * const WPNotificationUserInfoTestResultIDKey = @"EpicWP.notification.wpNotificationUserInfoTestResultIDKey";
static NSString * const WPNotificationUserInfoMessageKey = @"EpicWP.notification.wpNotificationUserInfoMessageKey";
static NSString * const WPNotificationClearUsernames = @"EpicWP.notification.clearUsernames";

static NSString * const WPNotificationUserInfoAnimated				= @"EpicWP.notification.userInfoAnimated";

static NSString * const WPNotificationMedicationRefilled			= @"EpicWP.notification.medicationRefilled";

static NSString * const WPNotificationCreditCardPaymentFinished     = @"EpicWP.notification.creditCardPaymentFinished";

static NSString * const WPNotificationPaperlessSignupSucceeded      = @"EpicWP.notification.paperlessSignupSucceeded";
static NSString * const WPNotificationPaperlessCanceled            = @"EpicWP.notification.paperlessCanceled";
/*!
 @brief Notification when the link between this device and the logged in organization has a status change
 */
static NSString * const WPNotificationHKStatusDidChange = @"EpicWP.notification.hkStatusDidChange";
/*!
 @brief Notification when a row has been updated or is being updated for this device/pt/organization
 */
static NSString * const WPNotificationHKSyncUpdate = @"EpicWP.notification.hkSyncComplete";
extern NSString * const WPNotificationLaunchActivity;

static NSString * const WPNotificationLaunchActivityURLKey = @"EpicWP.notification.launchActivity.URLString";
static NSString * const kWPNotificationLaunchActivityTypeKey = @"kWPNotificationLaunchActivityTypeKey";
static NSString * const kWPNotificationLaunchActivityPatientKey = @"kWPNotificationLaunchActivityPatientKey";
static NSString * const kWPNotificationLaunchActivityOriginatingViewKey = @"kWPNotificationLaunchActivityOriginatingViewKey";
extern NSString * const kWPActivityCustomFeatureKey; //Key for storing custom features in the userInfo for activities and for notifications

static NSString * const WPNotificationAddedFlowsheetReadings = @"EpicWP.notificaiton.wpFlowsheetAddedReadings";
static NSString * const WPNotificationDeletedFlowsheetReadings = @"EpicWP.notificaiton.wpFlowsheetDeletedReadings";
static NSString * const WPNotificationKeyFlowsheetReadings = @"EpicWP.notification.wpFlowsheetReadings";

static NSString * const WPNotificationRefreshAlerts = @"EpicWP.notification.wpRefreshAlerts";
static NSString * const WPNotificationRefreshFutureAppointments = @"EpicWP.notification.wpRefreshFutureAppointments";
static NSString * const WPNotificationECheckInClosed = @"EpicWP.notification.wpECheckInClosed";
static NSString * const WPNotificationQuestionnairesComplete = @"EpicWP.notification.wpQuestionnairesComplete";
static NSString * const WPNotificationRescheduleComplete= @"EpicWP.notification.wpRescheduleComplete";

static NSString * const WPNotificationCancellationRequestSentForAppointmentsKey = @"EpicWP.notification.wpCancellationRequestSentForAppointmentKey";
static NSString * const WPNotificationDeletedAppointmentsKey = @"EpicWP.notification.wpDeletedAppointmentsKey";
static NSString * const WPNotificationCanceledApptAlertShownKey = @"EpicWP.notification.wpCanceledApptAlertShownKey";
static NSString * const WPNotificationDirectlyCancelledAppointmentsKey = @"EpicWP.notification.wpDirectlyCancelledAppointmentsKey";
static NSString * const WPNotificationNewAppointmentScheduled = @"EpicWP.notification.wpNewAppointmentScheduled";
static NSString * const WPNotificationNewAppointmentCSNKey = @"EpicWP.notification.wpNotificationNewAppointmentCSNKey";
static NSString * const WPNotificationNewAppointmentIsCSNEncrypted= @"EpicWP.notification.wpNotificationNewAppointmentIsCSNEncrypted";
static NSString * const WPNotificationNewVisitSummaryViewed = @"EpicWP.notification.wpNotificationNewVisitSummaryViewed";

static NSString * const WPNotificationRefreshAccountSettingsView = @"EpicWP.notification.wpRefreshAccountSettingsView";
static NSString * const WPNotificationSecondaryLoginUpdated = @"EpicWP.notification.wpSecondaryLoginUpdated";
static NSString * const WPNotificationPinItemUpdate = @"EpicWP.notification.wpPinItemUpdate";
static NSString * const WPNotificationRegisteredForPush = @"EpicWP.notification.wpRegisteredForPush";
static NSString * const WPNotificationRegisteredForPushResult = @"EpicWP.notification.wpRegisteredForPushResult";
static NSString * const WPNotificationPushAlertSelected = @"EpicWP.notification.wpPushAlertSelected";
static NSString * const WPNotificationPreferencesUpdateAlertSelected = @"EpicWP.notification.wpPreferencesUpdateAlertSelected";
static NSString * const kWPNotificationPreferencesUpdateEmailKey = @"EpicWP.notification.wpPreferencesUpdateEmailKey";
static NSString * const kWPNotificationPreferencesUpdatePhoneKey = @"EpicWP.notification.wpPreferencesUpdatePhoneKey";
static NSString * const WPNotificationUpdatedPreferences = @"EpicWP.notification.wpUpdatedPreferences";

static NSString * const WPNotificationUpdatedHealthAdvisoryTopic = @"EpicWP.notification.wpUpdatedHealthAdvisoryTopic";


static NSString * const WPNotificationUpdatedPatientPreferences = @"EpicWP.notification.wpNotificationUpdatedPatientPreferences";

static NSString * const WPNotificationFastPassConsumed=@"EpicWP.notification.WPFastPassConsumed";
static NSString * const WPNotificationAppointmentCancelled=@"EpicWP.notification.WPAppointmentCancelled";

static NSString * const WPNotificationFDILinksLoaded=@"EpicWP.notification.WPAppointmentFDILoaded";

static NSString * const WPNotificationAlternativeLoginPopupDismissed=@"EpicWP.notification.WPAlternativeLoginPopupDismissed";

static NSString * const WPNotificationToDoReminderTimeChanged = @"EpicWP.notification.WPToDoReminderTimeChanged";

static NSString * const WPNotificationAppointmentArrivalSettingChanged = @"EpicWP.notification.WPNotificationAppointmentArrivalSettingChanged";
static NSString * const WPNotificationAppointmentArrivalMonitoredAppointmentChanged = @"EpicWP.notification.WPNotificationAppointmentArrivalMonitoredAppointmentChanged";
static NSString * const WPNotificationAppointmentArrivalStatusChanged = @"EpicWP.notification.WPNotificationAppointmentArrivalStatusChanged";

static NSString * const WPNotificationAppointmentArrivalCheckInComplete = @"EpicWP.notification.WPNotificationAppointmentArrivalCheckInComplete";

static NSString * const WPNotificationCampaignsRefresh = @"EpicWP.notification.wpCampaignsRefresh";
static NSString * const WPNotificationKeyPatientIndex = @"EpicWP.notificationkey.WPNotificationKeyPatientIndex";

/*!
 @brief Notification when new device has been linked to Healthkit and the added readings queue has emptied
 */
static NSString *const WPNotificationNewDeviceReadingsAdded = @"EpicWP.notification.wpNewDeviceReadingsAdded";
static NSString *const WPNotificationHealthKitLinkStatusChanged = @"EpicWP.notification.wpHeahthKitLinkStatusChanged";

/*!
 @brief Category identifiers used for Local Notifications
 */
static NSString *const kWPHKLocalNotificationBackgroundSyncFailedID = @"com.epic.MyChart.HealthKit.LocalNotification.BackgroundSyncFailed";
static NSString *const kWPAppointmentArrivalNotificationEnterRegion = @"com.epic.MyChart.AppointmentArrival.LocalNotification.didEnterRegion";
static NSString *const kWPTelehealthNotificationVideoVisit = @"com.epic.MyChart.Telehealth.LocalNotification.videoVisitInProgress";

/*!
 @brief Key for a flowsheet in the user dictionary
 */
static NSString *const WPNotificationKeyFlowsheet = @"EpicWP.notification.wpFlowsheetKey";

static NSString *const WPNotificationDidSelectOrg = @"EpicWP.notification.wpDidSelectOrg";

static NSString * const WPNotificationPatientPhotoUpdated = @"EpicWP.notification.WPNotificationPatientPhotoUpdated";

static NSString * const WPNotificationKeyPatientPhotoIndex = @"EpicWP.notification.WPNotificationKeyPatientPhotoIndex";

static NSString * const WPNotificationAlertProcessed = @"EpicWP.notification.WPNotificationAlertProcessed";
static NSString * const WPNotificationAlertKeyPatientIndex = @"EpicWP.notificationkey.WPNotificationAlertKeyPatientIndex";
static NSString * const WPNotificationAlertKeyAlertCount = @"EpicWP.notificationkey.WPNotificationAlertKeyAlertCount";

static NSString * const WPNotificationAlertsReloaded = @"EpicWP.notification.WPNotificationAlertsReloaded";

static NSString * const WPNotificationPushLock = @"EpicWP.notification.pushLock";
static NSString * const WPNotificationPushNotificationReceivedPreLogin = @"EpicWP.notification.pushNotificationReceivedPreLogin";
static NSString * const kWPNotificationUserInfoOrgID = @"orgID";
static NSString * const WPNotificationPushNotificationsTurnedOff = @"EpicWP.notification.turnedOff";
static NSString * const WPNotificationLanguageNotAllowed = @"EpicWP.notification.WPLanguageNotAllowed";

static NSString * const WPNotificationToDoFilterUpdated = @"EpicWP.notification.WPToDoFilterUpdated";
static NSString * const WPNotificationCareCompanionGeneric = @"EpicWP.notification.WPCareCompanionGeneric";

//Community connections for H2G
static NSString * const WPNotificationCommunityConnectionUpdated = @"EpicWP.notification.WPNotificationCommunityConnectionUpdated";
static NSString * const WPNotificationCompletedCommunityNewFeatureAlertWorkflow = @"EpicWP.notification.WPNotificationCompletedCommunityNewFeatureAlertWorkflow";
static NSString * const WPNotificationNewCommunityConnectionViewed= @"EpicWP.notification.WPNotificationNewCommunityConnectionViewed";
static NSString * const WPNotificationCommunityUpdateComplete= @"EpicWP.notification.WPNotificationCommunityUpdateComplete";
static NSString * const WPNotificationDidGetCommunityUpdateStatus= @"EpicWP.notification.WPNotificationDidGetCommunityUpdateStatus";
static NSString * const WPNotificationCommunityRefreshBannerNeedUpdate= @"EpicWP.notification.WPNotificationCommunityRefreshBannerNeedUpdate";

//Letters
static NSString * const WPNotificationReadLetter        = @"EpicWP.notification.readLetter";
static NSString * const WPNotificationUserInfoLetterKey = @"EpicWP.notification.wpNotificationUserInfoLetterKey";

//Premium Billing
static NSString * const WPNotificationPremiumBillPayed = @"EpicWP.notification.WPPremiumBillPayed";

//Launch epicmychart deep link activity
static NSString * const WPNotificationLaunchEpicMyChartDeepLinkActivity = @"EpicWP.notification.WPNotificationLaunchEpicMyChartDeepLinkActivity";
static NSString * const WPNotificationPromptOrganizationSelection = @"EpicWP.notification.WPNotificationPromptOrganizationSelection";
static NSString * const WPNotificationAppLaunchedWithNonECGPDF = @"EpicWP.notification.WPNotificationAppLaunchedWithNonECGPDF";

//Medications
static NSString * const WPNotificationCommunityMedicationsRefill = @"EpicWP.notification.WPNotificationCommunityMedicationsRefilled";

//Care Team
static NSString * const WPNotificationCareTeamWidgetNeedReloaded = @"EpicWP.notification.WPNotificationCareTeamWidgetNeedReloaded";

//Refreshes the MyChartWebViewController
static NSString * const WPNotificationRefreshWebView = @"EpicWP.notification.WPRefreshWebView";