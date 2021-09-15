//
//  WPSchedulingInformation.h
//  iChart
//
//  Created by Chetan Satish on 8/3/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import "WPObject.h"
#import "WPReasonForVisit.h"

@interface WPSchedulingInformation : WPObject {
	BOOL				allowed_;
	BOOL				showTeamOptionBeforeSearch_;
	BOOL				commentsRequired_;
	
	NSString*			reason_;
	NSMutableArray*		reasonsForVisit_;
}

@property (nonatomic, assign) BOOL allowed;
@property (nonatomic, assign) BOOL showTeamOptionBeforeSearch;
@property (nonatomic, assign) BOOL commentsRequired;

@property (nonatomic, strong) NSString*			reason;
@property (nonatomic, strong) NSMutableArray*	reasonsForVisit;

@end
