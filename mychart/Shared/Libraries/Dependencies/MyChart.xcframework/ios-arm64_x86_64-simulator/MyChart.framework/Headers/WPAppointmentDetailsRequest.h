//
//  WPAppointmentDetailsRequest.h
//  MyChart
//
//  Created by Matthew Flatau on 12/9/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPAppointmentDetailsResponse.h"

@interface WPAppointmentDetailsRequest : WPRequest

@property (nonatomic, strong, nullable) NSString *csn;
@property (nonatomic) BOOL isCSNEncrypted;
@property (nonatomic) BOOL isExternal;
@property (nonatomic, strong, nullable) NSString *orgID;

- (nullable instancetype)initWithCSN:(nullable NSString *)csn isCSNEncrypted:(BOOL)isCSNEncrypted;
- (nullable instancetype)initWithCSN:(nullable NSString *)csn isCSNEncrypted:(BOOL)isCSNEncrypted isExternal:(BOOL)isExternal;

- (nullable WPAppointmentDetailsResponse *)allocResponse;

@end
