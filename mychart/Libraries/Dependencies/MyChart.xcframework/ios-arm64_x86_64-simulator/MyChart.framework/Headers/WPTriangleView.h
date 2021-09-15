//
//  WPTriangleView.h
//  MyChart
//
//  Created by Ben Drda on 2/17/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WPTriangleViewType) {
    kWPTriangleViewUpperLeading,
    kWPTriangleViewUpperTrailing,
    kWPTriangleViewLowerLeading,
    kWPTriangleViewLowerTrailing,
    kWPTriangleViewTop,
    kWPTriangleViewTrailing,
    kWPTriangleViewBottom,
    kWPTriangleViewLeading,
};

@interface WPTriangleView : UIView

@property (nonatomic, assign) WPTriangleViewType type;
@property (nonatomic, strong) UIColor *color;

@end
