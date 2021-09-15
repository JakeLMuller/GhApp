//
//  WPCustomerSelectionTableViewController.h
//  iChart
//
//  Created by Epic on 4/13/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomerSearchTableViewController.h"
#import "WPTableViewController.h"

@protocol WPMyCustomersDelegate <NSObject>

@required
- (void)selectCustomerLogin:(WPServer *)customer;
- (void)addCustomerLogin:(WPServer *)customer;
- (void)removeCustomerLogin:(WPServer *)customer;
- (void)moveCustomerLoginAtIndex:(NSInteger)fromIndex toIndex:(NSInteger)toIndex;

@end

@class WPCustomerBackgroundViewController;
@class WPCenteredMessageTextView;

/**
 * Show my providers (selected providers)
 * Provide option to add/edit/remove providers
 *
 */
@interface WPCustomerSelectionTableViewController : WPTableViewController <WPCustomerSearchDelegate, WPImageDownloaderDelegate,UIViewControllerTransitioningDelegate>

@property (nonatomic, weak) id <WPMyCustomersDelegate> delegate;
@property (nonatomic, strong) NSMutableArray* myCustomersList;

//Weak IBOutlets
@property (nonatomic, weak) IBOutlet UIImageView *background;

@end
