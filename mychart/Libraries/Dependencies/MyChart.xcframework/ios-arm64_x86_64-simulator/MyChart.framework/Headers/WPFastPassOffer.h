//
//  WPFastPassOffer.h
//  iChart
//
//  Created by Alex J White on 11/5/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import "WPObject.h"
#import "WPFastPassAppointment.h"

typedef NS_ENUM(NSInteger, WPFastPassOfferStatus) {
    kWPFastPassOfferStatusError = -1,
    kWPFastPassOfferStatusActive = 0,
    kWPFastPassOfferStatusAccepted = 1,
    kWPFastPassOfferStatusDeclined = 2,
    kWPFastPassOfferStatusExpired = 3,
    kWPFastPassOfferStatusUnavailable = 4,
    kWPFastPassOfferStatusDeleted = 5
} ;

@interface WPFastPassOffer : WPObject

@property (nonatomic, strong, nullable) NSDate *expirationInstantUTC;
@property (nonatomic, strong, nullable) WPFastPassAppointment *offeredAppointment;
@property (nonatomic, strong, nullable) WPObject *respondingMyChartUser;
@property (nonatomic, strong, nullable) NSDate *sentInstantUTC;
@property (nonatomic, assign) WPFastPassOfferStatus status;

- (NSComparisonResult)compareTo:(nullable WPFastPassOffer *)offer;
+ (nonnull SEL)comparator;
- (BOOL)isEqualToFastPassOffer:(nullable WPFastPassOffer *)offer;

@end
