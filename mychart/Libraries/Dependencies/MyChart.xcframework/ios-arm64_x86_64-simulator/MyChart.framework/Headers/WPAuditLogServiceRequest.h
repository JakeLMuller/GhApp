//
//  WPAuditLogServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 10/8/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPUtil_Dates.h"

@class WPAuditLogServiceResponse;

@interface WPAuditLogServiceRequest : WPRequest {
	NSArray *auditLog;
}

@property (nonatomic,strong) NSArray *auditLog;

- (id)initWithAuditLog:(NSArray *)auditLogInput;
- (NSData *)XMLData;

- (WPAuditLogServiceResponse*)allocResponse;

@end
