//
//  WPAcceptTCServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 11/11/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPAcceptTCServiceResponse : WPResponse {

}

-(void)loadFromXMLData:(NSData*)xml;

@end
