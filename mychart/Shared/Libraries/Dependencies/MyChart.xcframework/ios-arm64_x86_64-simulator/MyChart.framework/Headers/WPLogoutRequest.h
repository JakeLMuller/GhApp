//
//  WPLogoutRequest.h
//  MyChart
//
//  Created by Tim Knutson on 1/8/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//
@class WPLogoutResponse;

@protocol WPWebSessionCallbackProtocol;
@interface WPLogoutRequest : WPRequest <WebSessionCallbackProtocol>

- (id)init;
- (id)initWithAuditLog:(NSArray *)auditLogInput;
- (id)initWithAuditLog:(NSArray *)auditLogInput andSecureLogs:(NSArray *)secureAuditLogInput;

- (WPLogoutResponse *)allocResponse;


@end
