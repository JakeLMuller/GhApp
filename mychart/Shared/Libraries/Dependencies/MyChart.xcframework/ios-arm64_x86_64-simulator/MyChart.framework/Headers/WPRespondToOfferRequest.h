//
//  WPRespondToOfferRequest.h
//  MyChart
//
//  Created by Matthew Flatau on 12/12/14.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPRespondToOfferResponse.h"

@class WPWaitListEntry;

@interface WPRespondToOfferRequest : WPRequest

- (instancetype)initWithWaitListEntry:(WPWaitListEntry *)entry andAccept:(BOOL)accept;

- (WPRespondToOfferResponse *)allocResponse;

@property (nonatomic, strong) WPWaitListEntry *entry;
@property (nonatomic, assign) BOOL isAccept;

@end
