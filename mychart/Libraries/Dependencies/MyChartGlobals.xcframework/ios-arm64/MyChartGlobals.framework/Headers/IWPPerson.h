//
//  IWPPerson.h
//  MyChart
//
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//
#import <UIKit/UIKit.h>
/**
 Represents a person, which could be either a patient the user has access to or the user themselves.
 */
@protocol IWPPerson <NSObject>

/**
 The person's name.
 */
@property (nonnull, nonatomic, strong, readonly) NSString *name;

/**
 The person's account ID (WPR ID).
 */
@property (nonnull, nonatomic, strong, readonly) NSString *accountID;

/**
 Gets the person's color.  If a color hasn't been explicitly chosen for this person, a default color will be returned.

 @return The color chosen for this person, or a default color as a backup.
 */
- (nonnull UIColor *)getColor;

/**
 Gets the person's text color.  If a text color hasn't been explicitly chosen for this person, a default text color will be returned.  The Text Color may be different than getColor.  This color is be better for Accessibility text.
 * @return The text color chosen for this person, or a default text color as a backup.
 */
- (nonnull UIColor *)getTextColor;

/**
 Gets the person's nickname. If a nickname hasn't been explicitly chosen for this person, the person's name will be returned.

 @return The nickname chosen for this person, or their name as a fallback.
 */
- (nullable NSString *)getNickname;

/**
 Gets the person's photo. If a photo hasn't been explicitly set for this person and another photo isn't already on file, conditionally, a fallback image of the person's first initial will be returned. The color of the fallback image will depend on the person's color.

 @param useFallback a boolean indicating whether or not a fallback image should be returned if the person doesn't have a photo
 @return The photo for this person, or, depending on parameters, a fallback image with this person's first initial.
 */
- (nullable UIImage *)getPhotoUsingFallback:(BOOL)useFallback;

@end
