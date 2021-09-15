//
//  WPGetProvidersResponse.h
//  
//
//  Created by Yash Vaka on 1/11/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"


@interface WPProvidersResult : WPObject

@property (strong,nonatomic) NSMutableArray *providers;

@end


@interface WPGetProvidersResponse : WPResponse

@property (nonatomic, strong) WPProvidersResult *providersResult;

@end
