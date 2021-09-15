//
//  WPSlotAppointmentPool.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

@interface WPSlotAppointmentPool : WPObject 
{
	NSInteger		_index;
	NSMutableArray*	_options;  //WPSlotAppointmentPoolOption
	
}

@property (nonatomic, assign) NSInteger			index;
@property (nonatomic, strong) NSMutableArray*	options;
@end
