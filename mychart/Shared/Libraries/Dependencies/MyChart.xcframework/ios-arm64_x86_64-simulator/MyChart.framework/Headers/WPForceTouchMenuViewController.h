//
//  WPForceTouchMenuViewController.h
//  MyChart
//
//  Created by Alex J White on 2/17/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPPopupViewController.h"


@protocol WPForceTouchViewDelegate <NSObject>

@required
/*!
*@brief CGRect given in relation to the main window. Used to position and size the imageView.
*/
- (CGRect)forceTouchMenuOriginRect;
/*!
 *@brief UIImage returned by delegate used to get the image shown in the Force Touch Menu's imageview. Size of the imageview is not defined by this image, it is defined by the CGRect
 */
- (UIImage *)forceTouchedImage;

@end


@interface WPForceTouchMenuViewController : WPPopupViewController <UITableViewDelegate, UITableViewDataSource>

/*!
 * @brief create a force touch menu view controller
 *
 * @param delegate
 * @param menuActions - List of forceTouchMenuItems that are used to get the information for the 
 *                      ForceTouchMenuTableViewCell to act properly. Contains an icon, text and a block of
 *                      code to run when activated.
 */
- (instancetype)initWithDelegate:(id <WPForceTouchViewDelegate>)delegate menuActions:(NSArray *)menuActions;

@end
