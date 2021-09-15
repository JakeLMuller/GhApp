//
//  WPServer.h
//  iChart
//
//  Created by Adam on 6/4/09.
//  Copyright 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPLoginToken.h"


/*!
 * @brief List of custom server type (set in Settings page)
 */
typedef NS_ENUM(NSInteger, WPCustomServerType) {
    kWPCustomServerTypeNone,        //custom server settings in not set
    kWPCustomServerTypeWebServer,   //custom server URL points to an Interconnect instance
    kWPCustomServerTypePhonebook,   //custom server URL points to a phonebook
} ;

/*!
 * @brief Search rank for a customer based on search text
 */
typedef NS_ENUM(NSInteger, WPCustomerSearchRank) {
    WPCustomerSearchRankNoMatch,
    WPCustomerSearchRankExactMatch,
    WPCustomerSearchRankFullWordMatch,
    WPCustomerSearchRankPartialWordMatch,
} ;

@class WPServer;
@class WPCustomAppSettings;
/*!
 * @brief A Server that hosts a speicfic organizations MyChart Service Server
 */
@interface WPServer : WPObject <NSCoding, PEOrganizationProtocol, PEThemeProtocol>


// Organization ID - unique to each Organization
@property (nonatomic, strong, nullable) NSString *orgID;

// MyChart WebsiteName - Optional. If present, should match WebsiteName setting present in MyChart.ini on the MyChart website.
@property (nonatomic, strong, nullable) NSString *websiteName;

// URL to use as the base for requests
@property (nonatomic, strong, nullable) NSString *url;

// URL of the image to load
@property (nonatomic, strong, nullable) NSString *imageHandle;

// MyChart brand name to use (i.e. MyGHCChart)
@property (nonatomic, strong, nullable) NSString *myChartBrandName;

// Allowed hosts for webviews inside app. 
@property (nonatomic, strong, nullable) NSMutableArray *allowedHosts;

// Brand logo to use (i.e. logo for MyGCHChart)
@property (nonatomic, readonly, nullable) UIImage *brandLogo;

// A list of locations for the organization
@property (nonatomic, strong, nullable) NSString *locations;

// Name of the "username" field on the login screen for the organization
@property (nonatomic, strong, nullable) NSString *loginIDlabel;

// Name of the "password" field on the login screen for the organization
@property (nonatomic, strong, nullable) NSString *loginPWlabel;

// An array of WPServerOption objects representing the array of options from the organization's phone book OR library settings
@property (nonatomic, strong, nullable) NSMutableArray *options;

// A dictionary representing the array of options from the organization's phone book OR library settings
@property (nonatomic, strong, nullable) NSMutableDictionary *optionDictionary;

// A flag indicating if this is a custom server object
@property (nonatomic) BOOL isCustomServer;

// Image to be shown on the provider list
@property (nonatomic, strong, nullable) UIImage *image;

// Image to be shown on the login screen
@property (nonatomic, strong, nullable) UIImage *myChartImage;

// Login screen image URL
@property (nonatomic, strong, nullable) NSString *myChartImageURL;

// Homepage header image URL
@property (nonatomic, strong, nullable) NSString *myChartHeaderImageURL;

// Image to be shown on the login screen for watch, use function below to access
@property (nonatomic, strong, nullable) UIImage *imageWatermark;

// The login color for the organization (pulled from the options array)
@property (nonatomic, readonly, nullable) UIColor *loginColor;

// The theme color for the organization (pulled from the options array)
@property (nonatomic, readonly, nullable) UIColor *themeColor;

// The URL for the organization's custom login page
@property (nonatomic, readonly, nullable) NSString *customLaunchPageURL;

// A flag indicating whether or not Passcode login is enabled
@property (nonatomic, readonly) BOOL isSecondaryLoginAllowed;

// Whether the mobile app review card has been turned off
@property (nonatomic, readonly) BOOL isAppReviewCardTurnedOff;


// A flag indicating whether or not 2FA is enabled
@property (nonatomic, assign) BOOL twoFactorEnabled;

// The number of digits in the Passcode
@property (nonatomic, assign) NSUInteger pinSize;

// A flag indicating whether or not Passcode login has been set by the user
@property (nonatomic, assign) BOOL isPasscodeSet;

// An array of objects representing custom features loaded from Interconnect
@property (nonatomic, strong, nullable) NSArray *customFeatures;

// The URL for the account signup workflow
@property (nonatomic, readonly, nullable) NSString *signUpURL;

// The URL for the password recovery workflow
@property (nonatomic, readonly, nullable) NSString *passwordRecoveryURL;

// The URL for the username recovery workflow
@property (nonatomic, readonly, nullable) NSString *usernameRecoveryURL;

// A flag indicating if a warning should be displayed upon login indicating non-production access
@property (nonatomic) BOOL showNonProductionWarning;

// A flag indicating if we are connected to a Finland environment
@property(nonatomic) BOOL isFinlandEnv;

// YES if at least one department is set up to use Appointment Arrival with Bluetooth beacons, NO otherwise
@property(nonatomic) BOOL isUsingBluetoothBeacons;

// The list of cookies set during the SAML login workflow, that need to be stored to persistent storage.
@property (nonatomic, readonly, nullable) NSArray *samlLoginCookiesToPersist;

// The domain of the SAML Login page. This is used to determine if cookies set during the SAML login workflow, need to be stored to persistent storage.
@property (nonatomic, readonly, nullable) NSString *samlLoginDomainForCookiesToPersist;


// (NOT WATCH) The login token
@property (nonatomic, strong, nullable) WPLoginToken *loginToken;

// FIXME: Document the rest of these properties
@property (nonatomic) BOOL isSelected;
@property (nonatomic, strong, nullable) NSString* localeForCustomServer;
@property (nonatomic, strong, nullable) NSMutableDictionary *upcomingApptLinks;
@property (nonatomic, strong, nullable) NSMutableArray *upcomingApptLinksArray;
@property (nonatomic, strong, nullable) NSMutableDictionary *myChartCustomFeatureMap;
@property (nonatomic, readonly, nullable) NSString *formatterLocale;
@property (nonatomic, strong, nullable) NSString *country;

/**
 * Set the current server
 * @param server the current server
 */
+ (void)setCurrentServer:(nullable WPServer*)server;

/**
 * Get the current server
 * @return the current server
 */
+ (nullable WPServer*)getCurrentServer;

/**
 * Returns the type of custom server settings. Custom server settings is being dual purposed. It can either point to an Interconnect instance or to a phonebook xml.
 * Background: Dual purposing custom server settings might seem odd, but this is a stop gap solution before we change the custom server settings to actually contain a phonebook.
 */
+ (WPCustomServerType)getCustomServerType;

/**
 * Returns the url to a custom server specified in settings. Custom server settings must point to an Interconnect instance.
 */
+ (nullable NSString *)getCustomServerURL;

/**
 * Returns the URL to the phonebook xml if stored in Custom Server settings
 * Background: Dual purposing custom server settings might seem odd, but this is a stop gap solution before we change the custom server settings to actually contain a phonebook.
 */
+ (nullable NSString *)phonebookFromCustomServerSettings;


/**
 Check if the organization is authenticated with SAML

 @param orgID the organization ID
 @return YES if the organization is authenticated with SAML, NO otherwise
 */
+ (BOOL)isAuthenticatedWithSAML: (nonnull NSString *)orgID;


/**
 Set if the organization is authenticated with SAML

 @param orgID the organization ID
 */
+ (void)setAuthenticatedWithSAML: (nonnull NSString *)orgID;

/**
 * Create a MyChart webserver
 *
 * @param iname the name of the webserver
 * @param iurl the URL of the webserver
 */
- (nullable instancetype)initWithName:(nullable NSString*)iname andURL:(nullable NSString*)iurl;

/**
 * @brief Create a server object based on the custom server settings
 *
 * @param name the name of the organization to be displayed
 * @param idLabel the hint for the ID or username field
 * @param pwLabel the hint for the password field
 * @revision *bdrda 11/11 220335 I18N, added params
 */
- (nullable instancetype)initCustomServer: (nullable NSString*)name usernameLabel: (nullable NSString*)usernameLabel passwordLabel: (nullable NSString*) passwordLabel;

/**
 * Use to sort all selected servers at the top
 * @param id - other server
 */
- (NSComparisonResult) compareBySelection: (nullable id) obj;

-(BOOL) hasMyChartImage;

/**
 * Evaluates whether the given server is equal to self by comparing org ids
 * @param otherServer the given server
 * @return YES if the given server is equal, NO otherwise.
 */
- (BOOL)isEqualToServer:(nullable WPServer *)otherServer;

- (WPCustomerSearchRank)search:(nullable NSString *)text;

/**
 * Makes the server object smaller to decrease payload size when sending to the Watch
 */
- (void)shrink;

/**
 * Get the cached image without checking the cache date
 */
- (nullable UIImage *)getCachedImage;

/**
 * Get the Watch image watermark and returns it to the completion block
 * @param completion the completion block to handle the watch image watermark
 */
- (void)getWatchImageWatermarkWithCompletion:(void (^_Nullable)(UIImage *_Nullable))completion;

/**
 * Is a feature supported
 */
- (BOOL)isFeatureAvailable:(enum PESupportedFeature)supportedFeature;
@end
