//
//  WPFlowsheetDatePickerViewController.h
//  iChart
//
//  Created by Matthew Flatau on 9/18/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPPopupDatePickerViewController.h"

@class WPFlowsheet;

@interface WPFlowsheetDatePickerViewController : WPPopupDatePickerViewController

- (instancetype)initWithFlowsheet:(WPFlowsheet *)flowsheet;

@end
#endif
