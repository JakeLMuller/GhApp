//
//  WPServerOption.h
//  iChart
//
//  Created by Epic on 4/28/10.
//  Copyright © 2010-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPServerOption : WPObject {
	NSString* key;
	NSString* value;
}

@property (nonatomic,strong) NSString* key;
@property (nonatomic,strong) NSString* value;

@end
