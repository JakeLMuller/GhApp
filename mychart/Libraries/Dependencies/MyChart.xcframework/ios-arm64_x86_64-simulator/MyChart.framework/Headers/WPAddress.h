//
//  WPAddress.h
//  iChart
//
//  Created by Chetan Satish on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@class WPCategory;

@interface WPAddress : WPObject {

	NSMutableArray*		lines_;
	NSString*			city_;
	WPCategory*			state_;
	NSString*			ZIP_;
	WPCategory*			county_;
	WPCategory*			country_;
	NSString*			houseNumber_;
	WPCategory*			district_;
}

@property (nonatomic, strong) NSMutableArray*	lines;
@property (nonatomic, strong) NSString*			city;
@property (nonatomic, strong) WPCategory*		state;
@property (nonatomic, strong) NSString*			ZIP;
@property (nonatomic, strong) WPCategory*		county;
@property (nonatomic, strong) WPCategory*		country;
@property (nonatomic, strong) NSString*			houseNumber;
@property (nonatomic, strong) WPCategory*		district;

/*
 * String suitable to be used for label and mapping purposes
 */
@property (weak, nonatomic, readonly) NSString* mappingString;

@end
