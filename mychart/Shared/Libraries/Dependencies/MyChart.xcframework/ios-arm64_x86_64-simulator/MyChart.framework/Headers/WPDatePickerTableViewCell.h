//
//  WPDatePickerTableViewCell.h
//  iChart
//
//  Created by Matthew Flatau on 7/29/14.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

extern const CGFloat DATE_PICKER_CELL_HEIGHT;

@interface WPDatePickerTableViewCell : UITableViewCell

@property (nonatomic, weak) UIDatePicker *datePicker;

- (id)initWithReuseIdentifier:(NSString *)reuseIdentifier target:(id)target andSelector:(SEL)selector;

@end
