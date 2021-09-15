//
//  WPPopupController.h
//  MyChart
//
//  Created by Yechan Hong on 1/2/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//
//  *yhong   1/2015 342777 A popup viewcontroller created to provide a standard interface to have popup event controllers
//  *mflatau 08/2015 382261 Restructuring to use a tableview for buttons and autolayout

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WPViewController.h"
#import "WPPopupInterfaceButton.h"
#import "WPPopupButtonsTableView.h"


@interface WPPopupViewController : WPViewController <UIViewControllerTransitioningDelegate>

- (instancetype)initWithTitle:(NSString *)popupString cancelLabel:(NSString *)cancelString;
- (instancetype)initWithAttributedTitle:(NSAttributedString *)popupString cancelLabel:(NSString *)cancelString;

- (void)hideAnimated:(BOOL)animated;
- (IBAction)hide:(id)sender;

- (void)appendButton:(WPPopupInterfaceButton *)button;

- (void)addButtonWithName:(NSString *)name target:(id)target action:(SEL)action;                        //Defaults in a normal button
- (void)addButtonWithName:(NSString *)name image:(UIImage *)image target:(id)target action:(SEL)action; //Defaults in a normal button
- (void)addButtonWithType:(WPPopupButtonType)type name:(NSString *)name target:(id)target action:(SEL)action;
- (void)addButtonWithType:(WPPopupButtonType)type name:(NSString *)name image:(UIImage *)image target:(id)target action:(SEL)action;

- (void)addContentViewToPopup:(UIView *)content;
- (void)addContentViewToPopupWithTitle:(UIView *)content;
- (void)setContentLabel:(NSString *)content;
- (void)setBackgroundOpacity:(float)opacity;

@property (nonatomic, weak) IBOutlet UIButton *backgroundButton;
@property (nonatomic, weak) IBOutlet WPPopupButtonsTableView *buttonTableView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *buttonTableViewHeightConstraint;
@property (nonatomic, weak) IBOutlet UIView *popupContainer;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentViewToButtonsPaddingConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentViewTopConstraint;
@property (nonatomic, weak) NSLayoutConstraint *contentTableViewHeightConstraint;

//The button in the buttons tableview that is the last button that should be visible when the keyboard shows. Default is the first button.
@property (weak, nonatomic) UIView *buttonToScrollForKeyboard;

//Helper method for tableviews, creates a table view and puts it in the contents
- (UITableView *)getContentTableViewWithManager:(id <UITableViewDataSource, UITableViewDelegate>)manager;
- (CGFloat)maxHeightForContentTableViewWithHeight:(CGFloat)height;

- (void)keyboardWillShow:(NSNotification *)notification;
- (void)keyboardWillHide:(NSNotification *)notification;

@end
