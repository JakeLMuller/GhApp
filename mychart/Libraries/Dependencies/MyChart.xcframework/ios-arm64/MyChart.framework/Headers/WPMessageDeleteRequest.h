//
//  WPMessageDeleteRequest.h
//  iChart
//
//  Created by Chetan Satish on 11/5/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPMessageDeleteResponse;
@class WPMessage;

@interface WPMessageDeleteRequest : WPRequest {
	NSMutableArray *messages;
}

@property (nonatomic,strong) NSMutableArray* messages;
@property (nonatomic,strong) WPOrganizationInfo *organization;

-(id)initWithMessage:(WPMessage *)msg forOrganization:(WPOrganizationInfo*)organization;
-(id)initWithMessages:(NSArray *)msgs;

-(NSData *)XMLData;

-(WPMessageDeleteResponse*)allocResponse;

@end
