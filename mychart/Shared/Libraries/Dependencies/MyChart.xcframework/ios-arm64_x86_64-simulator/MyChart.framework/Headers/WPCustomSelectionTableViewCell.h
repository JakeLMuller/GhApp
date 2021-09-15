//
//  WPCustomSelectionTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 2/18/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPCardView.h"

typedef NS_ENUM(NSInteger, kWPCustomSelectionType) {
    kWPCustomSelectionTypeNone = 0, //Also default value
    kWPCustomSelectionTypeTintColor = 1,
    kWPCustomSelectionTypeNoSelection = 2,
};

@interface WPCustomSelectionTableViewCell : UITableViewCell

@property (nonatomic, weak) UIView *selectionView;
@property (nonatomic, weak) IBOutlet WPCardView *cardView;

//Below allows interface builder to show custom selection type and also force it to bw an enum in code
#if TARGET_INTERFACE_BUILDER
@property (nonatomic) IBInspectable NSInteger customSelectionType;
#else
@property (nonatomic) kWPCustomSelectionType customSelectionType;
#endif

@end
