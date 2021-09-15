//
//  WPImmunizationsServiceRequest.h
//  iChart
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPImmunizationsServiceResponse;

@interface WPImmunizationsServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;

-(WPImmunizationsServiceResponse*)allocResponse;

@end
