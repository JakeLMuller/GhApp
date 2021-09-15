//
//  WPPastAppointmentsResponse.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 8/10/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPObject.h"
#import "WPPastAppointmentListResult.h"

@interface WPPastAppointmentsResponse : WPResponse {
    WPPastAppointmentListResult *pastAppointmentList;
}

@property (nonatomic, strong, nullable) WPPastAppointmentListResult *pastAppointmentListResult;

-(void) loadFromXMLData: (nullable NSData*)xml;

@end
