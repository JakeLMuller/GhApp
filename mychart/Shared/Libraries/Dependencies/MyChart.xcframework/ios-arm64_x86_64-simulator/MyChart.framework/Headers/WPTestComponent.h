//
//  WPTestComponent.h
//  MyChart
//
//  Created by Epic on 7/6/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.

#import <Foundation/Foundation.h>
#import "WPObject.h"

/** 
 * Model that stores detailed information about a single test result component
 *
 */
@interface WPTestComponent : WPObject

@property(nonatomic, strong, nullable) NSString *htmlValue;
@property(nonatomic, strong, nullable) NSString *htmlComments;
/** Component's value */
@property(nonatomic, strong, nullable) NSString *low;
/** Unit for this component */
@property(nonatomic, strong, nullable) NSString *high;
/** Low value for this component */
@property(nonatomic, strong, nullable) NSString *unit;
/** High value for this component */
@property(nonatomic, strong, nullable) NSString *value;
/** Reference range? Not sure.. */
@property(nonatomic, strong, nullable) NSString *refRange;
/** Flag? */
@property(nonatomic, strong, nullable) NSString *flag;
/** Comments on the component */
@property(nonatomic, strong, nullable) NSString *componentComments;
/// Low value for the component, nil or a number guaranteed
@property(nonatomic, strong, nullable) NSNumber *numericLow;
/// High value for the component, nil or a number guaranteed
@property(nonatomic, strong, nullable) NSNumber *numericHigh;
/// Value for the component, nil or a number guaranteed
@property(nonatomic, strong, nullable) NSNumber *numericValue;

@end
