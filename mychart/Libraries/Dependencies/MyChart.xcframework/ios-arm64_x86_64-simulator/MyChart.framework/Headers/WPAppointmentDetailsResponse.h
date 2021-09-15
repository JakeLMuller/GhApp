//
//  WPAppointmentDetailsResponse.h
//  MyChart
//
//  Created by Matthew Flatau on 12/9/14.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPAppointment.h"

@interface WPAppointmentDetailsResult : WPObject

@property (nonatomic, strong, nullable) WPAppointment *appointment;

@end


@interface WPAppointmentDetailsResponse : WPResponse

@property (nonatomic, strong, nullable) WPAppointmentDetailsResult *appointmentResult;

@end
