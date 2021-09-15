//
//  WPLogoutResponse.h
//  MyChart
//
//  Created by Tim Knutson on 1/22/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

@class WPResponse;

@interface WPLogoutResponse : WPResponse { }

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end

