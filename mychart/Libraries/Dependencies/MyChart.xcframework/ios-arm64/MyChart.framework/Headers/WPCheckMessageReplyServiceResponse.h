//
//  WPCheckMessageReplyServiceResponse.h
//  MyChart
//
//  Created by Zac Ling on 8/20/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

@class WPResponse, WPCheckMessageResult;

@interface WPCheckMessageReplyServiceResponse : WPResponse

@property (strong, nonatomic) WPCheckMessageResult* result;

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
