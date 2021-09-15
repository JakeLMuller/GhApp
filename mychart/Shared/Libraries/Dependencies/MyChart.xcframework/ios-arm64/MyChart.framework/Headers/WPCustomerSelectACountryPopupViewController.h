//
//  WPCustomerSelectACountryPopupViewController.h
//  MyChart
//
//  Created by Yechan Hong on 1/27/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "WPPopupViewController.h"

//Select a country delegate protocol
@protocol WPCustomerSelectACountryPopupViewControllerDelegate <NSObject>
@required
- (void)selectedCountry:(NSString *)countryCode;
@end


@interface WPCustomerSelectACountryPopupViewController : WPPopupViewController <UICollectionViewDataSource,UICollectionViewDelegate>

@property (nonatomic, weak) id<WPCustomerSelectACountryPopupViewControllerDelegate> delegate;

- (instancetype)initWithCountryList:(NSMutableArray *)countryList selectedCountry:(NSString *)selectedCountry;

@end
