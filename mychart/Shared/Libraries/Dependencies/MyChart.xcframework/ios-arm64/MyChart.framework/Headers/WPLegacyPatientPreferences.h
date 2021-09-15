//
//  WPLegacyPatientPreferences.h
//  MyChart
//
//  Created by Surender Pal Singh on 6/13/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPPatientContext.h"

typedef NS_ENUM(NSInteger, WPPhotoUploadStatus) {
    kWPPhotoUploadStatusNoChange = 0,
    kWPPhotoUploadStatusUpload = 1,
    kWPPhotoUploadStatusRemove = 2,
};

@interface WPLegacyPatientPreferences : WPObject
@property (strong, nonatomic) WPPatientContext * context;
@property (strong, nonatomic) NSString * modifiedNickname;
@property (strong, nonatomic) UIImage *modifiedPhoto;
@property (strong, nonatomic) UIColor* modifiedColor;
@property (assign, nonatomic) WPPhotoUploadStatus photoUploadStatus;

-(instancetype) initWithContext: (WPPatientContext*) context;

- (BOOL)hasNicknameModified;
- (BOOL)hasPhotoModified;
- (BOOL)hasColorModified;

- (BOOL)hasPreferenceModified;

@end
