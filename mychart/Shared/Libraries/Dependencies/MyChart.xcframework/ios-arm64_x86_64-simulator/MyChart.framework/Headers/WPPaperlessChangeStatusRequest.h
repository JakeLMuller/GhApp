//
//  WPPaperlessChangeStatusRequest.h
//  iChart
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPRequest.h"
#import "WPPaperlessOptions.h"

@interface WPPaperlessChangeStatusRequest : WPRequest {
    WPPaperlessOptions *paperlessOptions_;
}

@property (nonatomic, strong) WPPaperlessOptions *paperlessOptions;

-(id)initWithPaperlessOptions:(WPPaperlessOptions *)options;

@end
