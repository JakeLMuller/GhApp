//
//  WPSpringboardManager.h
//  iChart
//
//  Created by Epic on 3/9/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish 07/14 322012 Post login extensibility

#import <Foundation/Foundation.h>

@class WPSpringboardInfo;

/**
 * This protocol is required for all View Controllers that wish to be added
 * to WPPatientTableViewController. It attempts to mimic the "navigationItem"
 * style interface.
 */
@protocol WPSpringboardManager <NSObject>
	
@required

/**
 * Get the springboard item for the view controller
 *
 * @return the springboard item - must not be nil
 */
+(WPSpringboardInfo *)springboardItem;

@end
