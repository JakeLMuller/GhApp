//
//  WPGetMessageViewersResult.h
//  MyChart
//
//  Created by Alex J White on 2/10/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

@interface WPGetMessageViewersResult : WPObject

typedef NS_ENUM(NSInteger, WPMessageViewersSetting) {
    kWPMessageViewerSettingUnspecified = -1,
    kWPMessageViewerSettingNoViewers = 0,
    kWPMessageViewerSettingAllViewers = 1,
};

typedef NS_ENUM(NSInteger, WPConfidentialitySetting) {
    kWPConfidentialityUnspecified = -1,
    kWPConfidentialityNo = 0,
    kWPConfidentialityYes = 1
};

typedef NS_ENUM(NSInteger, WPMessageViewerDisplayMode) {
    kWPMessageViewerDisplayModeHide,
    kWPMessageViewerDisplayModeGeneric,
    kWPMessageViewerDisplayModeSpecificNames
};

@property (nonatomic,strong) NSMutableArray *viewers;
@property (nonatomic,assign) WPMessageViewersSetting viewerSetting;
@property (nonatomic,assign) WPConfidentialitySetting confidentialitySetting;
@property (nonatomic,strong) NSString *userWPR;
@property (nonatomic,strong) NSString *patientWPR;

@end
