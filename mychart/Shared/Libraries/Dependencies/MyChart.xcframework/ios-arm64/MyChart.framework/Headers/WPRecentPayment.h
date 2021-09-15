//
//  WPRecentPayment.h
//  iChart
//
//  Created by Jesse Dumke on 8/2/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPRecentPayment : WPObject {
    NSDecimalNumber *amount_;
    NSDate *date_;
    NSString *source_;
    NSString *reference_;
    NSString *description_;
}

@property (nonatomic, strong) NSDecimalNumber *amount;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSString *source;
@property (nonatomic, strong) NSString *reference;
@property (nonatomic, strong) NSString *description;


@end

