//
//  WPHealthMaintenanceServiceRequest.h
//  iChart
//
//  Created by Epic on 7/14/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPRequest.h"
@class WPHealthMaintenanceServiceResponse;

@interface WPHealthMaintenanceServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;

-(WPHealthMaintenanceServiceResponse*)allocResponse;

@end
