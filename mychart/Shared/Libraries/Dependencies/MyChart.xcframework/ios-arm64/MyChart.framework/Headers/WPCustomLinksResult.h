//
//  WPCustomLinksResult.h
//  MyChart
//
//  Created by Kip Price on 3/21/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 Handles links returned in the customLinks webservice
 */
@interface WPCustomLinksResult : WPObject 


/**
 Links to display in upcoming appointments
 */
@property (nonatomic, strong, nullable) NSMutableArray *UpcomingAppointment;

@end
