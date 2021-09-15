//
//  IWPAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/28/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IWPPatient.h"

/**
 * @brief Represents an interface for an individual alert.
 */
@protocol IWPAlert <NSObject>

/**
 * @brief The patient associated with this alert.
 */
@property (nonatomic, strong, readonly, nonnull) id <IWPPatient> patient;

/**
 * @brief Count of individual alerts of a particular type.
 */
@property (nonatomic, readonly, assign) NSInteger count;

/**
 * @brief Verbose user friendly string explaining the alert.
 */
@property (nonatomic, strong, readonly, nullable) NSString *displayString;

@end
