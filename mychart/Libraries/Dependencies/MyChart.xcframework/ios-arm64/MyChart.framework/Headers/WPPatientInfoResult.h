//
//  WPPatientInfoResult.h
//  iChart
//
//  Created by Chetan Satish on 2/9/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPPatientInfoResult : WPObject {
	NSString *accountID;
	
}

@property (nonatomic, strong) NSString *accountID;

@end
