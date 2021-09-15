//
//  WPAuditLogServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 10/8/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPAuditLogServiceResponse : WPResponse {

}

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
