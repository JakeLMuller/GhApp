//
//  WPCampaignsViewController.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/7/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPCampaignViewController.h"

@class WPCampaignsViewController;

/**
 * Delegate to let callers know if campaigns controller was created or not
 */
@protocol WPRequestCampaignsDelegate <NSObject>

/**
 * lets delegate implementers know that the campaign view controller was successfuly created
 * @param campaignsController the campaigns view controller object
 */
- (void)didGetCampaignsController:(nonnull WPCampaignsViewController *)campaignsController;

/**
 * lets delegate implementers know that campaign view controller failed to be created
 * @param error failure error
 */
@optional
- (void)didFailToGetCampaignsControllerWithError:(nonnull NSError *)error;

@end

/**
 * Declares a delegate protocol for callers to implement to be notified of campaigns events.
 */
@protocol WPCampaignsDelegate <NSObject>

/**
 * Delgate method invoked when all child campaign view controllers have been dismissed from the campaigns list.
 */
-(void) didRemoveAllCampaigns;

@end

/**
 * View controller that shows campaigns for a patient
 */
@interface WPCampaignsViewController : WPViewController<IWPCampaignDelegate>

@property(nonatomic,weak,nullable) id<WPCampaignsDelegate> delegate;
@property(nonatomic,weak) UIView * _Nullable parentView;

/*
 * class method for fetching campaigns view controller
 * @param delegate the WPRequestCampaignsDelegate implementer
 */
+ (void)getCampaignsViewControllerWithDelegate:(nonnull id <WPRequestCampaignsDelegate>)delegate;

/**
 * audits any campaigns that are currently in the view for the user. This loops
 * over all child view controllers and asks them to check if they are in view or not.
 * @param view to check visibility within
 */
-(void)auditCampaignsInView:(UIView *_Nonnull)view;

@end
