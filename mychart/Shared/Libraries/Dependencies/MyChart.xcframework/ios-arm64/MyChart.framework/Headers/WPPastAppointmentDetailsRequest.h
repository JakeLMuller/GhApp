//
//  WPPastAppointmentDetailsRequest.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 8/13/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPPastAppointmentDetailsResponse.h"

@interface WPPastAppointmentDetailsRequest : WPRequest {
    NSString *DAT;
    BOOL isExternal;
    NSString *orgID;
    NSString *CSN;
}

@property (nonatomic, strong) NSString* DAT;
@property (nonatomic) BOOL isExternal;
@property (nonatomic, strong) NSString* orgID;
@property (nonatomic, strong) NSString* CSN;

-(NSData*)XMLData;

-(WPPastAppointmentDetailsResponse*)allocResponse;

@end
