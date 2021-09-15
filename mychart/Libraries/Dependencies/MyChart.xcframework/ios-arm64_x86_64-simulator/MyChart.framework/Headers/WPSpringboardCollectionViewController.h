//
//  WPSpringboardCollectionViewController.h
//  MyChart
//
//  Created by Matthew Flatau on 3/8/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPViewController.h"

@interface WPSpringboardCollectionViewController : WPViewController  <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic, strong) NSSet *myChartNowFeatures;

@end
