//
//  WPPastAppointmentDetailsResponse.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 8/13/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"

@class WPEncounter;

@interface WPPastAppointmentDetailsResult : WPObject
{
    WPEncounter* appointment;
}

@property (nonatomic,strong) WPEncounter* appointment;

@end

@interface WPPastAppointmentDetailsResponse : WPResponse
{
    WPPastAppointmentDetailsResult* pastAppointmentDetailsResult;
}

@property (nonatomic, strong) WPPastAppointmentDetailsResult* pastAppointmentDetailsResult;

//Create encounter object from the xml response
-(void)loadFromXMLData:(NSData *)xml;

@end
