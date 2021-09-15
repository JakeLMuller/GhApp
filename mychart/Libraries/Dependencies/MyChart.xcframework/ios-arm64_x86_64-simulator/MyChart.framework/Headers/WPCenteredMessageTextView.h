//
//  WPCenteredMessageTextView.h
//  iChart
//
//  Created by Epic on 4/12/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 04/2014 309967 Fixing formatting/spelling
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 09/2015 384452 Cleanup/modernizing

#import <UIKit/UIKit.h>
#import "WPUtil_Strings.h"
#import "WPUtil_UI.h"

typedef NS_ENUM(NSInteger, WPCenteredMessageTextViewStyle) { 
	WPCenteredMessageTextViewStyleClear,
	WPCenteredMessageTextViewStyleGreyedOut,
} ;

/**
 * This is a view that provides a simple gray label with an optional loading spinner
 */
@interface WPCenteredMessageTextView : UIView

@property (nonatomic, strong) UILabel* textLabel;                           /** Text to display */
@property (nonatomic, strong) UIActivityIndicatorView* activityIndicator;   /** Progress indicator */
@property (nonatomic, assign) BOOL textMode;                                /** Set to YES to hide and ignore activity indicator */

- (void) showLoadingErrorMessage;
- (void) showLoadingErrorMessage:(NSString *)message;
- (void) showLoadingMessage:(NSString *)message;
- (void) showMessageWithStyle:(WPCenteredMessageTextViewStyle)style withMessage:(NSString *)message;
- (void) showMessageWithStyle:(WPCenteredMessageTextViewStyle)style withMessage:(NSString *)message isTextMode:(BOOL)textMode;
- (void) showMessageWithStyle:(WPCenteredMessageTextViewStyle)style withMessage:(NSString *)message isTextMode:(BOOL)textMode postAccessibilityNotification:(BOOL)postAccessibilityNotification;
- (void) hide;
- (void) hide:(BOOL)animated;

@end
