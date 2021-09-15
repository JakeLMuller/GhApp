//
//  WPTicketServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 6/25/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPTicketServiceResponse : WPResponse {

}

-(void)loadFromXMLData:(NSData*)xml;

@end
