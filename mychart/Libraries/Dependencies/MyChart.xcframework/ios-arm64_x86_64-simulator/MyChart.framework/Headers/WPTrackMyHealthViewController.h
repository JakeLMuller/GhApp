//
//  WPTrackMyHealthViewController.h
//  iChart
//
//  Created by Matthew Flatau on 7/24/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPTableViewController.h"
#import "WPHealthLinksActivityButton.h"

/*!
 @brief The main controller for Track My Health
 @author Matt Flatau
 */
@interface WPTrackMyHealthViewController : WPTableViewController

/*!
 @brief The button used to display the Health Links
 */
@property (nonatomic, weak) IBOutlet WPHealthLinksActivityButton *healthLinksButton;

- (IBAction)healthLinksPressed:(id)sender;

@end
#endif
