//
//  WPFastPassAppointment.h
//  iChart
//
//  Created by Alex J White on 11/5/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  REVISION HISTORY:
//  *bdrda   01/2015 351191 get time zone data

#import "WPObject.h"
#import "WPProvider.h"
#import "WPCategory.h"

@interface WPFastPassAppointment : WPObject

@property (nonatomic, strong, nullable) NSString *CSN;
@property (nonatomic, strong, nullable) NSDate *dateTime;
@property (nonatomic, strong, nullable) NSMutableArray *providers;
@property (nonatomic, strong, nullable) WPCategory* visitType;
@property (nonatomic) BOOL isInHomeVisit;
//helper properties
@property (nonatomic, readonly, nullable) WPProvider *provider;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, strong, nullable) NSTimeZone *nativeTZ;
@property (nonatomic, strong, nullable) NSTimeZone *displayTZ;
@end

