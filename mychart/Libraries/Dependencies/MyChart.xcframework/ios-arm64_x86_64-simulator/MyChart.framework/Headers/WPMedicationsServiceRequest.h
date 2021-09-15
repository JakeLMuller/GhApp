//
//  WPMedicationsServiceRequest.h
//  iChart
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPMedicationsServiceResponse;

@interface WPMedicationsServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;
-(WPMedicationsServiceResponse*)allocResponse;

@end
