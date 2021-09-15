//
//  WPInboxServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 9/2/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPIncrementalLoadingTracker.h"

@class WPInboxServiceResponse;

@interface WPInboxServiceRequest : WPRequest {
    
}

@property (nonatomic, strong) NSMutableArray *nextMessagesMap;

// Old init function, keep for backward compatibility. Currently used by Watchkit extension
- (instancetype)initWithID:(NSString *)id;
// New init function, this will branch into different namespace based on the feature bit
-(instancetype)initInboxMessageRequest:(NSString *)idIn withMessageFolder:(int)messageFolder IDsForCommunity: (NSMutableArray *) map;
- (NSData *)XMLData;

- (WPInboxServiceResponse*)allocResponse;

@end

