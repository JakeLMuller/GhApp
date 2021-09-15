//
//  WPPharmaciesViewController.h
//  iChart
//
//  Created by Chetan Satish on 6/20/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPPopupViewController.h"
#import "WPPharmacy.h"

@protocol WPPharmaciesViewDelegate <NSObject>
@required
- (void) selectedPharmacy:(NSInteger)pharmacyIndex shouldAddFreeTextPharmacy:(BOOL)addPharmacy;
@end

@interface WPPharmaciesViewController : WPPopupViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

@property (nonatomic, strong) NSMutableArray	*pharmacies;
@property (nonatomic, assign) NSInteger	selectedPharmacy;
@property (nonatomic, weak) id <WPPharmaciesViewDelegate>	delegate;
@property (nonatomic, assign) BOOL allowFreeTextPharmacy;


- (instancetype)initWithPharmacies:(NSMutableArray *)pharmacyArray andSelectedIndex:(NSInteger)index;

@end
