//
//  NSDate.h
//  EpicOnHand
//
//  Created by Mike on 2/4/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (WPSystemTime)

+(NSTimeInterval) timeIntervalSinceSystemStartup;
-(NSTimeInterval) timeIntervalSinceSystemStartup;
+(NSDate *) dateOfSystemStartup;

@end

