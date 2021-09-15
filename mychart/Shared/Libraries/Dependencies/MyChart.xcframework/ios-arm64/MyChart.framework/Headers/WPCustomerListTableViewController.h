//
//  WPCustomerListTableViewController.h
//  iChart
//
//  Created by Chetan Satish on 1/3/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"

#import "WPCustomerSearchTableViewController.h"

@interface WPCustomerListTableViewController : WPTableViewController <UITableViewDelegate, UITableViewDataSource, WPImageDownloaderDelegate>

@property (nonatomic, strong) NSArray*								customerList;
@property (nonatomic, strong) NSString*                             phonebookURLString;
@property (nonatomic, strong) NSString*								titleString;

//weak pointer to parent
@property (nonatomic, weak) WPCustomerSearchTableViewController*	parentController;

@property (nonatomic, weak) IBOutlet UIImageView *					background;

@end
