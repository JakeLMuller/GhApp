//
//  WPKeyboardUtilities.h
//  MyChart
//
//  Created by Mohammed Rangwala on 10/19/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPKeyboardUtilities : NSObject

/*!
 * @brief Use this method to set an animation when the keyboard shows/hides. Gets the animation values and animates
 * the given block.
 * - Assumes animation as required. If you do not want animation then you would need to create overloaded methods
 */
+ (void)setAnimationForKeyboardNotification:(NSNotification *)notification toAnimation:(void (^)(CGRect keyboardFrame))animation;
+ (void)setAnimationForKeyboardNotification:(NSNotification *)notification toAnimation:(void (^)(CGRect keyboardFrame))animation completion:(void (^)(BOOL finished))completion;

/*!
 * @brief Use this method to set the bottom inset of a scrollview (UITableView or UICollectionView) when the keyboard is shown/hidden
 * - Assumes animation as required. If you do not want animation then you would need to create overloaded methods
 * @param scrollView The scrollView whose bottom inset needs to be set
 * @param fromNotification The keyboard notification
 */
+ (void)setBottomInsetForScrollView:(UIScrollView *)scrollView fromNotification:(NSNotification *)notification;
+ (void)setBottomInsetForScrollView:(UIScrollView *)scrollView fromNotification:(NSNotification *)notification completion:(void (^)(BOOL finished))completion;

@end
