//
//  WPPostAppointmentInformationResult.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *alwhite 01/2015 350209 Added CSN

#import <Foundation/Foundation.h>

#import "WPObject.h"

@class WPCopay;

@interface WPPostAppointmentInformationResult : WPObject {

	NSString*			failReason_;
	NSString*			dat_;
	NSString*			date_;
	NSString*			time_;
	NSNumber*			length_;
	WPObject*			visitType_;
	NSMutableArray*		resources_;			//WPAppointmentResource*
	WPCopay*			copay_;
	NSString*			schedulingInstructions_;
	NSMutableArray*		departmentInstructions_;		//WPDepartment* used to contain department instructions
	
	NSMutableArray*		questionnaires_;
	NSMutableArray*		historyQuestionnaires_;
		
	BOOL				success_;
	BOOL				oneWayQueueUsed_;
	BOOL				didTimeout_;

}

@property (nonatomic, strong) NSString*			failReason;
@property (nonatomic, strong) NSString*			DAT;  //NEEDS TO BE ALL CAPS
@property (nonatomic, strong) NSString*			date;
@property (nonatomic, strong) NSString*			time;
@property (nonatomic, strong) NSNumber*			length;
@property (nonatomic, strong) WPObject*			visitType;
@property (nonatomic, strong) NSMutableArray*	resources;				//WPAppointmentResources
@property (nonatomic, strong) WPCopay*			copay;
@property (nonatomic, strong) NSString*			schedulingInstructions;
@property (nonatomic, strong) NSMutableArray*	departmentInstructions;	//WPDepartment* used to contain department instructions

@property (nonatomic, strong) NSMutableArray*	questionnaires;
@property (nonatomic, strong) NSMutableArray*	historyQuestionnaires;

@property (nonatomic, assign) BOOL				success;
@property (nonatomic, assign) BOOL				oneWayQueueUsed;
@property (nonatomic, assign) BOOL				didTimeout;

@property (nonatomic, strong) NSString*         CSN;

@end
