//
//  WPRespondToOfferResult.h
//  MyChart
//
//  Created by Matthew Flatau on 12/12/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <UIKit/UIKit.h>
#import "WPObject.h"
#import "WPFastPassOffer.h"
#import "WPAppointment.h"

typedef NS_ENUM(NSInteger, WPRespondToOfferStatus) {
    kWPRespondToOfferStatusFailure = 0,
    kWPRespondToOfferStatusSuccess = 1,
    kWPRespondToOfferStatusPending = 2,
} ;

@interface WPRespondToOfferResult : WPObject

@property (nonatomic, strong, nullable) WPAppointment *appointment;
@property (nonatomic, assign) BOOL canRedirect;
@property (nonatomic, assign) WPFastPassOfferStatus offerStatus;
@property (nonatomic, assign) WPRespondToOfferStatus status;

@end
