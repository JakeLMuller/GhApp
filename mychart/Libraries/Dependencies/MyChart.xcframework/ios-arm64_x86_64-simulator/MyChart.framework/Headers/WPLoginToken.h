//
//  WPLoginToken.h
//  MyChart
//
//  Created by Ben Drda on 4/7/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.

#import <Foundation/Foundation.h>
#import "WPPinGenericAttribute.h"
#import "WPKeychainItem.h"

/*! Possible values for an NSError code returned from a set/kill/get method*/
typedef NS_ENUM(NSInteger, WPLoginTokenResultError) {
    /*! Nothing wrong here! */
    kWPLoginTokenResultErrorNone = 0,
    /*! The hash of the pin doesn't match what's stored in the keychain. Look for kWPLoginTokenErrorAttempts for the number of remaining attempts */
    kWPLoginTokenResultErrorWrongPin = 1,
    /*! You tried to get the pin of an inactive pin item */
    kWPLoginTokenResultErrorNotFound = 2,
    /*! You tried to access a token that does not exist */
    kWPLoginTokenResultErrorNoToken = 3,
    /*! You tried to set a pin with an unallowed number of digits or otherwise poorly formatted pin */
    kWPLoginTokenResultErrorBadPin = 4,
    /*! Some other error occurred. kWPLoginTokenErrorOSStatus is usually set with the return value from the Sec… call */
    kWPLoginTokenResultErrorNoTouchID = 5,
    /*! Inactive */
    kWPLoginTokenResultErrorInactive = 6,
    /*! No user */
    kWPLoginTokenResultErrorNoUser = 7,
    kWPLoginTokenResultErrorOther = 8,
};

/*! Error domain specific to dealing with user PINs */
static NSString * const kWPLoginTokenErrorDomain = @"com.epic.mychart.login.WPLoginToken";
/*! Error userInfo key telling us what the OSStatus was for the releveant Sec... call */
static NSString * const kWPLoginTokenErrorOSStatus = @"com.epic.mychart.login.WPLoginToken.error.osstatus";
/*! Error userInfo key telling us how many more attempts the user has to put in a pin */
static NSString * const kWPLoginTokenErrorAttempts = @"com.epic.mychart.login.WPLoginToken.error.attempts";

static NSString * const kWPOrganizationIdentifierDelimeter = @"-";

@interface WPLoginToken : NSObject <WPLocalAuthenticationProtocol>

/*! Guaranteed to be set. Goes into kSecAttrService */
@property (nonatomic, strong, readonly) NSString *orgID;
/*! Whatever the user set as the display name for this account. Goes into kSecAttrDescription */
@property (nonatomic, readonly) NSString *displayName;
/*! The user's account id */
@property (nonatomic, readonly) NSString *accountID;
/*! Creation instant as from kSecAttrCreationDate */
@property (nonatomic, readonly) NSDate *creationInstant;
/*! Modification instant as from kSecAttrModificationDate */
@property (nonatomic, readonly) NSDate *lastModifiedInstant;
/*! Username associated with the login */
@property (nonatomic, readonly) NSString *username;
/*! Device ID of this device (actually a vendor identifier) */
@property (nonatomic, readonly) NSString *deviceID;
/*! Status of this connection */
@property (nonatomic, readonly) WPLoginTokenStatus status;
/*! Number of remaining attempts */
@property (nonatomic, readonly) NSUInteger attempts;
/*! Pin size */
@property (nonatomic, readonly) NSUInteger pinSize;
/*! checks the status of this token if it's enabled for PIN retrieval */
@property (nonatomic, readonly) BOOL pinEnabled;
/*! checks the status of this token if it's enabled for TouchID retrieval */
@property (nonatomic, readonly) BOOL biometricEnabled;
/*! checks the status of this token to see if there's a token actually in there */
@property (nonatomic, readonly) BOOL active;
/*! returns YES if the logged-in user is the user in the token */
@property (nonatomic, readonly) BOOL isForCurrentUser;

/*!
 @brief init disabled because model objects are required
 */
- (instancetype)init NS_UNAVAILABLE;

/*!
 @brief init function will populate if the org has a pin, be in an unset state otherwise
 @param orgID org id from the phonebook
 */
- (instancetype)initWithOrgID:(NSString *)orgID;

/*!
 @brief init function will populate for keychain item
 @param keychainItem the keychainItem
 */
- (instancetype)initWithKeychainItem:(WPKeychainItem *)keychainItem NS_DESIGNATED_INITIALIZER;

/*!
 @brief function to determine whether stored generic has an associated fingerprint datastore with it
 */
- (BOOL)hasFingerprintRepresentation;

/**
 @brief Updates the login token. Does not change secondary login settings or the pin.
 @param token authtoken payload to store in the keychain
 @param completion completion block
 */
- (void)updateToken:(NSString *)token completion:(void (^)(BOOL success, NSError *error))completion;

/*!
 @brief Store token and passcode in the keychain
 @param passcode - the passcode to set, in plaintext (stored hash on the device)
 @param token - authtoken payload to store in the keychain
 @param completion - completion block
 */
- (void)storePasscode:(NSString *)passcode token:(NSString *)token completion:(void (^)(BOOL success, NSError *error))completion;


/*!
 @brief Store token for touch ID
 @param token - authtoken payload to store in the keychain
 @param completion - completion block
 */
- (void)storeBiometricWithToken:(NSString *)token completion:(void (^)(BOOL success, NSError *error))completion;

/*!
 @brief removes the PIN as an allowed token retrieval method
 @param block code that gets run on completion with results
 */
- (void)killPINWithBlock:(void (^)(BOOL success, NSError *error))block;

/*!
 @brief removes biometric autentication as an allowed token retrieval method
 @param block code that gets run on completion with results
 */
- (void)killBiometricWithBlock:(void (^)(BOOL success, NSError *error))block;

/*!
 @brief retrieves the token as plaintext from encryption using a given PIN
 @param PIN the pin the user input
 @param block code that gets run on completion with results
 */
- (void)getTokenViaPIN:(NSString *)PIN withBlock:(void (^)(NSString *token, NSError *error))block;

/*!
 @brief retrieves the token as plaintext from encryption
 @param block code that gets run on completion with results
 */
- (void)getTokenViaBiometricWithBlock:(void (^)(NSString *token, NSError *error))block;

/*!
 @brief Deletes the pass/pin/display name... everything associated with this organization.
 */
- (void)kill;

- (void)resetNumberOfAttempts;

/*!
 @brief Checks whether biometric login active status is set or not. This checks if the organization's login token had biometric turned on.
 *      If this returns true, it still doesn't necessarily mean that biometric login will succeed since it might have been disabled at the device level
 @return true/false
 */
-(BOOL)isBiometricLoginStatusActive;

@end


