//
//  WPViewController.h
//  iChart
//
//  Created by Epic on 6/17/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.

#import <UIKit/UIKit.h>
#import "WPSpringboardInfo.h"
#import "WPSpringboardManager.h"
#import "WPCenteredMessageTextView.h"

@class WPNavigationTitleView;

/**
 *\brief Root epic view controller
 *
 * All Epic view controllers subclass this view controler
 */
@interface WPViewController : UIViewController <WPSpringboardManager> {
    BOOL _hidePatientPhoto;
}

@property (nonatomic, assign) BOOL hidePatientPhoto;
@property (nonatomic, strong, nullable) WPCenteredMessageTextView *messageOverlay;

+(nullable WPSpringboardInfo *)springboardItem;

- (void) showErrorAlert;
- (void) showErrorAlertAndClose;
- (void) showLanguageDisallowedAlert;
- (void)showAlertWithTitle:(nonnull NSString *) title message:(nonnull NSString *)message cancelButtonTitle:(nonnull NSString *)cancelButtonTitle shouldPopController:(BOOL)shouldPop;

//Show various message on the screen
//The messages appear centered to the frame on top and hiding all subviews.
- (void)showMessage:(nullable NSString *)message;
- (void)showMessage:(nullable NSString *)message withAccessibilityNotification:(BOOL)postAccessibilityNotification;
- (void)showMessageGray:(nullable NSString *)message;
- (void)showLoadingErrorMessage;
- (void)showLoadingErrorMessage:(nullable NSString *)message;
- (void)showLoadingMessage;
- (void)showLoadingMessage:(nullable NSString *)message;
- (void)showLoadingMessageGray;
- (void)showLoadingMessageGray:(nullable NSString *)message;
- (void)showLoadingMessageGrayWithAccess:(BOOL)postAccessibilityNotification;

//hides the message
- (void)hideMessage;

//rotates the device to the specified orientation
- (void)willRotateToLandscape:(BOOL)isLandscape;

- (void)showImageOnTheRight;

@property (nonatomic, strong, nullable) WPNavigationTitleView *titleView;

@end
