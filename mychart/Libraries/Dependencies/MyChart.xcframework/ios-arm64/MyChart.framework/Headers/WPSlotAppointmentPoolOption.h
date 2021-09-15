//
//  WPSlotAppointmentPoolOption.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

@class WPAppointmentResource;

@interface WPSlotAppointmentPoolOption : WPObject 
{
	NSInteger				_line;        //!!!: This actually counts "",2,3,4,...
	NSString*				_visitTypeID;
	NSString*				_date;
	NSString*				_time;
	NSInteger				_length;
	WPAppointmentResource*	_resource;

}

@property(nonatomic, assign) NSInteger				line;
@property(nonatomic, strong) NSString*				visitTypeID;
@property(nonatomic, strong) NSString*				date;
@property(nonatomic, strong) NSString*				time;
@property(nonatomic, assign) NSInteger				length;
@property(nonatomic, strong) WPAppointmentResource*	resource;


@end
