//
//  WPEditableFlowsheetTableViewCell.h
//  iChart
//
//  Created by Matthew Flatau on 7/29/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <UIKit/UIKit.h>
#import "WPEditTableViewCellProtocol.h"
#import "WPTextField.h"
#import "WPCustomSelectionTableViewCell.h"

@class WPEditableFlowsheetTableViewCell;

@protocol WPEditableFlowsheetTableViewCellDelegate <NSObject>

- (void)didStartEditing:(WPEditableFlowsheetTableViewCell *)cell;
- (void)didEditText:(WPEditableFlowsheetTableViewCell *)cell;

@optional
- (BOOL)shouldBeginEditing:(WPEditableFlowsheetTableViewCell *)cell;
- (BOOL)shouldEndEditing:(WPEditableFlowsheetTableViewCell *)cell;
- (void)didEndEditing:(WPEditableFlowsheetTableViewCell *)cell;
- (UIView *)keyboardAccessoryView;

@end

typedef NS_ENUM(NSInteger, EditableCellType) {
    kEditableCellTypeOneValue,
    kEditableCellTypeTwoValue,
} ;

extern NSString * const kWPEditableFlowsheetTableViewCellReuseIdentifier;

@interface WPEditableFlowsheetTableViewCell : WPCustomSelectionTableViewCell <UITextFieldDelegate, WPEditTableViewCellProtocol>

@property (weak, nonatomic) IBOutlet UIView *initialRowView;
@property (nonatomic, weak) IBOutlet WPTextField *valueTextField;
@property (nonatomic, weak) IBOutlet WPTextField *secondValueTextField;
@property (nonatomic, assign) EditableCellType cellType;
@property (nonatomic, assign) BOOL showInfoButton;

//Delegate and helper properties
@property (nonatomic, weak) UIViewController <WPEditableFlowsheetTableViewCellDelegate> *delegate;
@property (nonatomic, weak) id objectTag;
@property (nonatomic) NSString *instructions;
@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, weak) WPTextField *nextTextFieldToSelect;

- (void)setWarningText:(NSString *)text;

@end
#endif
