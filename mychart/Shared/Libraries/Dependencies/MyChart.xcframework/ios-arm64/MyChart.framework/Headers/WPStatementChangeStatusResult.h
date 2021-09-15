//
//  WPStatementChangeStatusResult.h
//  iChart
//
//  Created by Jesse Dumke on 10/24/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import "WPObject.h"

typedef NS_ENUM(NSInteger, StatementUpdateStatusResponseCode) {
    kStatementUpdateStatusFailed = 0,
    kStatementUpdateStatusSucceeded = 1
} ;

@interface WPStatementChangeStatusResult : WPObject {
    StatementUpdateStatusResponseCode status_;
}

@property (nonatomic) StatementUpdateStatusResponseCode status;

@end
