//
//  IWPNewFeatureAlert.h
//  MyChart
//
//  Created by Shawn Zhao on 9/29/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@protocol IWPNewFeatureAlert <IWPAlert>
typedef SWIFT_ENUM(NSInteger, WPAPINewFeatureKey, open); //forward declaration since this is compiled in swift source files

/**
 * @brief New feature key for the feature
 */
@property (nonatomic, readonly, assign) WPAPINewFeatureKey newFeatureKey;

@end
