//
//  WPMessageDetailRequest.h
//  iChart
//
//  Created by Chetan Satish on 9/21/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPOrganizationInfo.h"
#import "WPMessage.h"

@class WPMessageDetailResponse;

@interface WPMessageDetailRequest : WPRequest

@property (nonatomic, strong) WPOrganizationInfo *org;

- (instancetype)initWithMessageID:(NSString *)msgID;
- (instancetype)initMessageDetailRequest:(NSString *) messageID organization:(WPOrganizationInfo *)org messageFolder:(WPMessageFolder)folder isMessageIDEncrypted:(BOOL)isEncrypted;
- (NSData *)XMLData;

- (WPMessageDetailResponse*)allocResponse;

@end

