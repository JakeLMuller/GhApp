//
//  WPSaveNotificationPreferencesRequest.h
//  MyChart
//
//  Created by Surender Pal Singh on 8/29/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPSaveNotificationPreferencesResponse.h"

@interface WPSaveNotificationPreferencesRequest : WPRequest

- (instancetype)initWithEmail:(NSString*)email Phone:(NSString*)phone AllSmtpEnabled:(BOOL) allSmtpEnabled AllTextEnabled:(BOOL)allTextEnabled;

- (NSData *)XMLData;

- (WPSaveNotificationPreferencesResponse*)allocResponse;

@end
