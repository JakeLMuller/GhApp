//
//  WPUtil_Misc.h
//  MyChart
//
//  Created by Larry Irwin II on 7/8/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.

static NSString * const WP_LAUNCH_SERVERID = @"WPLaunchServerID";
static NSString * const WP_LAUNCH_USERNAME = @"WPLaunchUsername";
static NSString * const WP_LAUNCH_AUTHTOKEN = @"WPLaunchAuthToken";
static NSString * const kWPDisplayNamePrefixKey = @"display_name";
static NSString * const WP_MYCHART_EULA_ACCEPTED = @"MyChartEulaAccepted";
static NSString * const WP_CLEAR_KEYCHAIN = @"ClearKeychain";

//Last Login Keys
static NSString * const WP_LAST_USED_SERVER = @"WPLastUsedServer";

//Org Info Keys
static NSString * const WP_PROVIDER_DEFAULTS_URL_KEY = @"WPCustomerDefaultsURLKey";
static NSString * const WP_PROVIDER_DEFAULTS_KEY = @"WPCustomerDefaultsKey";
static NSString * const WP_PROVIDER_DEFAULTS_TIMESTAMP_KEY = @"WPCustomerDefaultsTimestampKey";

//Login
static NSString * const WP_IS_TRUSTED_SERVERS = @"WPIsTrustedServers";
static NSString * const WP_SAVE_USERNAME = @"WP_SAVE_USERNAME";
static NSString * const WP_DID_SHOW_LOGIN_ONBOARDING_KEY = @"WPDidShowLoginOnboardingKey";

//Info Plist Keys
static NSString * const WP_EPIC_PHONEBOOK_SERVER_KEY = @"epicServer";
static NSString * const WP_EPIC_PHONEBOOK_PATH_KEY = @"customerRequestPath";

//Push Notification Keys
static NSString *const WP_IS_UPDATING_PUSH_REGISTRATION_KEY = @"WPIsUpdateSet";
static NSString *const WP_RECENT_ORG_DICTIONARY = @"WPRecentOrgDictionary";
static NSString *const WP_USERS_SIGNED_UP_FOR_PUSH = @"WPOrgUserSignedUpForPush";

//Appointment Arrival
static NSString *const WP_APPOINTMENT_ARRIVAL_ACTIVATED_KEY = @"WPAppointmentArrivalActivatedKey";
static NSString *const WP_APPOINTMENT_ARRIVAL_CSN_BLOCKLIST_KEY = @"WPAppointmentArrivalCSNBlacklistKey";
static NSString *const WP_LOCATION_ALWAYSUSAGE_USER_REQUESTED_ONCE_KEY = @"WPLocationAlwaysUsageUserRequestedOnceKey";
static NSString *const WP_APPOINTMENT_ARRIVAL_ONBOARDING_ACTED_UPON_KEY = @"WPAppointmentArrivalOnboardingActedUponKey";
//New Visit Summary Alert
static NSString *const WP_NEW_VISIT_SUMMARY_ALERTS_ONCE_KEY = @"WPNewVisitSummaryAlertsOnceKey";

//New Feature Alert Keys
//Users will only be asked one time to learn the new feature unless they never tap on the alert
static NSString *const WP_NEW_FEATURE_ALERTS_ONCE_KEY = @"WPNewFeatureAlertsOnce";


//Jump to web alert
//This is the flag that is set to true if there are shared sessions going on. Currently used by web-only alert
//workflow where mobile and web could both be logged in. When app resumes, we need to refresh the alerts.
//There is a special handling at Cache level for logout based for this workflow as well (search for "MyChartWebLaunchedFromMobile").
static NSString *const WP_REFRESH_ALL_HOME_ALERTS = @"WPRefreshAllHomeAlerts";

//Track My Health
static NSString *const WP_SHOW_GLUCOSE_TREND_GRAPH = @"WPShowGlucoseTrendGraph";
static NSString *const WP_SHOW_BASAL_INSULIN = @"WPShowBasalInsulin";
static NSString *const WP_SHOW_BOLUS_INSULIN = @"WPShowBolusInsulin";

#if INTERNALBUILD
static NSString *const WP_INTERNAL_PHONEBOOK_KEY = @"phonebookPredefined";
static NSString *const WP_INTERNAL_LANGUAGE_CONTEXT_KEY = @"language_context";
static NSString *const WP_INTERNAL_GIBBERISH_CONTEXT = @"Gibberish";
#endif

@interface WPUtil_Misc : NSObject {

}

+(id)getSetting:(NSString*)name;
+(void)setSetting:(NSString*)name value:(id)value;
+(void)setSetting:(NSString *)name boolValue:(BOOL)value;
+(void)removeSetting:(NSString *)name;

+(NSString*)getNewFeatureSettingKey:(NSString*)feature;

//Used for UserDefault settings that explicitly use arrays of "user-orgID" keys to track settings for unique user/provider combos
+(void)enableUserOrgForSettingsWithKey:(NSString *)key;
+(void)disableUserOrgForSettingsWithKey:(NSString *)key;

//check if current user has setting enabled
+(BOOL)isUserOrgEnabledForSettingsWithKey:(NSString *)key;
//check if any user on this device has the setting enabled
+(BOOL)isUserOrgSettingEmptyWithKey:(NSString *)key;

//Shared Settings between watch and iPhone
/*
 * First looks for key in sharedUserDefaults, if not found looks in,
 * currentUserDefaults, if found moves to sharedDefaults and returns
 * object.
 */
+ (id)getSharedSetting:(NSString *)key;
+ (void)setSharedSetting:(NSString *)key value:(id)value;
+ (void)removeSharedSetting:(NSString *)name;


+ (NSString*)getOrgListServerURL:(BOOL)useBackup;
#ifdef INTERNALBUILD
+ (NSString*)getInternalBuildOrgListServerURL;
#endif

+ (id)getInfoPlistObject:(NSString *)forKey;
+ (id)getObjectFromPlist:(NSString*)plistpath atItemIndex:(NSUInteger)itemNum forKey:(NSString*)key;

+ (NSDictionary *)getZipMap;

+ (BOOL)isMOBillingAvailable;
/*
 * Gets a displayable string containing the list of service areas that a patient is allowed for.
 * @param patient - WPPatientContext object
 * @returns a displayable string
 */
+ (NSString *)getDisplayableServiceAreaStringFor:(WPPatientContext *)patient;

+ (BOOL)shouldDisablePayment;
+ (BOOL)isMOScreeningsAvailable;
+ (BOOL)isMOMedsAvailable;
//Determine whether to disable meds- preventing access to native meds and hiding medications entirely if the local organization has MO disabled, but MO Meds is available. This lets us focus our efforts on maintaining just MO Meds instead of both MO and native going forward.
+ (BOOL)shouldDisableMeds;
//Checks whether MO Meds is available via a feature bit (Available if past Aug19)
+ (BOOL)isMOMedsFeatureAvailable;
//Checks whether the local organization has MO enabled (Has not set the MYC_DISABLE_MOBILE_OPTIMIZED mnemonic to 1)
+ (BOOL)isMOEnabled;
+ (BOOL)canTakeActionsOnExternalData;
+ (BOOL)isMOManageMyAccountAvailable;
+ (UIImage *)getDefaultH2GOrganizationLogo;
+ (BOOL)canAsynLoadingExternalData;
@end
