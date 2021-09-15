//
//  WPShareViewController.h
//  MyChart
//
//  Created by David Schanker on 12/24/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

@protocol WPShareDelegate;

@interface WPShareViewController : WPViewController

/// Displays a standard dialog to share items
/// @param itemsToShare the items to be shared
/// @param presenter the presenter that is displaying the share dialog
/// @param sourceView the source view to anchor the dialog on larger screens
/// @param delegate callback delegate
+ (void)displayShareDialogWithItems:(NSArray *)itemsToShare inPresenter:(WPViewController *)presenter fromSourceView:(UIView *)sourceView callback:(id <WPShareDelegate>)delegate;


/// Displays a standard dialog to share items
/// @param itemsToShare the items to be shared
/// @param presenter the presenter that is displaying the share dialog
/// @param barButtonItem the bar button item to anchor the dialog on larger screens
/// @param delegate callback delegate
+ (void)displayShareDialogWithItems:(NSArray *)itemsToShare inPresenter:(WPViewController *)presenter fromBarButtonItem:(UIBarButtonItem *)barButtonItem callback:(id <WPShareDelegate>) delegate;

@end

@protocol WPShareDelegate <NSObject>

/**
 * @brief Delegate method that should be implemented to handle when the share dialog gets shown.
 */
- (void) didShowShareDialog;

/**
 * @brief Delegate method that should be implemented to handle the user canceling the share dialog
 */
- (void) didCancelShareDialog;

@end
