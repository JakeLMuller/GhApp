//
//  WPGetMessageViewersRequest.h
//  MyChart
//
//  Created by Alex J White on 2/8/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPGetMessageViewersResponse.h"

@interface WPGetMessageViewersRequest : WPRequest

@property (nonatomic, strong) WPOrganizationInfo *organization;

-(id)initWithSecurityString:(NSString *)secString forOrganization:(WPOrganizationInfo*)organization;
- (NSData *)XMLData;


- (WPGetMessageViewersResponse *)allocResponse;

@end
