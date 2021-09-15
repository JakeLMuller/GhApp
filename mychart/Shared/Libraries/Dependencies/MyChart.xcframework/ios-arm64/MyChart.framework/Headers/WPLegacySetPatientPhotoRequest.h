//
//  WPLegacySetPatientPhotoRequest.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPLegacySetPatientPhotoResponse.h"

@interface WPLegacySetPatientPhotoRequest : WPRequest

@property (nonatomic, strong) NSData *photoData;
@property (nonatomic, strong) NSString *photoType;
@property (nonatomic, assign) NSInteger patientIndex;

/**
 * Allocates a new response object
 *
 * @return a new allocated WPLegacySetPatientPhotoResponse
 */
- (instancetype)initWithPhoto:(NSData *)img photoType:(NSString *)photoType patientIndex:(NSInteger)patientIndex;

- (WPLegacySetPatientPhotoResponse *)allocResponse;

@end
