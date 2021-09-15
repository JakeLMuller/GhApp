//
//  WPCustomerSelectionTableViewCell.h
//  iChart
//
//  Created by Epic on 4/13/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish 04/14 307093 Accessibility updates
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

static CGFloat const WPCustomerCellHeight = 125;
static CGFloat const WPSingleLineCellHeight = 50;

/** 
 * A table view cell that is used for the customer selection view
 *
 */
@interface WPCustomerSelectionTableViewCell : WPCustomSelectionTableViewCell 
{
	UIImageView* mainImage;					/** The imageview holding the image we wish to show */
	UILabel* mychartNameTextLabel;			/** The text directly beneath the image */
	UILabel* customerNameTextLabel;			/** The text that show while the image get loaded */
	
	UIActivityIndicatorView* activityIndicator;
}

@property (nonatomic,strong) UILabel* customerNameTextLabel;
@property (nonatomic,strong) UILabel* mychartNameTextLabel;
@property (nonatomic,strong) UIImage* image;

/**
 * Default initializer
 *
 */
- (id)initWithReuseIdentifier:(NSString *)reuseIdentifier;

- (void)showLoadingView:(BOOL)loading;

- (void)setAccessibilityText: (NSString *)string;

@end
