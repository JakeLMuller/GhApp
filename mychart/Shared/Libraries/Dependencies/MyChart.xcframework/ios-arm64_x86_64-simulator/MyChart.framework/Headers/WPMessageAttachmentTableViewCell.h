//
//  WPMessageAttachmentTableViewCell.h
//  iChart
//
//  Created by Chetan Satish on 6/29/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

static const CGFloat WPMessageAttachmentCellHeight = 80;
static const CGFloat WPMessageAttachmentCellImageHeight = 60;
static const CGFloat WPMessageAttachmentCellImageWidth = 60;

@interface WPMessageAttachmentTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UIImageView *thumbnailView;
@property (nonatomic, weak) IBOutlet UITextField *labelField;

@end

