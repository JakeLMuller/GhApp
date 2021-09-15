//
//  WPTestResultComponentView.h
//  MyChart
//
//  Created by Ben Drda on 1/29/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPTriangleView.h"
#import "WPTestComponent.h"

@interface WPTestResultComponentView : UIView
@property (nonatomic, strong) WPTestComponent *component;

/*!
 * Tells the view to animate the value indicator from a leading position to the value's position on this thread
 */
- (void)animate;

@end
