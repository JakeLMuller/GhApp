//
//  WPPaperlessSignupOptionsResponse.h
//  iChart
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPResponse.h"
#import "WPPaperlessOptions.h"
#import <Foundation/Foundation.h>

@interface WPPaperlessSignupOptionsResponse : WPResponse {
    WPPaperlessOptions *paperlessOptions_;
}

@property (nonatomic, strong) WPPaperlessOptions *paperlessOptions;

@end
