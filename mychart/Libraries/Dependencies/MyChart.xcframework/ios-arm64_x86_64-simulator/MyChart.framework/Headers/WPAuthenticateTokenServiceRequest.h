//
//  WPAuthenticateTokenServiceRequest.h
//  MyChart
//
//  Created by Ben Drda on 4/3/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPAuthenticationServiceResponse.h"

@interface WPAuthenticateTokenServiceRequest : WPRequest

@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) NSString *deviceID;
@property (nonatomic, strong) NSString *username;
@property (nonatomic,strong)  NSString *websiteName;

- (instancetype)initWithToken:(NSString *)token deviceID:(NSString *)deviceID websiteName:(NSString *)websiteName username:(NSString *)username andAddress:(NSString *)address;
- (WPAuthenticationServiceResponse *)allocResponse;

@end
