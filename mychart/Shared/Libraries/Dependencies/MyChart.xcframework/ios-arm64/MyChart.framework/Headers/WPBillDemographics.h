//
//  WPBillDemographics.h
//  iChart
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPBillDemographics : WPObject {
    NSString *patientName_;
    NSMutableArray *address_;   //address is returned simply as a list of lines. there is no discrete data.
    NSString *homePhone_;
    NSString *workPhone_;
}

@property (nonatomic, strong) NSString *patientName;
@property (nonatomic, strong) NSMutableArray *address;
@property (nonatomic, strong) NSString *homePhone;
@property (nonatomic, strong) NSString *workPhone;

@end
