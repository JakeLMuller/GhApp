//
//  WPAPIPatientManager.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/20/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @enum WPAPIPatientManagerErrorCode
 * @brief Patient Manager API error codes
 *
 * @constant WPAPIPatientManagerErrorCodeRequestError           Server error
 * @constant WPAPIPatientManagerErrorCodeInvalidAccess          The API cannot be accessed
 * @constant WPAPIPatientManagerErrorCodeRequestNicknameTooLong Nickname is longer than 20 characters
 */
typedef NS_ENUM(NSInteger, WPAPIPatientManagerErrorCode) {
    WPAPIPatientManagerErrorCodeRequestServerError = 1,
    WPAPIPatientManagerErrorCodeInvalidAccess = 2,
    WPAPIPatientManagerErrorCodeNicknameTooLong = 3
};

/**
 * @brief Error domain for the error returned in the WPAPIPatientManagerDelegate methods
 */
extern NSString * _Nonnull const WPAPIPatientManagerErrorDomain;

__attribute__((deprecated("use WPAPIPersonManagerDelegate in order to receive events for non-patient proxies, too")))
@protocol WPAPIPatientManagerDelegate;

/**
 * @brief Interface for managing patients.
 */
 __attribute__((deprecated("use WPAPIPersonManager in order to interact with non-patient proxies, too")))
@interface WPAPIPatientManager : NSObject

/**
 * @brief Returns the list of patients available for the logged in user to access.
 */
+ (nullable NSArray <id <IWPPatient>>*)getPatients;

/**
 * @brief Returns the patient currently being accessed. All the activities launched will display data for this patient.
 */
+ (nullable id <IWPPatient>)getCurrentPatient;

/**
 * @brief Update the currently accessed patient. All the future activities launched will display data for this patient.
 * @param patient  The patient to set as current.
 */
+ (void)setCurrentPatient:(nonnull id <IWPPatient>)patient;

/** 
 * @brief Determines whether the patient's color can be set using the API.
 * @returns YES if the patient color can be set, NO otherwise.
 */
+ (BOOL)canSetColor;

/**
 * @brief Sets the color for a patient.
 * @param color The color to be set.
 * @param patient The patient for which the color is to be set.
 * @param delegate Delegate to get result of this call. The delegate method colorSetForPatient:withError: will be called corresponding to this.
 */
+ (void)setColor:(nonnull UIColor*)color forPatient:(nonnull id <IWPPatient>)patient
        delegate:(nullable id <WPAPIPatientManagerDelegate>)delegate;

/**
 * @brief Determines whether the patient's nickname can be set using the API.
 * @returns YES if the patient nickname can be set, NO otherwise.
 */
+ (BOOL)canSetNickname;

/**
 * @brief Sets the nickname for a patient.
 * @param nickname The nickname to be set. The length should be a maximum of 20 characters, otherwise an error will be thrown. If nil or empty, the patient's name will be set as the nickname.
 * @param patient The patient for which the nickname is to be set.
 * @param delegate Delegate to get result of this call. The delegate method nicknameSetForPatient:withError: will be called corresponding to this.
 */
+ (void)setNickname:(nullable NSString*)nickname forPatient:(nonnull id <IWPPatient>)patient
           delegate:(nullable id <WPAPIPatientManagerDelegate>)delegate;

/**
 * @brief Determines whether the patient's photo can be set using the API.
 * @returns YES if the patient photo can be set, NO otherwise.
 */
+ (BOOL)canSetPhoto;

/**
 * @brief Sets the photo for a patient.
 * @param photo The photo to be set. If nil, the current photo will be removed.
 * @param patient The patient for which the photo is to be set.
 * @param delegate Delegate to get result of this call. The delegate method photoSetForPatient:withError: will be called corresponding to this.
 */
+ (void)setPhoto:(nullable UIImage*)photo forPatient:(nonnull id <IWPPatient>)patient
        delegate:(nullable id <WPAPIPatientManagerDelegate>)delegate;

@end



/**
 * @brief Delegate protocol for managing patients.
 */
@protocol WPAPIPatientManagerDelegate <NSObject>

@optional
/**
 * Callback upon setting the color for a patient.
 * @param patient The patient for which the color was set.
 * @param error Error if the color could not be set.
 */
- (void)colorSetForPatient:(nonnull id <IWPPatient>)patient withError:(nullable NSError*)error;

/**
 * Callback upon setting the nickname for a patient.
 * @param patient The patient for which the nickname was set.
 * @param error Error if the nickname could not be set.
 */
- (void)nicknameSetForPatient:(nonnull id <IWPPatient>)patient withError:(nullable NSError*)error;

/**
 * Callback upon setting the photo for a patient.
 * @param patient The patient for which the photo was set.
 * @param error Error if the photo could not be set.
 */
- (void)photoSetForPatient:(nonnull id <IWPPatient>)patient withError:(nullable NSError*)error;

@end


