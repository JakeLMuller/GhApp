//
//  WPSlotRequestProvider.h
//  iChart
//
//  Created by Larry Irwin II on 8/5/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

@interface WPSlotRequestProvider : WPObject 
{
	NSArray*		departmentIDs_;		//Array of NSString* //TODO:use WPDepartment array?
}

@property (nonatomic, strong)	NSArray*	departmentIDs;

-(id)initWithID:(NSString*)aID andDepartmentIDs:(NSArray*)aDepartmentIDs;

@end
