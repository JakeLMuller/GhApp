//
//  WPDetailedDateTableViewCell.h
//  iChart
//
//  Created by Epic on 4/7/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 11/2013 291198 Upgrading to iOS 6.1
//  *mflatau 1/2014 282432 added video image view
//  *csatish 03/2014 207093 Remove custom cell separator
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 06/2014 318316 Clean up and adding addAccessibilityHint
//  *mflatau 01/2015 338750 Adjusting indents, using autolayout

#import <UIKit/UIKit.h>

#import "WPUtil_UI.h"
#import "WPCustomSelectionTableViewCell.h"

#define WPDetailedDateTableViewCellStandardIndent 35
#define WPDetailedDateTableViewCellNoIndent 15

#define WPDetailedDateTableViewCellRegularDateWidth 65

/**
 * Custom table view cell designed to look like the table view cell
 * from the "mail" application
 *
 */
@interface WPDetailedDateTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic,strong) UIImageView* attachmentImageView;  /**< Image view used to show "attachments" icon */
@property (nonatomic,strong) UIImageView* unreadImageView;      /**< Image view used to show "new message" icon */
@property (nonatomic, strong) UIImageView* accessoryImageView;  /**< Image view used to show "video visit" or "echeckin" icon on appointments page*/

@property (nonatomic) CGFloat indentOffset;                     /**< Amount to indent the labels */
@property (nonatomic) CGFloat dateTextLabelWidth;               /**< Width of the date text label */

@property (nonatomic,strong) UILabel* dateTextLabel;            /**< Label that holds the date */
@property (nonatomic,strong) NSArray *detailIcons;              /**< Icons that could be shown before the detailed text label */
@property (nonatomic,strong) NSMutableArray *iconImageViews;    /**< ImageViews to hold the detailIcons */

/**
 * Initialize the cell with a given reuse id
 *
 * @param rid the reuse id to use
 */
-(instancetype)initWithReuseIdentifier:(NSString*)rid;

/**
 * Set attachment icon visibility. Note this will reset any accessibility hints
 *
 * @param newvis	YES to show the "new" icon
 * @param attachvis	YES to show the "attachment" icon
 */
- (void)setIconVisibleForNew:(BOOL)newvis attachment:(BOOL)attachvis;

- (void)addAccessibilityHint:(NSString *)hint; //Appends text to the accessibility hint of cell
@end
