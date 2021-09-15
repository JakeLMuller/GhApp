//
//  WPGenerateAuthTokenRequest.h
//  MyChart
//
//  Created by Alex J White on 4/3/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPGenerateAuthTokenResponse.h"
#import "WPDeviceInfo.h"

@interface WPGenerateAuthTokenRequest : WPRequest

@property (nonatomic,strong)	NSString	 *username;
@property (nonatomic,strong)	NSString	 *password;
@property (nonatomic,strong)    WPDeviceInfo *device;
@property (nonatomic,strong)    NSString     *ssoUsernameForCache;


/*
 * Authentication request initialization
 *
 * @param username Username used for authentication
 * @param password Password used for authentication
 */
-(id)initWithUsername:(NSString *)username password:(NSString *)password;

/**
 * Allocate a new Response object for this request
 *
 * @return An AuthenticationServiceResponse
 */
-(WPGenerateAuthTokenResponse*)allocResponse;




@end
