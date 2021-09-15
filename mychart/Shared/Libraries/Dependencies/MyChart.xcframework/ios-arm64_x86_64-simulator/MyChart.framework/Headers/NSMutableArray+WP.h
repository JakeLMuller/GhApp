//
//  NSMutableArray+WP.h
//  iChart
//
//  Created by Matthew Flatau on 8/12/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (WP)

-(void)setXMLValue:(id)value forKey:(NSString *)key;
- (BOOL)addObjectIfNonNull:(NSString *)object;

@end
