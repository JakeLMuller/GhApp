//
//  UIView+WP.h
//  iChart
//
//  Created by Matthew Flatau on 7/30/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (WP)

- (NSArray *)addConstraintsWithVisualFormat:(NSString *)format
                                    options:(NSLayoutFormatOptions)options
                                    metrics:(NSDictionary *)metrics
                                      views:(NSDictionary *)views;

- (NSArray *)addConstraintsWithVisualFormatWithHighPriority:(NSString *)format
                                                    options:(NSLayoutFormatOptions)options
                                                    metrics:(NSDictionary *)metrics
                                                      views:(NSDictionary *)views;


- (NSLayoutConstraint *)addConstraintWithItem:(id)item1
                                    attribute:(NSLayoutAttribute)attribute1
                                    relatedBy:(NSLayoutRelation)relation
                                       toItem:(id)item2
                                    attribute:(NSLayoutAttribute)attribute2
                                   multiplier:(CGFloat)multiplier
                                     constant:(CGFloat)constant;

- (NSLayoutConstraint *)addConstraintWithItem:(id)item1
                                    attribute:(NSLayoutAttribute)attribute1
                                    relatedBy:(NSLayoutRelation)relation
                                       toItem:(id)item2
                                    attribute:(NSLayoutAttribute)attribute2
                                   multiplier:(CGFloat)multiplier
                                     constant:(CGFloat)constant
                                     priority:(CGFloat)priority;

- (NSLayoutConstraint *)addConstraintWithItem:(id)item
                                    attribute:(NSLayoutAttribute)attribute
                                    equalToConstant:(CGFloat)constant;

+ (BOOL)isInterfaceRightToLeft;
- (UIEdgeInsets)getSafeAreaInsets;

// Convenience methods for adding basic autolayout constraints programmatically
- (void)addAndFillWithView:(UIView *)view; // view fills self entirely
- (void)addViewWithMargins:(UIView *)view margins:(int)margin; // view fills self but with equal padding (margin) on each side
- (void)addViewWithInsets:(UIView *)view top:(int)top trailing:(int)trailing bottom:(int)bottom leading:(int)leading; // view added to self with specified spacing on all sides

@end
