//
//  WPSetPasswordRequest.h
//  MyChart
//
//  Created by Yash Vaka on 2/21/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResetPasswordResponse.h"
#import "WPRequest.h"

@interface WPResetPasswordRequest : WPRequest

- (instancetype)initWithOldPassword:(NSString *)oldPassword updatedPassword:(NSString *)updatedPassword;
- (WPResetPasswordResponse *)allocResponse;

@end
