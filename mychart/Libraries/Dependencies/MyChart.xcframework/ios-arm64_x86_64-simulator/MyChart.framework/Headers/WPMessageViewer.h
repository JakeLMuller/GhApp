//
//  WPMessageViewer.h
//  MyChart
//
//  Created by Alex J White on 2/3/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

@interface WPMessageViewer : WPObject

- (instancetype)init:(NSString *)name id:(NSString *)ID; 
@property (nonatomic, strong) NSDate *readDate;

@end
