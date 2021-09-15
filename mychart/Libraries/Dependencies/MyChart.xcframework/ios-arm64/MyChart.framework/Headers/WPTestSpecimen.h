//
//  WPTestSpecimen.h
//  MyChart
//
//  Created by Mike Epley on 10/20/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

@interface WPTestSpecimen : WPObject

@property (nonatomic, strong, nullable) NSString *type;
@property (nonatomic, strong, nullable) NSString *source;
@property (nonatomic, strong, nullable) NSDate *collectionInstant;
@property (nonatomic, strong, nullable) NSTimeZone *collectionInstantTimeZone;

@end
