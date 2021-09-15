//
//  WPHealthAdvisoriesMarkCompleteViewController.h
//  MyChart
//
//  Created by Jake Silver on 5/22/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPUtil_UI.h"
#import "WPTableViewController.h"
#import "WPCardView.h"

@class WPHealthAdvisory;

@interface WPHealthAdvisoriesMarkCompleteViewController : WPTableViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak, nullable) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak, nullable) IBOutlet UILabel *statusLabel;
@property (nonatomic, weak, nullable) IBOutlet UILabel *detailLabel;
@property (nonatomic, weak, nullable) IBOutlet UILabel *dateCompletedLabel;
@property (nonatomic, weak, nullable) IBOutlet UIDatePicker *datePicker;
@property (nonatomic) NSObject<PEHealthAdvisoryCompletionDelegate> *_Nullable completionDelegate;

- (nonnull instancetype)initWithHealthAdvisory:(nonnull WPHealthAdvisory *)advisory;
- (nonnull instancetype)initWithTopicID:(nullable NSString *)topicID named:(nullable NSString *)name withStatusText:(nullable NSString *)statusText andDetailText:(nullable NSString *)detailText;

- (IBAction)acceptPressed:(nonnull id)sender;
@end
