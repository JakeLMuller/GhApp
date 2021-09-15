//
//  WPGraphTableViewCell.h
//  iChart
//
//  Created by Matthew Flatau on 7/30/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <UIKit/UIKit.h>
#import "EFGraphView.h"
#import "WPFlowsheetRow.h"
#import "WPCustomSelectionTableViewCell.h"

typedef NS_ENUM(NSInteger, WPGraphTableViewCellStyle) {
    kWPGraphTableViewCellStyleDefault,
    kWPGraphTableViewCellStyleSubtitle
};

@protocol GraphHelpDelegate <NSObject>
-(void)graphHelpTapped:(WPFlowsheetRow*)row;
@end

extern NSString * const kWPGraphTableViewCellReuseIdentifier;

@interface WPGraphTableViewCell : WPCustomSelectionTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *readingLabel;
@property (weak, nonatomic) IBOutlet UILabel *unitsLabel;
@property (weak, nonatomic) IBOutlet EFGraphView *graphView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *readingLabelToTitleLabelWidthConstraint;

@property (assign, nonatomic) WPGraphTableViewCellStyle graphStyle;
@property (nonatomic, weak) id <GraphHelpDelegate> graphHelpDelegate;
@property (nonatomic, weak) id <GraphTrendSwitchDelegate> trendSwitchDelegate;

- (void)setViewToRow:(WPFlowsheetRow *)row showBarsAsLine:(BOOL)barsAsLine canAddReadings:(BOOL)canAddReadings;

- (void)showMessageForGraph:(NSString *)message;
- (void)showGraph;
@end
#endif
