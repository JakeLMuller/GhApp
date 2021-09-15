//
//  WPCampaignViewController.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/24/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "IWPImageLoaderDelegate.h"
#import "WPCampaignCard.h"

/**
 declares a protocol for callers to implement to be notified of any events from WPCampaignController
 */
@protocol IWPCampaignDelegate <NSObject>

/**
 * delegate method invoked by WPCampaignController when it wants to be removed from view
 *
 * @param campaignViewController The WPCampaignController instance to be removed
 */
- (void)removeCampaign:(UIViewController *)campaignViewController;

/**
 * delegate method invoked by WPCampaignController to notify parent that a campaign action has
 * been initiated.
 */
- (void)campaignActionInitiated;

@end

/**
 * View controller to display a single campaign
 */
@interface WPCampaignViewController : WPViewController<IWPImageLoaderDelegate>

@property(nonatomic,strong) WPCampaignCard *campaign;
@property(nonatomic,weak) id<IWPCampaignDelegate> delegate;

/**
 * checks if the campaign view controller is currently in view of the user
 * @param view to check visibility within
 */
-(BOOL)isVisibleToUserInView:(UIView *)view;

@end
