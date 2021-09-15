//
//  WPCheckMessageReplyServiceRequest.h
//  MyChart
//
//  Created by Zac Ling on 8/20/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

@class WPCheckMessageReplyServiceResponse, WPRequest;

@interface WPCheckMessageReplyServiceRequest : WPRequest

@property (nonatomic, strong) NSString* messageId;
@property (nonatomic) BOOL isMessageIDEncrypted;
@property (nonatomic, strong) WPOrganizationInfo *organization;

-(id)initWithMessage:(NSString *)msgId;

-(id)initWithMessage:(NSString *)msgId andIsMessageIDEncrypted:(BOOL)isMessageIDEncrypted forOrganization:(WPOrganizationInfo*)organization;

/**
 * XML Body
 */
-(NSData *)XMLData;

/**
 * Allocate a new Response object for this request
 *
 * @return An AuthenticationServiceResponse
 */
-(WPCheckMessageReplyServiceResponse*)allocResponse;

@end
