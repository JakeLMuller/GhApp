//
//  WPPatientAccessServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 8/3/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class PatientAccessServiceResponse;

@interface WPPatientAccessServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;
-(PatientAccessServiceResponse*)allocResponse;

@end
