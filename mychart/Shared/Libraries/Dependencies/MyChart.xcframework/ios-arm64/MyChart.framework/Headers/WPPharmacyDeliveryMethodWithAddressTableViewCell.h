//
//  WPPharmacyDeliveryMethodWithAddressTableViewCell.h
//  iChart
//
//  Created by Jesse Dumke on 10/22/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

static NSString * const kWPPharmacyDeliveryMethodWithAddressTableViewCellReuseIdentifier = @"WPPharmacyDeliveryMethodWithAddressTableViewCell";

@interface WPPharmacyDeliveryMethodWithAddressTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *methodName;
@property (nonatomic, weak) IBOutlet UILabel *address;

- (CGFloat)heightForTableViewWidth:(CGFloat)width;

@end
