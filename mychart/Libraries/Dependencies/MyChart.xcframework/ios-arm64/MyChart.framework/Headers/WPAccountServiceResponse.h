//
//  WPAccountServiceResponse.h
//  iChart
//
//  Created by Jesse Dumke on 7/3/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPResponse.h"
#import "WPAccountSummary.h"
#import <Foundation/Foundation.h>

@interface WPAccountServiceResponse : WPResponse {
    WPAccountSummary* summary_;
}

@property (nonatomic, strong) WPAccountSummary* summary;

@end
