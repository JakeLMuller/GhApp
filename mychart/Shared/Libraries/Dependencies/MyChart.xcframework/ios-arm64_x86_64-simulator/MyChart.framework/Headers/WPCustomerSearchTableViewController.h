//
//  WPCustomerSearchTableViewController.h
//  iChart
//
//  Created by Chetan Satish on 11/18/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *yhong   12/2014 342777 Added phonebook handling for internation countries

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#import "WPTableViewController.h"
#import "WPImageDownloader.h"
#import "WPCustomerSelectACountryPopupViewController.h"

@class WPServer;

//Customer search delegate protocol
@protocol WPCustomerSearchDelegate <NSObject>
@required
- (void) addCustomer:(WPServer *)customer fromPhonebookURLString:(NSString *)phonebookURLString;
- (void) hideCustomerSearchView:(BOOL)animated;
@end

/*
 * Customer search page
 */
@interface WPCustomerSearchTableViewController : WPTableViewController <UISearchBarDelegate, CLLocationManagerDelegate,
UIScrollViewDelegate, WPImageDownloaderDelegate, WPCustomerSelectACountryPopupViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *customerList;		//Keeping customer list public
@property (nonatomic, weak) id <WPCustomerSearchDelegate> delegate;
@property (nonatomic) BOOL showWelcomeScreen;

@property (nonatomic, weak) IBOutlet UIBarButtonItem *cancelButton;
@property (nonatomic, weak) IBOutlet UINavigationItem *subNavItem;
@property (nonatomic, weak) IBOutlet UILabel *lblMainHeading;
@property (nonatomic, weak) IBOutlet UILabel *lblSubHeading;
@property (nonatomic, weak) IBOutlet UINavigationBar *searchNavBar;
@property (weak, nonatomic) IBOutlet UIScrollView *noResultsScrollView;
@property (weak, nonatomic) IBOutlet UIImageView *noResultsIcon;
@property (weak, nonatomic) IBOutlet UILabel *noResultsLabel;
@property (weak, nonatomic) IBOutlet UILabel *noResultsDescLabel1;
@property (weak, nonatomic) IBOutlet UILabel *noResultsDescLabel2;

//Strong IBOutlets
@property (nonatomic, strong) IBOutlet UIView *navTitleView;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *locationFlagButton;
@property (nonatomic, strong) IBOutlet UISearchBar *customerSearchBar;
@property (nonatomic, strong) IBOutlet UIButton *flagIcon;
@property (nonatomic, strong) IBOutlet UIActivityIndicatorView *activityIndicator;


- (IBAction)didPressCancelButton:(id)sender;

@end

