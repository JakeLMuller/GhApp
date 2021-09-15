//
//  WPPostAppointmentServiceRequest.h
//  iChart
//
//  Created by Larry Irwin II on 8/5/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPSlotReviewServiceRequest.h"
#import "WPPostAppointmentServiceResponse.h"

@class WPSlot;

@interface WPPostAppointmentServiceRequest : WPSlotReviewServiceRequest

- (instancetype)initWithSlot:(WPSlot*)aSlot
                 andRFVIndex:(NSString*)aRFVIndex
                    useTeams:(BOOL)aUseTeams
         providerDepartments:(NSArray*)aProviderDepartments;

- (instancetype)initWithSlot:(WPSlot*)aSlot
                 andRFVIndex:(NSString*)aRFVIndex
                    useTeams:(BOOL)aUseTeams
         providerDepartments:(NSArray*)aProviderDepartments
                    comments:(NSString*)aComments;

- (WPPostAppointmentServiceResponse*)allocResponse;

@end
