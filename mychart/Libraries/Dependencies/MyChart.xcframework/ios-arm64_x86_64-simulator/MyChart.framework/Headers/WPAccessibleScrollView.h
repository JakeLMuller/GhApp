//
//  WPAccessibleScrollView.h
//  iChart
//
//  Created by Matthew Flatau on 6/25/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WPAccessibilityAdjustableDelegate <NSObject>

- (void)accessibilityIncrement:(id)sender;
- (void)accessibilityDecrement:(id)sender;

@end

@interface WPAccessibleScrollView : UIScrollView

@property (nonatomic, weak) IBOutlet id <WPAccessibilityAdjustableDelegate> adjustableDelegate;

- (void)accessibilityIncrement;
- (void)accessibilityDecrement;

@end
