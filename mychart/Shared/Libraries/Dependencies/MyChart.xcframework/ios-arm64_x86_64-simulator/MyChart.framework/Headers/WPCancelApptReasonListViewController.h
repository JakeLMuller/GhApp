//
//  WPCancelApptReasonListViewController.h
//  iChart
//
//  Created by Chetan Satish on 3/30/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPPopupViewController.h"

@protocol WPCancelApptReasonListDelegate <NSObject>
- (void) cancelApptReasonListSelectedReason:(NSInteger)reason;
@end

@interface WPCancelApptReasonListViewController : WPPopupViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSArray *reasons;
@property (nonatomic, strong) NSIndexPath *selectedReason;
@property (nonatomic, weak) id<WPCancelApptReasonListDelegate> delegate;

- (id)initWithReasons:(NSMutableArray *)reasonsArray andSelectedIndex:(NSInteger)index;

@end
