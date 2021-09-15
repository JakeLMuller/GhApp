//
//  WPPharmacyTableViewCell.h
//  iChart
//
//  Created by Chetan Satish on 6/20/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

@class WPPharmacy;

static NSString * const kWPPharmacyTableViewCellReuseIdentifier = @"WPPharmacyTableViewCell"; 	//should match the identifier name in the xib file

@interface WPPharmacyTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *pharmacyName;
@property (nonatomic, weak) IBOutlet UILabel *pharmacyAddress;
@property (nonatomic, weak) IBOutlet UILabel *pharmacyHours;

- (void)setViewToPharmacy:(WPPharmacy *)pharmacy;
- (CGFloat)heightForTableViewWidth:(CGFloat)width;

@end
