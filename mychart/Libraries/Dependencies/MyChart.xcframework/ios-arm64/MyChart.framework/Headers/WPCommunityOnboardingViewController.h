//
//  CommunityOnboardingViewController.h
//  MyChart
//
//  Created by Shawn Zhao on 9/21/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
//  View controller for the H2G feature introduction activity
//
#import "WPViewController.h"
#import "WPWebViewController.h"

@protocol WPCommunityOnboardingViewDelegate <NSObject>
@required
- (void) dismissViewController; // implement this in case you want to dismiss multiple presented views
@end

@interface WPCommunityOnboardingViewController : WPViewController<UICollectionViewDataSource>

@property (nonatomic, weak) id <WPCommunityOnboardingViewDelegate> delegate;
-(instancetype)initWith:(NSString*)title subtitle:(NSString*)subtitleText presentingStyle:(WPViewPresentationStyle) presentationStyle;

@end
