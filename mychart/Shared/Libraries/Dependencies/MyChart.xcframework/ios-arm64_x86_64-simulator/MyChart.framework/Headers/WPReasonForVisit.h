//
//  WPReasonForVisit.h
//  iChart
//
//  Created by Chetan Satish on 8/3/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
//
#import "WPCategory.h"


/* 
 * This represents the category value in the WDF table of scheduling options. See wdf-822
 * We supply the index into the table but we need to show the name of the category.
 *
 */
@interface WPReasonForVisit : WPCategory {
	NSInteger index_;
}

@property (nonatomic, assign) NSInteger index;

@end
