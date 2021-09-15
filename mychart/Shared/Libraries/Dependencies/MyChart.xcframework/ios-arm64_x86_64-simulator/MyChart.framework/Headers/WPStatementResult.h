//
//  WPStatementResult.h
//  iChart
//
//  Created by Jesse Dumke on 10/24/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPObject.h"

@interface WPStatementResult : WPObject {
    NSMutableString *statementBlob_;
}

@property (nonatomic, strong) NSMutableString* statementBlob;

@end
