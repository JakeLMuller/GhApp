//
//  WPPatientInformationResponse.h
//  iChart
//
//  Created by Chetan Satish on 1/26/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"

#import "WPPatientInfoResult.h"

@interface WPPatientInformationResponse : WPResponse {
	WPPatientInfoResult *patInfo;
}

@property (nonatomic, strong) WPPatientInfoResult *patInfo;

@end

