//
//  WPPharmacyDeliveryMethodsViewController.h
//  iChart
//
//  Created by Jesse Dumke on 8/31/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPPopupViewController.h"
#import "WPPharmacyDeliveryMethod.h"

@protocol WPMethodsViewDelegate <NSObject>
@required
- (void) selectedMethod:(WPPharmacyDeliveryMethod *)method;
@end

@interface WPPharmacyDeliveryMethodViewController : WPPopupViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSMutableArray *methods;
@property (nonatomic, strong) WPPharmacyDeliveryMethod *selectedMethod;
@property (nonatomic, weak) id <WPMethodsViewDelegate>	delegate;

- (instancetype)initWithMethods:(NSMutableArray *)methodArray selectedMethod:(WPPharmacyDeliveryMethod *)method;
- (void)setAddressFromArray:(NSMutableArray *)addressLines;

@end
