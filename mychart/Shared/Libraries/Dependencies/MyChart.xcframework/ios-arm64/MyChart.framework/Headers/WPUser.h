//
//  WPUser.h 
//  MyChart
//
//  Created by Epic on 6/3/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPFeatures.h"
#import "WPObject.h"
#import "WPPatientContext.h"
#import "WPOrganizationInfo.h"
#import "WPPatientDisplayManager.h"
#import "WPUtil_Features.h"



@import Authentication;

static int const WPNonPatientProxyIndex = -1;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2011) {
	kEpicTestResultDetailsWithAddenda = 1 << 0,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2012) {
    kEpicBillingServices = 1 << 0,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2013) {
    kEpicHealthAdvisoriesSorted = 1 << 0,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2014) {
    kEpicCustomFeatures = 1 << 0,
    kEpicTrackMyHealthServices = 1 << 1,
    kEpicMedicationsWithAdditionalDetails = 1 << 2,
    kEpicAutoWaitListServices = 1 << 3,
    kEpicInsuranceServices = 1 << 4,
    kEpicHKMultiRow = 1 << 5,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2015) {
    kEpicLoginToken = 1 << 0,
    kEpicCheckMessageReply = 1 << 1,
    kEpicNonPatientBilling = 1 << 2,
    kEpicBrandedAppString = 1 << 3,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2016) {
    kEpicPushNotifications = 1 << 0,
    kEpicClinicalInfo = 1 << 1,
    kEpicPreferencesEdit = 1 << 2,
    kEpicNewAlertsType = 1 << 3,
    kEpicMessageList = 1 << 4,
    kEpicTestResultsList= 1 << 5,
    kEpicVisitsUpcomingList = 1 << 6,
    kEpicVisitsPastList = 1 << 7,
    kEpicProviderPhotos = 1 << 8,
    kEpicGetPatientPrefs = 1 << 9,
    kEpicPatientFriendlyName = 1 << 10,
} ;

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2017) {
    kEpicMessageViewers = 1 << 1,
    kEpicGeolocation = 1 << 2,
    kEpicPatientVisitGuide = 1 << 3,
    kEpicAppointmentFDILinks = 1 << 4,
    kEpicHappyTogether = 1 << 5,
    kEpicPasswordServices = 1 << 6,
    kEpicExternalBillingPage = 1 << 7,
    kEpicCareTeamScheduling = 1 << 8,
    kEpicPatientEstimates = 1 << 9,
    kEpicMarkHMTopicComplete = 1 << 11,
    kEpicMedicationLevelComments = 1 << 12,
    kEpicMyC3Personalization = 1 << 13,
    kEpicToDo = 1 << 14,
    kEpicEVisit = 1 << 15,
    kEpicCampaigns = 1 << 16,
    kEpicShareEverywhere = 1 << 17,
    kEpicTicketScheduling = 1 << 19,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2018) {
    kEpicLogout = 1 << 0,
    kEpicSentMessages = 1 << 1,
    kEpicMOBilling = 1 << 2,
    kEpicCommunityManageExternalAccounts = 1 << 3,
    kEpicMyC3NotificationSettings = 1 << 4,
    kEpicOnMyWay = 1 << 5,
    kEpicMOSymptomChecker = 1 << 6,
    kEpicRecentEncounterAlert = 1 << 7,
    kEpicMOLetters = 1 << 8,
    kEpicWebOnlyAlertJump = 1 << 9,
    kEpicTreatmentTeam = 1 << 10,
    kEpicEducation = 1 << 12,
    kEpicHappeningSoon = 1 << 14,
    kEpicNewEmailValidateAPI = 1 << 15,
    kEpicPharmacyFiltering = 1 << 16,
    kEpicProblemList = 1 << 17,
    kEpicNppMobileOptimizedJump = 1 << 18,
    kEpicMODirectUrl = 1 << 24,
    kEpicEncounterMedications = 1 << 19,
    kEpicEnableSecondaryLoginWithoutPassword = 1 << 20,
    kEpicXOrgTelehealth = 1 << 21,
    kEpicMOHappyTogether = 1 << 22,
    kEpicMOPremiumBilling = 1 << 23,
    kEpicMyC3TimeZoneCustomization = 1 << 25,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2019) {
    kEpicScreenings = 1 << 0,
    kEpicHomePage = 1 << 1, // Homepage controls if the server has the functionality
    kEpicTwoFactorOptIn = 1 << 2,
    kEpicDocumentCenter = 1 << 3,
    kEpicMOMedications = 1 << 4,
    kEpicHMScheduling = 1 <<5,
    kEpicCustomerServiceMessages = 1 << 6,
    kEpicPanelAppointments = 1 << 7,
    kEpicPatientCreatedTasks = 1 << 8,
    kEpicPushNotificationDeepLink = 1 << 9,
    kEpicNewCommunityConnectionAlert = 1 << 11,
    kEpicToDoProgress = 1 << 10,
    kEpicH2GActions = 1 << 12,
    kEpicMyC3TaskTypeNotifications = 1 << 13,
    kEpicH2GPPR2D2 = 1 << 14,
    kEpicMyC3PushNotificationDeepLink = 1 << 15,
    kEpicUpcomingEDVisits = 1 << 16,
    kEpicTreatmentTeam2019 = 1 << 17,
    kEpicGenericMOJump = 1 << 18,
    kEpicPastAdmissions = 1 << 19,
    kEpicH2GAffiliateBranding = 1 << 20,
    kEpicH2GPPAsynLoading = 1 << 21,
    kEpicUseHomePage = 1 << 22 // UseHomePage controls if the server has the new homepage enabled
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2020) {
    kEpicMOMessages = 1 << 0,
    kEpicMOShortcutPersonalization= 1 << 1,
    kEpicExploreMoreAuditing = 1 << 2,
    kEpicCovidStatus = 1 << 3,
    kEpicMOContactVerification = 1 << 4,
    kEpicMOToDoChangeDetails = 1 << 5,
    kEpicBrandingPathsLookup = 1 << 7,
    kEpicToDoPersistentQuestionnaires = 1 << 9,
};

typedef NS_OPTIONS(NSUInteger, EpicServicesAvailable2021) {
    kEpicToDoPatientCreatedTaskSecurityPoints = 1 << 0,
    kEpicAppleWatchRedesign = 1 << 2,
    kEpicUpcomingOrders = 1 << 3,
    kEpicHPRemoveFunIcons = 1 << 4,
    kEpicHowToVideos = 1 << 5,
    kEpicMOPersonalInformation = 1 << 6,
    kEpicMOImmunizations = 1 << 9,
    kEpicCovidPDF = 1 << 11,
    kEpicEMMIEducation = 1 << 13,
};


typedef NS_ENUM(NSInteger, WPCommunityConsentStatus) {
    kWPNoStatus= 0,
    kWPCommunityInactive,
    kWPPrompt,
    kWPCommunityActive,
};

typedef NS_ENUM(NSInteger, WPCommunityLinkStatus) {
    kBlank = 0,
    kSuccess = 1,
    kSessionTokenRequested = 2,
    kSessionTokenObtained = 3,
    kSessionTokenFailed = 4,
    kTicketObtained = 5,
    kTicketFailed = 6,
    kDataRequestFailed = 7,
    kMissingDataDueToInactiveAccount = 1000, // mobile specific status
};

/**
 * User class
 *
 * Holds the information like credentials, list patient of the logged in user.
 */
@interface WPUser : WPObject <IWPUser, PEUserProtocol>

/**
 * The ticket and username represent a unique authentication pair
 * therefore changing either the ticket or the username will result
 * in the authentication/proxy ticket becoming invalid
 */
@property (nonatomic, strong, nullable) NSString* username; // Username
@property (nonatomic, strong, nullable) SessionTicket* ticket; // Encrypted authentication ticket
@property (nonatomic, strong, nullable) NSString* legalName;
@property (nonatomic, strong, nonnull)  UIImage *photo; // npp photo
@property (nonatomic) NSInteger colorIndex;
@property (nonatomic, strong, nullable) NSDate* timestamp; // Time when this ticket was obtained
@property (nonatomic, strong, nullable) NSString* accountID;
@property (nonatomic, strong, nullable) NSMutableArray* patientAccessList; // List of patients the user has accesss to
@property (nonatomic) NSInteger currentPersonIndex; // Currently select person - index into patientAccessList, or -1 for npp, used for KVO in legacy WPHomeTabBarViewController
@property (nonatomic) BOOL isPatient; // True is user is also a patient
@property (nonatomic, strong, nullable) WPFeatures* featureInformation;
@property (nonatomic, strong, nullable) NSMutableArray* auditTrail; // Records user actions that does not involve server access
@property (nonatomic) EpicServicesAvailable2011 available2011Features;
@property (nonatomic) EpicServicesAvailable2012 available2012Features;
@property (nonatomic) EpicServicesAvailable2013 available2013Features;
@property (nonatomic) EpicServicesAvailable2014 available2014Features;
@property (nonatomic) EpicServicesAvailable2015 available2015Features;
@property (nonatomic) EpicServicesAvailable2016 available2016Features;
@property (nonatomic) EpicServicesAvailable2017 available2017Features;
@property (nonatomic) EpicServicesAvailable2018 available2018Features;
@property (nonatomic) EpicServicesAvailable2019 available2019Features;
@property (nonatomic) EpicServicesAvailable2020 available2020Features;
@property (nonatomic) EpicServicesAvailable2021 available2021Features;
@property (nonatomic) BOOL isFullyAuthenticated;
@property (nonatomic, strong, nullable) NSString* homeURL;
@property (nonatomic, assign) BOOL loggedInUsingSAML;
@property (nonatomic, assign) WPCommunityConsentStatus communityConsentStatus; // Happy Together status
@property (nonatomic, assign) BOOL userFDIListLoaded;
@property (nonatomic) BOOL allowTrustedDevices;
@property (nonatomic, strong, nullable) NSString *ssoUsernameForCache;
@property (nonatomic, strong, nullable) NSString* bannerLogoFileName;
@property (nonatomic, assign) BOOL hasAcordexLicense;

-(nullable instancetype)initWithTicket:(nullable SessionTicket*)ticketVal;

- (BOOL) inProxyContext;
-(nonnull NSString*)currentPatientName;
-(nonnull NSString*)nameForProxyDisclaimer;
- (void)switchPatient:(NSInteger)index andNotifyWeb: (BOOL)notify;
- (void)switchPatient:(NSInteger)index;
- (void)switchPatient:(NSInteger)index andNotifyWeb:(BOOL)notify loginProcess:(BOOL)isLoginProces;
- (void)addPatient:(nullable WPPatientContext *) patient;
-(FEATURE_RESPONSE)featureEnabledFor: (nonnull const NSString *)featureName;
-(FEATURE_RESPONSE)featureEnabledForUser: (nonnull const NSString *)featureName;
-(nullable WPPatientContext *)getCurrentPatient;
-(nullable WPPatientContext *)getPatient:(NSInteger)patientIndex;
-(NSInteger)getPatientIndexFromID:(nonnull NSString *)accountID;
-(BOOL)isProxy:(NSInteger)indx;
-(BOOL)hasProxies;
+(BOOL)fdiLinksNeedLoading;
+ (WPAuthenticationStatus)getAuthenticationStatus;

/**
 * Set the logged in user
 * @param user - logged in user
 */
+(void)setLoggedInUser:(nullable WPUser*)user;

/**
 * Get the logged in user
 * @return the default auth ticket
 */
+ (nullable WPUser*)getLoggedInUser;

/**
 * Get index of the currently selected person
 */
+(NSInteger)getCurrentPersonIndex;

/**
 Check if the mobile optimized feature is available
 
 @param checkNPP if you want to check NPP specific feature
 @return availability
 */
+ (BOOL)isMobileOptimizedFeatureAvailable:(BOOL)checkNPP;



/**
 * Get current patient context
 */
+ (nullable PEPatientContext *)getCurrentPatientContext;

/**
 * Get current user context
 */
+ (nullable PEUserContext *)getCurrentUserContext;



- (BOOL)hasAlerts;
- (nullable NSString *)getAuthHeader;

@end
