//
//  WPGetMessageAttachmentsRequest.h
//  MyChart
//
//  Created by Yash Vaka on 2/1/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPGetMessageAttachmentsResponse.h"

@interface WPGetMessageAttachmentsRequest : WPRequest

- (instancetype)initGetMessageAttachmentsRequest:(NSString *)messageID organization:(WPOrganizationInfo *)org;
- (WPGetMessageAttachmentsResponse *)allocResponse;

@end
