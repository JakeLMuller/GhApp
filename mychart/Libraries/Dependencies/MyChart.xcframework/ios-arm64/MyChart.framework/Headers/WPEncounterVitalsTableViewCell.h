//
//  WPEncounterVitalsTableViewCell.h
//  MyChart
//
//  Created by Yash Vaka on 1/25/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCardView.h"

@interface WPEncounterVitalsTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIView *horizontalSeparator;
@property (weak, nonatomic) IBOutlet UILabel *vitalLabel1;
@property (weak, nonatomic) IBOutlet UILabel *vitalLabel2;
@property (weak, nonatomic) IBOutlet UILabel *vitalLabel3;
@property (weak, nonatomic) IBOutlet UILabel *vitalName1;
@property (weak, nonatomic) IBOutlet UILabel *vitalName2;
@property (weak, nonatomic) IBOutlet UILabel *vitalName3;
@property (weak, nonatomic) IBOutlet WPCardView *cardView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomConstraint;
-(void)setAsBottomCell:(BOOL)bottomCell;

@end
