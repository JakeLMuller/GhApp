//
//  UIDevice+WP.h
//  iChart
//
//  Created by Ben Drda on 9/5/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIDevice (WP)

-(NSString *)UUIDString;

+(BOOL)canMakePhoneCall;

+(BOOL)canSendSms;

+(BOOL)canTakePicture;

/**
 * Ask the device to call the specified phone number.
 *
 * @param phoneNumber the phone number to call
 */
+ (void)callPhoneNumber:(NSString*)phoneNumber;

+(BOOL)hasHighResScreen;

+(BOOL)hasFrontCamera;

+(BOOL)hasBackCamera;

+(BOOL)hasMicrophone;

//Returns devices screen scale factor
+(CGFloat)screenScale;

+(BOOL)isIPad;

//Change Device Orientation; returns NO if no rotation is necessary
+(BOOL)forceToLandscapeOrientation;

+(void)forceToPortraitOrientation;

+ (BOOL)isGreaterThanOrEqualToIOSVersion:(NSInteger)mainVersion;

//Build versions ignore decimals, so 8.3.3 is 833
+ (BOOL)isBuiltWithXcodeGreaterThanVersion:(NSInteger)version;

@end
