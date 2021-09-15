//
//  WPPinGenericAttribute.h
//  MyChart
//
//  Created by Ben Drda on 4/1/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPLocalAuthenticationProtocol.h"

typedef  NS_ENUM(NSInteger, WPHashVersion) {
    kWPHashVersionNone = -1,
    kWPHashVerisonSHA256,
};

/*! Status of the Token. */
typedef NS_OPTIONS(NSInteger, WPLoginTokenStatus) {
    /*! nothing is set */
    kWPLoginTokenInactive = 0,
    /*! item is storing a token */
    kWPLoginTokenActive = 1 << 0,
    /*! item is storing a PIN, and PIN can be used to get a token */
    kWPLoginTokenPIN = 1 << 1,
    /*! touch id can be used to get a token */
    kWPLoginTokenBiometric = 1 << 2,
};

/*! Maximum number of digits in the PIN */
static NSUInteger const kWPPinMaxSize = 4;
/*! Minimum number of digits in the PIN */
static NSUInteger const kWPPinMinSize = 4;
/*! Number of allowed PIN attempts */
static NSUInteger const kWPPinAttemptsAllowed = 5;

@interface WPPinGenericAttribute : NSObject <NSCoding>

/*! Salted hash of the user's pin */
@property (nonatomic, strong) NSData *myHash;
/*! Salt for the salted hash */
@property (nonatomic, strong) NSData *salt;
/*! Version of hash used to secure the pin */
@property (nonatomic) WPHashVersion version;
/*! Number of wrong attempts remaining to use this pin */
@property (nonatomic) NSInteger attemptsRemaining;
/*! Number of characters in the stored pin */
@property (nonatomic) NSUInteger pinSize;
/*! Username associated with the stored pin */
@property (nonatomic, strong) NSString *username;
/*! Device ID of this device - convenience for use in Watch */
@property (nonatomic, strong) NSString *deviceID;
/*! Whether this generic attribute can be used to log in via pin, touchid */
@property (nonatomic) WPLoginTokenStatus status;
/*! The data returned by LocalAuthentication's evaluatedPolicyDomain, 
    which represents the current fingerprints for a user that has set up touchID.*/
@property (nonatomic, strong) NSData *biometricRepresentation;

/*!
 @brief creates a generic attribute with all dat data
 @param username the username
 @param deviceID the UIDevice UUIDString
 */
- (instancetype)initWithUsername:(NSString *)username andDeviceID:(NSString *)deviceID;

/*!
 @brief sets the associated keychain item as enabled for PIN with the given pin data
 @param pinHash SHA256 hash data of the pin
 @param salt random bits used to salt the given hash
 @param pinSize the number of digits in the pin
 */
- (void)setPinHash:(NSData *)pinHash withSalt:(NSData *)salt andPinSize:(NSUInteger)pinSize;
/*!
 @brief sets the associated keychain item as enabled for TouchID
 */
- (void)setBiometricWithBiometricRepresentationData:(NSData *)biometricRepresentationData;
/*!
 @brief removes the pin from this keychain item
 */
- (void)killPin;
/*!
 @brief removes the touch id from this keychain item
 */
- (void)killTouchID;

/*!
 @brief deactivates the keychain item
 */
- (void)kill;

- (void)resetNumberOfAttempts;

@end
