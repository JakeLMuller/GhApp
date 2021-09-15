//
//  WPCategory.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

/*
 * TODO: Might be better to create another object like WPRecord and then all master
 * file records use WPRecord and all objectss of ours extends WPObject. SCOPE TOO LARGE to do now. :)
 */
@interface WPCategory : WPObject
{

}

@property (nonatomic, weak)	NSString*	value;  //alias for objectID. Categories use term 'value' as opposed to 'id' or 'objectID'

@end
