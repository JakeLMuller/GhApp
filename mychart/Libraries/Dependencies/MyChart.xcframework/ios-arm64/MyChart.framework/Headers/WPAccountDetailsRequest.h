//
//  WPAccountDetailsRequest.h
//  iChart
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPRequest.h"
#import "WPBillSummary.h"
#import <Foundation/Foundation.h>

@class WPAccountDetailsResponse;

@interface WPAccountDetailsRequest : WPRequest;

-(id)initWithBillSummary:(WPBillSummary *)billSummary;
-(id)initWithEncryptedAccountId:(NSString *)encryptedAccountId EncryptedAccountType:(NSString *)encryptedAccountType;
-(id)initWithAccountId:(NSString *)accountId AccountType:(int)accountType EncryptedAccountId:(NSString *)encryptedAccountId EncryptedAccountType:(NSString *)encryptedAccountType;
-(WPAccountDetailsResponse *)allocResponse;

@end
