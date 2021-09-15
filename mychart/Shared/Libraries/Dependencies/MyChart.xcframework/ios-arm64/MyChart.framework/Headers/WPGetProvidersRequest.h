//
//  GetProvidersRequest.h
//
//
//  Created by Yash Vaka on 1/11/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPGetProvidersResponse.h"

@class WPGetProvidersResponse;

@interface WPGetProvidersRequest : WPRequest{
}

- (WPGetProvidersResponse *)allocResponse;

@end
