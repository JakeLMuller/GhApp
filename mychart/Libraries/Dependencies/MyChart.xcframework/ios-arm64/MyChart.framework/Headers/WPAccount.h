//
//  WPAccount.h
//  iChart
//
//  Created by Jesse Dumke on 7/3/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPAccount : WPObject {
    NSString* accountID_;
    NSString* patientName_;
    NSString* serviceAreaID_;
    NSString* serviceAreaName_;
}

@property (nonatomic, strong) NSString* Id;
@property (nonatomic, strong) NSString* patientName;
@property (nonatomic, strong) NSString* serviceAreaId;
@property (nonatomic, strong) NSString* serviceAreaName;



@end
