//
//  WPServerSet.h
//  iChart
//
//  Created by Epic on 5/6/10.
//  Copyright © 2010-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

/**
 * Contains the set of servers and the epic mandatory minimum version
 *
 */
@interface WPServerSet : WPObject 
{
	NSArray*	webservers;			/** Array of web servers */
	float		minServerVersion;	/** App version (A.B format) */
}

@property (nonatomic,strong)	NSArray*	webservers;
@property (nonatomic,assign)	float		minServerVersion;

@end
