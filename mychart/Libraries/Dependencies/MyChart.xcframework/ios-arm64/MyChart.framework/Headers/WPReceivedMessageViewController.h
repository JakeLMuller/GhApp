//
//  WPReceivedMessageViewController.h
//  MyChart
//
//  Created by Yash Vaka on 8/22/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPMessageViewController.h"

@interface WPReceivedMessageViewController : WPMessageViewController

- (instancetype)initWithMessageID:(NSString *)msgID andUnread:(BOOL)unread;
- (instancetype)initWithMessageID:(NSString *)msgID andUnread:(BOOL)unread andIsMessageIDEncrypted:(BOOL)isMessageIDEncrypted;
- (instancetype)initWithMessageID:(NSString *)msgID andUnread:(BOOL)unread andIsMessageIDEncrypted:(BOOL)isMessageIDEncrypted andExternalOrgId:(NSString*)externalOrgId;

@end

