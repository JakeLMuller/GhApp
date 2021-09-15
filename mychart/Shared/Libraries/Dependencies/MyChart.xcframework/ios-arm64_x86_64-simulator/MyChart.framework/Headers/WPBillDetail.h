//
//  WPBillDetail.h
//  MyChart
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPBillBase.h"
#import "WPBillDemographics.h"

/**
 * Model for a billing account details.
 */
@interface WPBillDetail : WPBillBase

// demographics for this account
@property (nonatomic, strong) WPBillDemographics *accountDemographics;

// list of statements for this account
@property (nonatomic, strong) NSMutableArray *statements;

// list of recent payments for this account
@property (nonatomic, strong) NSMutableArray *recentPayments;

// flag indicating if paperless statements are enabled for this account
@property (nonatomic, assign) BOOL isPaperless;

// flag indicating if recent statements section is enabled in WDF
@property (nonatomic, assign) BOOL recentStatementsEnabled;

// flag indicating if there are more statements to view on the web (unviewable on the phone)
@property (nonatomic, assign) BOOL unviewableStatementsAvailable;

@end
