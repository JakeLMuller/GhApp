//
//  WPFutureOrder.h
//  iChart
//
//  Created by Epic on 7/7/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPOrder.h"

@interface WPFutureOrder : WPOrder 
{
	NSString* expectedDate;
	NSString* expireDate;
}

@property (nonatomic,strong) NSString* expectedDate;
@property (nonatomic,strong) NSString* expireDate;

@end
