//
//  WPSendMessageServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 9/3/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//
//  *zling   08/2015 384096 add result

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPSendMessageResult.h"

@interface WPSendMessageServiceResponse : WPResponse {
    WPSendMessageResult* _result;
}

@property (strong, nonatomic) WPSendMessageResult* result;

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
