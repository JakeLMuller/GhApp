//
//  WPUtil_Animations.h
//  MyChart
//
//  Created by Matthew Flatau on 2/12/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPUtil_Animations : NSObject

+ (void)animateCardsFromBottomForTableView:(UITableView *)tableView;
+ (void)animateCellsFromRightForTableView:(UITableView *)tableView;
+ (void)animateViews:(NSArray *)views withTransform:(CGAffineTransform)transform duration:(CGFloat)duration delay:(CGFloat) delay;
+ (void)bubbleAnimateCollectionView:(UICollectionView *)collectionView;

/*
 * @brief Shakes a view and makes device vibrate
 */
+ (void)jitterView:(UIView *)view;

/*
 * @brief Adds the paralax effect to a view
 */
+ (void)addParallaxEffectToView:(UIView *)view;
+ (void)addParallaxEffectToView:(UIView *)view withDisplacement:(CGFloat)displacement;


+ (UIViewAnimationOptions)animationOptionForAnimationCurve:(UIViewAnimationCurve)animationCurve;
@end
