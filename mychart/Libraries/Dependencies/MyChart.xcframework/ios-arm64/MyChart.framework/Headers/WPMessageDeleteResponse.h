//
//  WPMessageDeleteResponse.h
//  iChart
//
//  Created by Chetan Satish on 11/5/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPMessageDeleteResponse : WPResponse {

}
/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
