//
//  WPAccountSummary.h
//  iChart
//
//  Created by Jesse Dumke on 7/9/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <Foundation/Foundation.h>
#import "WPObject.h"

//Paperless Statuses - see gtPaperSts^WPPAPERLESS
typedef NS_ENUM(NSInteger, PaperlessStatus) {
	kPaperlessStatusIneligible = -1,
    kPaperlessStatusSignedUp = 1,
    kPaperlessStatusDeclined = 2,
    kPaperlessStatusNoResponse = 3
} ;

@interface WPAccountSummary : WPObject {
    PaperlessStatus paperlessStatus_;
    BOOL allowCancelPaperless_;
    NSMutableArray *bills_;
    NSMutableArray *pastStatements_;
}

@property (nonatomic, assign) PaperlessStatus paperlessStatus;
@property (nonatomic, assign) BOOL allowCancelPaperless;
@property (nonatomic, strong) NSMutableArray *bills;
@property (nonatomic, strong) NSMutableArray *pastStatements;

@end
