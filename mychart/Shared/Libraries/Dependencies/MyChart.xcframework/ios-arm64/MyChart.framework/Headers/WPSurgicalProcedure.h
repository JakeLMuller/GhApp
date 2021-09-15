//
//  WPSurgicalProcedure.h
//  MyChart
//
//  Created by David Huntsman on 5/21/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPProvider.h"

@interface WPSurgicalProcedure : WPObject
@property (nonatomic, strong, nullable) WPProvider* primarySurgeon;
@end
