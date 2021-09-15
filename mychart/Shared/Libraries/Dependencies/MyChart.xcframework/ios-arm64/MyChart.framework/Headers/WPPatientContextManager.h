//
//  WPPatientContextManager.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/2/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPPatientPreferencesManager.h"

@interface WPPatientContextManager : NSObject

+ (nullable UIImage *)profileImageAtPatientIndex:(NSUInteger)index retrieveLetterImageBackup:(BOOL)backup;

+ (nullable UIImage *)profileImageAtPatientIndex:(NSUInteger)index;

+ (nonnull UIImage *)providerImageforName:(nullable NSString *)providerName;

/*!
 * @brief Retrieves the proxy color hex string for the given patient index in the proxy access list.
 *      If hex string is not set it checks if a color index was set. If so, the hex string is set to the corresponding color.
 *      If a color index does not exist either, the hex string is set to the color for previous's proxy's color index + 1. If patient index
 *      is zero sets color to server default.
 */
+ (nonnull UIColor*)getAndSetProxyColorForPatientIndex:(NSUInteger)patientIndex;

/**
 * @brief Checks whether a color hex string exists, if not then checks if a color index exists. If found at any stage, returns the corresponding color otherwise returns nil.
 */
+ (nullable UIColor *)checkProxyColorAtPatientIndex:(NSUInteger)patientIndex;

+ (nonnull UIColor*)proxyColorAtPatientIndex:(NSUInteger)patientIndex;

+ (void)setProxyColor:(nonnull UIColor*)color forPatientIndex:(NSUInteger)patientIndex;


+ (nonnull NSString *)imageDirectory;

+ (nullable UIImage *)profileImageFromDiskAtPatientIndex:(NSUInteger)index;

+ (nonnull NSString *)keyWithPrefix:(nonnull NSString *)prefix atPatientIndex:(NSUInteger)index;




+ (void)setProfileImageToDisk:(nullable UIImage *)image atPatientIndex:(NSUInteger)index;

/**
 * @brief Saves the photo for a patient.
 * @param photo The photo to be set.
 * @param patientIndex The patient for which the color is to be set.
 * @param delegate Delegate to get result of this call. The delegate method photoSavedForPatientIndex:withError: will be called corresponding to this.
 */
+ (void)savePhoto:(nonnull UIImage*)photo forPatientIndex:(NSInteger)patientIndex
         delegate:(nonnull id <WPPatientPreferencesManagerDelegate>)delegate;

/**
 * @brief Removes the photo for a patient.
 * @param patientIndex The patient for which the photo is to be removed.
 * @param delegate Delegate to get result of this call. The delegate method photoRemovedForPatientIndex:withError: will be called corresponding to this.
 */
+ (void)removePhotoForPatientIndex:(NSInteger)patientIndex
          delegate:(nonnull id <WPPatientPreferencesManagerDelegate>)delegate;

/**
 * @brief Sets the nickname for a patient.
 * @param nickname The nickname to be set.
 * @param patientIndex The patient for which the nickname is to be set.
 * @param delegate Delegate to get result of this call. The delegate method nicknameSetForPatientIndex:withError: will be called corresponding to this.
 */
+ (void)setNickname:(nonnull NSString*)nickname forPatientIndex:(NSInteger)patientIndex
                          delegate:(nonnull id <WPPatientPreferencesManagerDelegate>)delegate;

@end
