//
//  WPHUSLColor.h
//  MyChart
//
//  Object representing a color in the HUSL color space with the components hue, saturation, and lightness.
//
//  0 <= hue <= 360
//  0 <= saturation <= 100
//  0 <= lightness <= 100
//
//  Created by Mike Epley on 7/8/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPHUSLColor : NSObject

@property (nonatomic) CGFloat hue;
@property (nonatomic) CGFloat saturation;
@property (nonatomic) CGFloat lightness;

- (WPHUSLColor *)initWithHue:(CGFloat)hue saturation:(CGFloat)saturation lightness:(CGFloat)lightness;

@end
