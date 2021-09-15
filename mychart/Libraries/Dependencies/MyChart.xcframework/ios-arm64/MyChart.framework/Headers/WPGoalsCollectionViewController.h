//
//  WPGoalsCollectionViewController.h
//  MyChart
//
//  Created by Matthew Flatau on 3/6/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"

@class WPGoalsCollectionViewController;

@protocol WPRequestGoalsDelegate <NSObject>

- (void)didGetGoalsController:(nonnull WPGoalsCollectionViewController *)goalsController;

@optional
- (void)didFailToGetGoalsControllerWithError:(nonnull NSError *)error;

@end

@interface WPGoalsCollectionViewController : WPViewController <UICollectionViewDelegate, UICollectionViewDataSource>

+ (void)getGoalsCollectionViewControllerWithDelegate:(nonnull id <WPRequestGoalsDelegate>)delegate;

@end
