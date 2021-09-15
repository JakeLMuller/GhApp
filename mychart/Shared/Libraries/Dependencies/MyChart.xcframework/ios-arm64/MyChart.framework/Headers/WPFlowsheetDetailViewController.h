//
//  WPFlowsheetDetailViewController.h
//  iChart
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPTableViewController.h"
#import "WPSegmentedDateIntervalControl.h"
#import "WPHealthLinksActivityButton.h"

@class WPFlowsheet;
@class WPFlowsheetRow;

@interface WPFlowsheetDetailViewController : WPTableViewController <WPSegmentedDateIntervalControlDelegate>

@property (nonatomic, weak) IBOutlet WPSegmentedDateIntervalControl *dateIntervalControl;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *headerYConstraint;
@property (weak, nonatomic) IBOutlet WPHealthLinksActivityButton *healthConnectionsButton;
@property (nonatomic, weak) IBOutlet UINavigationBar *dateIntervalBackgroundView;
@property (nonatomic, strong) IBOutlet UITableViewCell *headerCell;

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet;

- (IBAction)addReadingPressed:(id)sender;
- (IBAction)healthLinksPressed:(id)sender;
- (void) setIsHome:(BOOL)isHome;

@end
#endif
