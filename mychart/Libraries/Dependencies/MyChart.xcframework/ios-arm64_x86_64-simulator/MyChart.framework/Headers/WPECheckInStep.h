//
//  WPECheckInStep.h
//  MyChart
//
//  Created by David Schanker on 8/19/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPECheckInStep : WPObject

@property (nonatomic, strong) NSString*     stepId;
@property (nonatomic, strong) NSString*     stepName;
@property (nonatomic, assign) BOOL          isFiltered;
@property (nonatomic, strong) NSString*     status;
@property (nonatomic, assign) NSInteger*    action;

@end
