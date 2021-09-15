//
//  WPCustomListViewController.h
//  iChart
//
//  Created by Matthew Flatau on 8/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPTableViewController.h"

@class WPFlowsheetRow;
@class WPCustomListOption;

@protocol WPCustomListViewDelegate <NSObject>
- (void) selectedListValue:(WPCustomListOption *)listValue forRowID:(NSString *)rowID;
- (void) didFinishSelecting;
@end

@interface WPCustomListViewController : WPTableViewController

- (id)initWithRow:(WPFlowsheetRow *)row selectedListValue:(WPCustomListOption *)value andDelegate:(id<WPCustomListViewDelegate>)delegate;

@property (nonatomic, weak) IBOutlet UIView *headerView;
@property (nonatomic, weak) IBOutlet UILabel *headerLabel;
@property (nonatomic, strong) IBOutlet UITableViewCell *clearReadingCell;
@property (nonatomic, weak) id <WPCustomListViewDelegate> delegate;

@end
#endif
