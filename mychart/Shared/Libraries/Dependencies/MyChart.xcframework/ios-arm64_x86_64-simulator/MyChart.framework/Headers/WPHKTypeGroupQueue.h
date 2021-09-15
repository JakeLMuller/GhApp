//
//  WPHKTypeGroupQueue.h
//  iChart
//
//  Created by Ben Drda on 10/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import "WPHKOrganizationTypeGroup.h"

/*!
 @brief Which groups still need to run/are running as well as the background task ID that they are running on.
 Does not actually execute tasks of the group, more of a holding tank for group info
 @author Ben Drda
 */
@interface WPHKTypeGroupQueue : NSObject

/*!
 @brief The background task id this will run on if we're sent to the background
 */
@property (nonatomic) UIBackgroundTaskIdentifier taskID;

/*!
 @brief Adds a group to the queue
 @param group   the group to add
 */
- (void)queueGroup:(WPHKOrganizationTypeGroup *)group;

/*!
 @brief Takes the frontmost group off the queue
 @return    YES if a group was popped, NO otherwise (no groups to pop)
 */
- (BOOL)popGroup;

/*!
 @return    the number of groups on the queue
 */
- (NSUInteger)count;

/*!
 @return    the next group to be run/the group currently running
 */
- (WPHKOrganizationTypeGroup *)peekGroup;

/*!
 @brief Whether a particular queue contains a group that contains a particular organization
 @param primaryOrgID    the ID of the organization we're interested in
 @return                YES if the queue contains such a group, NO otherwise
 */
- (BOOL)containsOrg:(NSString *)primaryOrgID;

@end
#endif
