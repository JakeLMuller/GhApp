//
//  WPServersServiceResponse.h
//  iChart
//
//  Created by Adam on 6/4/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"

/**
 * \brief Response for the Web Server List
 *
 * The servers property contains a list of EpicMyChartWebServer objects
 */
@interface WPServersServiceResponse : WPResponse {
	NSArray* servers;	/**< List of WPServer objects */
}

@property (nonatomic,strong) NSArray* servers;

 
/**
 * Loads the set of WPServer objects
 *
 * @param data Request data
 */
-(void)loadFromXMLData:(NSData*)data;

@end
