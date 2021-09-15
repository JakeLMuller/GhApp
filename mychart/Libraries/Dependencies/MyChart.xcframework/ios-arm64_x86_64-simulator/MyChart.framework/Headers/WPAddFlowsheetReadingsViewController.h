//
//  WPAddFlowsheetReadingsViewController.h
//  iChart
//
//  Created by Matthew Flatau on 7/29/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPTableViewController.h"
#import "WPLongTextEntryTableViewCell.h"
#import "WPEditableFlowsheetTableViewCell.h"
#import "WPCustomListViewController.h"
#import "WPCustomSelectionTableViewCell.h"

@class WPFlowsheet;
@class WPDatePickerTableViewCell;

extern NSString* const episodeIdKey;

@interface WPAddFlowsheetReadingsViewController : WPTableViewController <UITextFieldDelegate, WPLongTextEntryTableViewCellDelegate,
    WPEditableFlowsheetTableViewCellDelegate, WPCustomListViewDelegate>

@property (nonatomic, strong) IBOutlet UIView *headerView;
@property (nonatomic, strong) IBOutlet UILabel *headerLabel;

@property (nonatomic, strong) IBOutlet WPCustomSelectionTableViewCell *dateCell;
@property (nonatomic, strong) IBOutlet WPCustomSelectionTableViewCell *deleteCell;
@property (nonatomic, strong) IBOutlet UILabel *deleteLabel;
@property (nonatomic, strong) IBOutlet UIButton *nextButton;
@property (nonatomic, strong) IBOutlet UIButton *previousButton;

@property (nonatomic, strong) WPDatePickerTableViewCell *datePickerCell;
@property (nonatomic, assign) BOOL showsDeleteButton;

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet;
- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet andDate:(NSDate *)date; //Only currently used for dayentry
- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet readings:(NSDictionary *)readings;

- (instancetype)initWithEpisodeID:(NSString *)episodeID;    //Used for flowsheet deep linking

- (IBAction)nextPressed:(id)sender;
- (IBAction)previousPressed:(id)sender;
@end
#endif
