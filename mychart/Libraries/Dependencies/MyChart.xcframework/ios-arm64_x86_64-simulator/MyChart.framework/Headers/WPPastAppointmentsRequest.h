//
//  WPPastAppointmentsRequest.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 8/9/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"

@class WPPastAppointmentsResponse;

@interface WPPastAppointmentsRequest : WPRequest {
    NSMutableArray *nextAppointmentMap;
}

@property (nonatomic, strong) NSMutableArray *nextAppointmentMap;

-(id) init;

//Set the list of DATs across organizations for the next set of appointments to be loaded
-(void)setNextAppointmentMap:(NSMutableArray *)nextAppointmentMap;

//Build the xml body for the request
-(NSData *)XMLData;

//Allocate a response object for the request
-(WPPastAppointmentsResponse*)allocResponse;
@end
