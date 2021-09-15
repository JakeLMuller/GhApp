//
//  WPSlotReviewInformationResult.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

@class WPReasonForVisit;

@interface WPSlotReviewInformationResult : WPObject

@property (nonatomic, strong, nullable) NSString*			date;
@property (nonatomic, strong, nullable) NSString*			time;
@property (nonatomic, strong, nullable) NSNumber*			length;
@property (nonatomic, strong, nullable) NSMutableArray*	resources;			//WPAppointmentResources
@property (nonatomic, strong, nullable) NSString*			errorCode;
@property (nonatomic, strong, nullable) NSMutableArray*	warnings;			//NSString
@property (nonatomic, strong, nullable) NSDecimalNumber*	copayAmount;
@property (nonatomic, strong, nullable) NSString*			schedulingInstructions;
@property (nonatomic, strong, nullable) NSMutableArray*	departmentInstructions;		//used to contain department instructions
@property (nonatomic, strong, nullable) WPObject*			visitType;
@property (nonatomic, strong, nullable) WPReasonForVisit*	reasonForVisit;

@property (nonatomic, assign) BOOL				isRemote;
@property (nonatomic, assign) BOOL				commentsRequired;

@end
