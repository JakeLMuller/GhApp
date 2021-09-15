//
//  WPPatientPreferencesManager.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/17/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@protocol WPPatientPreferencesManagerDelegate;

static const NSInteger WP_NICKNAME_MAX_LENGTH = 20;

@interface WPPatientPreferencesManager : NSObject

- (instancetype)initWithDelegate:(id <WPPatientPreferencesManagerDelegate>) delegate;

- (void)savePhoto:(UIImage *)photo forPatientIndex:(NSInteger)patientIndex;

- (void)removePhotoForPatientIndex:(NSInteger)patientIndex;

- (void)setNickname:(NSString *)nickname forPatientIndex:(NSInteger)patientIndex;

@end

@protocol WPPatientPreferencesManagerDelegate <NSObject>

/**
 * Callback upon setting/removing the photo for a patient.
 * @param patientIndex The patient for which the photo was set.
 * @param error Error if the photo could not be set
 */
- (void)photoSetForPatientIndex:(NSInteger)patientIndex withError:(NSError*)error;

/**
 * Callback upon setting the nickname for a patient.
 * @param patientIndex The patient for which the nickname was set.
 * @param error Error if the photo could not be set
 */
- (void)nicknameSetForPatientIndex:(NSInteger)patientIndex withError:(NSError*)error;

@end
