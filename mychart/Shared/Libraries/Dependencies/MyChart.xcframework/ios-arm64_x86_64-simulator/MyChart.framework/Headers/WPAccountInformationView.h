//
//  WPAccountInformationView.h
//  iChart
//
//  Created by Jesse Dumke on 7/20/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *tgupta  09/2014 329241 Adding support for accessibility

#import <UIKit/UIKit.h>
#import "WPMedicationsDisplayManager.h"

@class WPBillSummary;
@class WPAppointment;

@interface WPAccountInformationView : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *label;

- (void)setViewToBillSummary:(WPBillSummary *)summary;
- (void)setViewToAppointment:(WPAppointment *)appt;
- (void)setViewToMedicationRefill:(WPMedication *)med;

@end
