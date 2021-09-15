//
//  WPStatementRequest.h
//  iChart
//
//  Created by Jesse Dumke on 9/7/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPRequest.h"
#import "WPStatement.h"
#import <Foundation/Foundation.h>

@class WPStatementResponse;

@interface WPStatementRequest : WPRequest {
    WPStatement *statement_;
}

@property (nonatomic, strong) WPStatement *statement;

-(id)initWithStatement:(WPStatement *)statement;
-(WPStatementResponse *)allocResponse;

@end
