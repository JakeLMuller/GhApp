//
//  WPMedRefillListViewController.h
//  iChart
//
//  Created by Chetan Satish on 6/19/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
// Shows a list of refillable medications for use to select for refill

#import <UIKit/UIKit.h>

#import "WPTableViewController.h"
//
@class WPMedication;

@interface WPMedRefillListViewController : WPTableViewController <UITextFieldDelegate>

@property (nonatomic, weak) IBOutlet UIButton *nextButton;
@property (weak, nonatomic) IBOutlet UITextField *comments;

- (instancetype)initWithMedicationList:(NSArray *)medList;
- (instancetype)initWithMedicationList:(NSArray *)medList andSelectMedication:(WPMedication*)medication;

- (IBAction)cancelButtonPressed: (id)sender;
- (IBAction)nextButtonPressed: (id)sender;
- (void)addCommentButtonPressed: (UIButton *)button;

@end
