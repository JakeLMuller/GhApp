//
//  WPHealthLinksHeader.h
//  iChart
//
//  Created by Ben Drda on 8/29/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <UIKit/UIKit.h>
#import "WPHKOrganizationMap.h"

/*!
 @brief View Controller for the table header view for the Health Links page.
 @author Ben Drda
 */
@interface WPHealthLinksHeaderViewController : UIViewController
/*!
 @brief The label holding the patient name
 */
@property (nonatomic,weak) IBOutlet UILabel *ptName;
/*!
 @brief The left icon holding the icon for Health
 */
@property (nonatomic,weak) IBOutlet UIImageView *healthIcon;
/*!
 @brief The right icon hodling the icon for MyChart. This icon has its corners rounded.
 */
@property (nonatomic,weak) IBOutlet UIImageView *myChartIcon;
/*!
 @brief The label that says "This Device" under the Health icon.
 */
@property (nonatomic,weak) IBOutlet UILabel *thisDevice;
/*!
 @brief The image for the arrow between the MyChart and Health icons
 */
@property (nonatomic,weak) IBOutlet UIImageView *arrow;

/*!
 @brief Updates the UI based on new server statuses
 @param status the Server Status (Active, Ready, Linked to Other)
 */
- (void)updateStatus: (WPHKServerStatus) status;
@end
#endif
