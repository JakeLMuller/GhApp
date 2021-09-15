//
//  WPMarkCompleteResult.h
//  MyChart
//
//  Created by Jake Silver on 5/22/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPMarkCompleteResult : WPObject

@property (strong, nonatomic) NSMutableArray *errorCodes;
@property (nonatomic, assign) BOOL success;

@end
