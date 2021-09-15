//
//  WPAccountDetailsResponse.h
//  iChart
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPResponse.h"
#import "WPBillDetail.h"

@interface WPAccountDetailsResponse : WPResponse {
    WPBillDetail *billDetail_;
}

@property (nonatomic, strong) WPBillDetail *billDetail;

@end
