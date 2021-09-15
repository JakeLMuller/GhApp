//
//  WPNewFeatureAlert.h
//  MyChart
//
//  Created by Shawn Zhao on 9/20/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPNewFeatureAlert : WPAlert <IWPNewFeatureAlert>

@property (nonatomic, strong) NSString*       customDisplayString;
@property (nonatomic, assign) WPActivity      customActivity;
@property (nonatomic, strong) UIImage*        customMainImage;
@property (nonatomic, assign) WPAPINewFeatureKey newFeatureKey;

@end
