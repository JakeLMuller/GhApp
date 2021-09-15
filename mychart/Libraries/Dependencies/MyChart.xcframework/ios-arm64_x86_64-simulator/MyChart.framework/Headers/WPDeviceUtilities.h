//
//  WPDeviceUtilities.h
//  MyChart
//
//  Created by Tim Knutson on 5/23/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

// Enum describing the availability of each piece of hardware needed for video
typedef NS_ENUM(NSInteger, WPVideoHardwareStatus) {
    kWPVideoHardwareStatusAllAvailable,
    kWPVideoHardwareStatusNoDeviceCameraOrMicrophone,
    kWPVideoHardwareStatusNoDeviceCamera,
    kWPVideoHardwareStatusNoDeviceMicrophone,
    kWPVideoHardwareStatusNoPermissionCameraOrMicrophone,
    kWPVideoHardwareStatusNoPermissionCamera,
    kWPVideoHardwareStatusNoPermissionMicrophone,
};

@interface WPDeviceUtilities : NSObject

+ (NSString *)getUUIDString;
+ (CGFloat)screenScale;


+ (void)checkVideoHardwareStatusWithMainCompletion:(void (^)(WPVideoHardwareStatus videHardwareStatus))completion;


@end
