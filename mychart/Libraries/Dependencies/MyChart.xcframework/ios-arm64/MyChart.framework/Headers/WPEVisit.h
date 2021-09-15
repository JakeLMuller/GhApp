//
//  WPEVisit.h
//  MyChart
//
//  This model is only used for the watch app, since it cannot use Swift code. Otherwise we use
//  the Swift model from the ToDo module. Once we have Swift support on the watch we should delete
//  this model and reference the shared model in ToDo.
//
//  Created by Eric Shaw on 6/7/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPEVisit : WPObject

@property (nonatomic,strong) NSString* reasonForVisitId;
@property (nonatomic,strong) NSString* reasonForVisit;
@property (nonatomic, assign) BOOL hasUnreadResponse;
@property (nonatomic, assign) BOOL hasAnyResponse;
@property (nonatomic, assign) BOOL hasResponsibleProvider;
@property (nonatomic, assign) BOOL hasDeletedResponse;
@property (nonatomic, assign) BOOL isProviderInitiated;

typedef NS_ENUM(NSInteger, WPEVisitStatus) {
    kWPEVisitStatusNewMessage = 0,
    kWPEVisitStatusUnderReview = 1,
    kWPEVisitStatusSubmitted = 2,
    kWPEVisitStatusNotYetSumbitted = 3,
    kWPEVisitStatusReadMessage = 4,
    kWPEVisitStatusDeletedResponse = 5,
} ;

-(WPEVisitStatus) GetEVisitStatus: (BOOL)isECheckinComplete NS_SWIFT_NAME(GetEVisitStatus(isECheckInComplete:));

@end
