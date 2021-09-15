//
//  WPAccessibleView.h
//  MyChart
//
//  Created by Matt Flatau on 4/24/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WPAccessibleViewDelegate;


/*!
 * @brief This class is just a UIView subclass that allows us to specify a delegate to return
 *        accessible values. This makes it easier to give the most up-to-date info for things that
 *        change value when voiceover attempts to select it.
 **/
@interface WPAccessibleView : UIView

@property (nonatomic, weak) IBOutlet id <WPAccessibleViewDelegate> delegate;
@property (nonatomic, assign) UIAccessibilityNotifications valueChangeNotification; //Default is UIAccessibilityPageScrolledNotification

@end



@protocol WPAccessibleViewDelegate <NSObject>

@optional

- (NSString *)accessibilityLabelForView:(WPAccessibleView *)view;
- (NSString *)accessibilityHintForView:(WPAccessibleView *)view;
- (UIAccessibilityTraits)accessibilityTraitsForView:(WPAccessibleView *)view;
- (NSString *)accessibilityValueForView:(WPAccessibleView *)view;
- (void)accessibilityDecrementForView:(WPAccessibleView *)view;
- (void)accessibilityIncrementForView:(WPAccessibleView *)view;

@end
