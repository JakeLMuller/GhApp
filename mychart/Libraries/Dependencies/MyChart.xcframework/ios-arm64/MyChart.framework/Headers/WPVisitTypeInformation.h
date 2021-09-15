//
//  WPVisitTypeInformation.h
//  iChart
//
//  Created by Chetan Satish on 8/25/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPVisitType.h"

@interface WPVisitTypeInformation : WPObject {
	WPObject *error_;
	NSString *schedulingPreferenceLogic_;
	BOOL verifyDemographics_;
	BOOL verifyInsurance_;
	BOOL verifyREL_;
	WPVisitType *visitType_;
}

@property (nonatomic, strong) WPObject *error;
@property (nonatomic, strong) NSString *schedulingPreferenceLogic;
@property (nonatomic, assign) BOOL verifyDemographics;
@property (nonatomic, assign) BOOL verifyInsurance;
@property (nonatomic, assign) BOOL verifyREL;
@property (nonatomic, strong) WPVisitType *visitType;

@end
