//
//  NSUserDefaults+WPW.h
//  MyChart
//
//  Created by Matthew Flatau on 4/13/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>


extern NSString *const kWPUserAgentKey;

@interface NSUserDefaults (WPW)

+ (NSUserDefaults *)sharedUserDefaults;

+ (NSString *)getUserAgent;
+ (void)setUserAgent:(NSString *)userAgent;
@end
