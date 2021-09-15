//
//  WPVitals.h
//  iChart
//
//  Created by Epic on 7/7/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPVitals : WPObject {
	NSString* bloodPressure;
	NSString* pulse;
	NSString* temperature;
	NSString* temperatureSource;
	NSString* resp;
	NSString* height;
	NSString* weight;
}

@property (nonatomic,strong) NSString* bloodPressure;
@property (nonatomic,strong) NSString* pulse;
@property (nonatomic,strong) NSString* temperature;
@property (nonatomic,strong) NSString* temperatureSource;
@property (nonatomic,strong) NSString* resp;
@property (nonatomic,strong) NSString* height;
@property (nonatomic,strong) NSString* weight;

@end
