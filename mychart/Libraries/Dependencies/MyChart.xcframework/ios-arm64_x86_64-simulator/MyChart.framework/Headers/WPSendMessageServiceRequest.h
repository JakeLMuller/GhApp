//
//  WPSendMessageServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 9/3/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPMessage;
@class WPSendMessageServiceResponse;

typedef NS_ENUM(NSInteger, WPSendMessageType) {
	kWPSendMessage,
	kWPSendMessageWithAttachment,
    kWPSendCustomerService,
} ;

@interface WPSendMessageServiceRequest : WPRequest {
	WPMessage* _message;
	WPSendMessageType _sendType;
}

@property (nonatomic, strong) WPMessage* message;
@property (nonatomic, assign) WPSendMessageType sendType;
@property (nonatomic, strong) WPOrganizationInfo *organization;

-(id)initWithMessage:(WPMessage *)msg andSendType:(WPSendMessageType)sndType forOrganization:(WPOrganizationInfo*)organization;

/**
 * XML Body 
 */
-(NSData *)XMLData;

/**
 * Allocate a new Response object for this request
 * 
 * @return An AuthenticationServiceResponse 
 */
-(WPSendMessageServiceResponse*)allocResponse;

@end
