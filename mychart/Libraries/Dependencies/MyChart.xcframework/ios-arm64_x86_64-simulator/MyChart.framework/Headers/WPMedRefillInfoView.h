//
//  WPMedRefillInfoView.h
//  iChart
//
//  Created by Jesse Dumke on 10/25/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>

@interface WPMedRefillInfoView : UITableViewCell {

}

@property (nonatomic, weak) IBOutlet UILabel *medName;
@property (nonatomic, weak) IBOutlet UILabel *medCost;
@property (nonatomic, weak) IBOutlet UILabel *refillComment;

@end
