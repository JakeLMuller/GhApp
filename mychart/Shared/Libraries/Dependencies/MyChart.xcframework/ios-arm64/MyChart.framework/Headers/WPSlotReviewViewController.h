//
//  WPSlotReviewViewController.h
//  MyChart
//
//  Created by Matt Richardson on 3/8/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPViewController.h"

@class WPSlot;

@interface WPSlotReviewViewController: WPViewController

- (instancetype)initWithSlot:(WPSlot*)aSlot andRFVIndex:(NSString*)aRFVIndex providerDepartments:(NSArray*)aProviderDepartments;

@end
