//
//  NSLayoutConstraint+WP.h
//  MyChart
//
//  Created by Ben Drda on 2/2/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSLayoutConstraint (WP)

/*!
 * Generates a new layout constraint that's a copy of self with the given multiplier, deactivates self, and activates the new constraint.
 * @param multiplier what to put for the multiplier property of the new layout constraint.
 * @returns the new, activated constraint
 */
- (NSLayoutConstraint *)replaceConstraintWithCopyWithMultiplier:(CGFloat)multiplier;

/*!
 * Generates a new layout constraint that's a copy of self with the given first attribute, deactivates self, and activates the new constraint.
 * @param attribute what to put for the first attribute property of the new layout constraint.
 * @returns the new, activated constraint
 */
- (NSLayoutConstraint *)replaceConstraintWithCopyWithFirstAttribute:(NSLayoutAttribute)attribute;

/*!
 * Generates a new layout constraint that's a copy of self with the given second attribute, deactivates self, and activates the new constraint.
 * @param attribute what to put for the second attribute property of the new layout constraint.
 * @returns the new, activated constraint
 */
- (NSLayoutConstraint *)replaceConstraintWithCopyWithSecondAttribute:(NSLayoutAttribute)attribute;


@end
