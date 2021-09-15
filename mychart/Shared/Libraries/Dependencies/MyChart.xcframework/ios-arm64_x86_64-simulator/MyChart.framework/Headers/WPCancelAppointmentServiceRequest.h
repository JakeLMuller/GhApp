//
//  WPCancelAppointmentServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 09/09/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPCancelAppointmentServiceResponse;
@class WPAppointment;

@interface WPCancelAppointmentServiceRequest : WPRequest {
    NSArray*    appointments;
    NSString*   reason;
    NSString*   comments;
    NSString*   organizationId;
    bool    isExternal;
}

@property (strong,nonatomic) NSArray*	appointments;
@property (strong,nonatomic) NSString*	reason;
@property (strong,nonatomic) NSString*	comments;
@property (strong,nonatomic) NSString*  organizationId;
@property bool isExternal;
@property bool isCompositeAppointment;
@property (strong,nonatomic) NSString*  cancellationSubject;

- (id)init;
- (void)setupForDirectCancelWithAppointments:(NSArray *)appts andReason:(NSString *)rsn andComments:(NSString *)cmts andOrgId:(NSString *)orgId isCompositeAppointment:(BOOL)isCompositeAppointment;
- (void)setupForCancelRequestWithAppointments:(NSArray *)appts andReason:(NSString *)rsn andComments:(NSString *)cmts andOrgId:(NSString *)orgId isCompositeAppointment:(BOOL)isCompositeAppointment;

- (NSData *)XMLData;

- (WPCancelAppointmentServiceResponse*)allocResponse;

- (NSString *)getDATList;

@end
