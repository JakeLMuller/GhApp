//
//  WPVisitType.h
//  iChart
//
//  Created by Chetan Satish on 8/25/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPVisitType : WPObject {
	
	NSString *externalID_;
    NSString *allowedEndDate_;
    NSString *allowedStartDate_;
	BOOL canSchedule_;
    BOOL isAdvanced_;
    NSString *myChartInstructions_;
    NSString *preVisitForm_;
    NSString *preVisitLQF_;
}

@property (nonatomic, strong) NSString *externalID;
@property (nonatomic, strong) NSString *allowedEndDate;
@property (nonatomic, strong) NSString *allowedStartDate;
@property (nonatomic, assign) BOOL canSchedule;
@property (nonatomic, assign) BOOL isAdvanced;
@property (nonatomic, strong) NSString *myChartInstructions;
@property (nonatomic, strong) NSString *preVisitForm;
@property (nonatomic, strong) NSString *preVisitLQF;

@end
