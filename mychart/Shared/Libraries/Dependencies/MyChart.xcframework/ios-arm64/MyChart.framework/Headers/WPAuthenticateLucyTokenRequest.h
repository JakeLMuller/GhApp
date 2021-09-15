//
//  WPAuthenticateLucyTokenRequest.h
//  MyChart
//
//  Created by Matthew Flatau on 11/22/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPServer.h"
#import "WPAuthenticationServiceResponse.h"

@interface WPAuthenticateLucyTokenRequest : WPRequest

- (instancetype)initWithToken:(NSString *)token deviceID:(NSString *)deviceID websiteName:(NSString *)websiteName username:(NSString *)username andAddress:(NSString *)address withUsernameEncrypted:(BOOL)encryptedUsername;
- (WPAuthenticationServiceResponse *)allocResponse;

@end
