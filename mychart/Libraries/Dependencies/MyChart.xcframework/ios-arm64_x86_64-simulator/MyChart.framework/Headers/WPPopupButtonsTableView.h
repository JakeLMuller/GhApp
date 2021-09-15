//
//  WPPopupButtonsTableView.h
//  MyChart
//
//  Created by Matthew Flatau on 2/5/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPPopupButtonsTableView : UITableView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSMutableArray *buttons;
- (CGFloat)heightForButtonTableView;

@end
