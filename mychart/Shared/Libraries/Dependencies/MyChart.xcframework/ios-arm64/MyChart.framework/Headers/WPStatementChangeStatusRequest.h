//
//  WPStatementChangeStatusRequest.h
//  iChart
//
//  Created by Jesse Dumke on 10/24/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPRequest.h"
#import "WPStatement.h"
#import <Foundation/Foundation.h>

@class WPStatementChangeStatusResponse;

@interface WPStatementChangeStatusRequest : WPRequest {
    WPStatement *statement_;
}

@property (nonatomic, strong) WPStatement *statement;

-(id)initWithStatement:(WPStatement *)statement;
-(WPStatementChangeStatusResponse *)allocResponse;

@end
