//
//  WPSlotAppointment.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

//This object is used as an array to represent the internal scheduling structure known as 'apptAry'
//See WPSlot.h/.m
@interface WPSlotAppointment : WPObject {

	NSInteger		_index;
	NSMutableArray*	_pools;  //WPSlotAppointmentPool
	
}

@property (nonatomic, assign) NSInteger			index;
@property (nonatomic, strong) NSMutableArray*	pools;

@end
