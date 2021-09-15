//
//  WPExternalDataPopupView.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 5/5/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
//  View for a popup that is displayed when the external data icon is tapped. The popup contains information about where the data is received from. It has an imageview displaying the organization logo and a label displaying the organization name.

#import <UIKit/UIKit.h>
#import "WPProviderImageView.h"

@interface WPExternalDataPopupView : UIView

@property (weak, nonatomic) IBOutlet WPProviderImageView *orgIcon;
@property (weak, nonatomic) IBOutlet UILabel             *orgInfo;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint  *orgIconWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint  *orgIconHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint  *orgIconAndNameSpacing;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint  *orgIconLeadingSpaceConstraint;
@property (weak, nonatomic) IBOutlet UIImageView         *orgIconErrorIndicator;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint  *orgIconErrorBottomConstraint;

@end
