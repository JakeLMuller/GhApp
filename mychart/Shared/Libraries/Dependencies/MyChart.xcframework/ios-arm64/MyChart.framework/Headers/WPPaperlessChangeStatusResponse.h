//
//  WPPaperlessChangeStatusResponse.h
//  iChart
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPResponse.h"
#import "WPPaperlessChangeStatusResult.h"

@interface WPPaperlessChangeStatusResponse : WPResponse {
    WPPaperlessChangeStatusResult *changeStatusResponse_;
}

@property (nonatomic, strong) WPPaperlessChangeStatusResult *changeStatusResponse;

@end
