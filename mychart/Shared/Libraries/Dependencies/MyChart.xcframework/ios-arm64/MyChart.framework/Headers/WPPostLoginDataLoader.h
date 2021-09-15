//
//  WPPostLoginDataLoader.h
//  
//
//  Created by Matthew Flatau on 12/30/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPNewFeatureAlert.h"

@class WPServer;

@interface WPPostLoginDataLoader : NSObject

- (void)executeWithCompletion:(void (^)(void))completionHandler;

+ (WPPostLoginDataLoader *)getDataLoader;

+ (void)resetDataLoader;

- (void)refreshAlertsForAllPatients;

@property (nonatomic, strong) NSMutableArray *notifications;



@end
