//
//  WPForceTouchMenuItem.h
//  MyChart
//
//  Created by Alex J White on 7/5/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>



/**!
 * @brief A model object used to create a WPForceTouchMenuTableViewCell
 */
@interface WPForceTouchMenuItem : WPObject

@property (nonatomic, strong, nonnull) UIImage *iconImage;
@property (nonatomic, strong, nonnull) NSString *text;

@property (nonatomic, copy, nonnull) void (^actionBlock)(void);


@end
