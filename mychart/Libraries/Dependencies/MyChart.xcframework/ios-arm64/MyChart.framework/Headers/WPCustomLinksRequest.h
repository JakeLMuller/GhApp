//
//  WPCustomLinksRequest.h
//  MyChart
//
//  Created by Kip Price on 3/20/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"

@class WPCustomLinksResponse;

/**
 Requests interconnect configuration file iOSLinks.xml
 */
@interface WPCustomLinksRequest : WPRequest

- (WPCustomLinksResponse *)allocResponse;

@end
