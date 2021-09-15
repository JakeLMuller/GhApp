//
//  WPSlotsServiceRequest.h
//  iChart
//
//  Created by Larry Irwin II on 8/5/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPSlotsServiceResponse.h"

@class WPCalendarDayView;
@class WPSlotRequestProvider;

@interface WPSlotsServiceRequest : WPRequest

//Internal bookeeping for the sliding view of days
@property (nonatomic, strong) WPCalendarDayView*	calendarDayView;
@property (nonatomic, assign) NSInteger				daysLeftToFind;

- (instancetype)initWithRFVIndex:(NSString*)aRFVIndex date:(NSDate *)aDate useTeams:(BOOL)aUseTeams
             providerDepartments:(NSArray*)aProviderDepartments
                 calendarDayView:(WPCalendarDayView*)aDay
                  daysLeftToFind:(NSInteger)aDaysLeftToFind;

- (WPSlotsServiceResponse*)allocResponse;

+ (void)writeXmlNodeForProvider:(WPSlotRequestProvider*)prov withWriter:(EFXmlWriter*)writer;


@end
