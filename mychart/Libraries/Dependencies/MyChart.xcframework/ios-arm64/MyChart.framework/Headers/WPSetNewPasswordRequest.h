//
//  WPSetNewPasswordRequest.h
//  MyChart
//
//  Created by Yash Vaka on 3/7/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import <Foundation/Foundation.h>
#import "WPResetPasswordResponse.h"

@interface WPSetNewPasswordRequest : WPRequest

- (instancetype)initWithUpdatedPassword:(NSString *)updatedPassword;
- (WPResetPasswordResponse *)allocResponse;

@end
