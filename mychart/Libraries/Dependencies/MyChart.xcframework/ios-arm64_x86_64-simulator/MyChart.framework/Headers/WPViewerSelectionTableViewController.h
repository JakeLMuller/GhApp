//
//  WPViewerSelectionTableViewController.h
//  MyChart
//
//  Created by Alex J White on 1/31/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
//  NOTES: This controller is not solely responsible for retrieving viewer information. That is the responsibility of the view controller that calls this. This controller just provides the ability to select the viewers.
//

#import "WPTableViewController.h"
#import "WPGetViewersProtocol.h"

@protocol WPGetSelectedViewersDelegate <NSObject>
@required

- (void) handleSelectedViewersArray:(NSArray*)viewers;

@end

@interface WPViewerSelectionTableViewController : WPPopupViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic,weak) id<WPGetSelectedViewersDelegate> delegate;


- (id) initWithViewers:(NSArray *)viewers selectedViewers:(NSArray *)selectedViewers confidentiality:(WPConfidentialitySetting)confidentialitySetting;


@end
