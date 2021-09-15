//
//  WPFlowsheetRowDetailViewController.h
//  iChart
//
//  Created by Matthew Flatau on 8/6/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPTableViewController.h"
#import "EFGraphView.h"
#import "WPSegmentedDateIntervalControl.h"

@class WPFlowsheet;
@class WPFlowsheetRow;
@class WPFlowsheetReadingsLoadCount;

@interface WPFlowsheetRowDetailViewController : WPTableViewController <WPSegmentedDateIntervalControlDelegate>

@property (nonatomic, weak) IBOutlet WPSegmentedDateIntervalControl *dateIntervalControl;
@property (weak, nonatomic) IBOutlet EFGraphView *graphView;

@property (weak, nonatomic) IBOutlet UINavigationBar *dateIntervalBackgroundView;

@property (nonatomic, weak) IBOutlet NSLayoutConstraint *headerYConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *tableYConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *graphBottomToParentConstraint;

@property (weak, nonatomic) IBOutlet UIView *lastReadingContainer;
@property (weak, nonatomic) IBOutlet UILabel *lastReadingLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *lastReadingCenterXConstraint;
@property (weak, nonatomic) IBOutlet UIView *lastReadingLine;

@property (nonatomic, strong) WPFlowsheetReadingsLoadCount *numberOfReadingsRequests;

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet row:(WPFlowsheetRow *)row;

- (IBAction)graphTapped:(id)sender;
- (IBAction)addReadingPressed:(id)sender;

@end
#endif
