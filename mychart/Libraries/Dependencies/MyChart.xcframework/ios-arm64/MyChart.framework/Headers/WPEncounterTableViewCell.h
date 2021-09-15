//
//  WPEncounterTableViewCell.h
//  iChart
//
//  Created by Ben Drda on 4/4/14.
//  Copyright © 2014-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPCardView.h"

@interface WPEncounterTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomConstraint;
@property (nonatomic, weak) IBOutlet UILabel * cellContent;
@property (weak, nonatomic) IBOutlet UIView *seperator;
@property (weak, nonatomic) IBOutlet WPCardView *cardview;
@property (weak, nonatomic) IBOutlet UIImageView *rowImage;


/**
 Sets the cell as an empty information cell style
 /param isEmptyCell if YES, show the gray "no information" type cell. Otherwise, show a regular encounter cell
 */
-(void)setAsEmptyCell:(BOOL)isEmptyCell;


/**
 Sets the encounter cell as a bottom cell. Will add shading and padding.
 /param isBottomCell if YES, adds shading and padding at bottom. If NO, removes shading,padding, and adds a separator
 */
-(void)setAsBottomCell:(BOOL)isBottomCell;


/**
 Sets the encounter row's image
 */
-(void)setCellRowImage:(UIImage*)image withColor:(UIColor*)color;


/**
 Sets the encounter cell as a warning message cell. Will add warning background color.
 /param isWarningMessageCell if YES, adds warning background color. If NO, removes background color
 */
-(void)setAsWarningCell:(BOOL)isWarningCell;

@end
