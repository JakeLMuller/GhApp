//
//  WPSlot.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

@class WPAppointmentResource;

@interface WPSlot : WPObject

@property (nonatomic, strong) NSString*			date;
@property (nonatomic, strong) NSString*			time;
@property (nonatomic, assign) NSInteger			length;
@property (nonatomic, strong) NSMutableArray*	appointments;  //Represents 'apptAry' - uses WPSlotAppointment objects
@property (nonatomic)         BOOL              conflict;

/*
 *  Returns an array of WPAppointmentResource for the entire slot, all in one list
 */
@property (weak, nonatomic, readonly) NSArray* resources;
@property (weak, nonatomic, readonly) WPAppointmentResource*	primaryResource;

@end
