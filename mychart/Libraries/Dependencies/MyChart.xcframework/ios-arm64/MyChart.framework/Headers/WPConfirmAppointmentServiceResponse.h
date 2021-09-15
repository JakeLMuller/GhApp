//
//  WPConfirmAppointmentServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 9/13/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPConfirmAppointmentServiceResult: WPObject

@property (nonatomic, assign) BOOL success;

@end

@interface WPConfirmAppointmentServiceResponse : WPResponse

@property (nonatomic, strong, nullable) WPConfirmAppointmentServiceResult *confirmAppointmentResult;

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(nullable NSData*)xml;

@end
