//
//  WPOrder.h
//  iChart
//
//  Created by Epic on 7/7/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPOrder : WPObject 
{
	NSString* type;
	NSString* codeType;
	NSString* procedureCode;
}

@property (nonatomic,strong) NSString* type;
@property (nonatomic,strong) NSString* codeType;
@property (nonatomic,strong) NSString* procedureCode;

@end
