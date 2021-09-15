//
//  WPSessionManager.h
//  MyChart
//
//  Created by Matthew Flatau on 4/19/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 11/2015 389300 Adding functionality from WPApplication

#import <Foundation/Foundation.h>

extern NSString * const WPNotificationForcedLogout;
extern NSString * const WPNotificationPreForcedLogout;

@interface WPSessionManager : NSObject

#pragma mark - Idle timer
/**
 * Sets the idle time out (is given minutes but saves the timeout in seconds)
 */
+ (void)setIdleTimeoutDuration:(NSInteger)durationInMinutes;

/**
 * @brief Starts the device idle timer. This will fire after timeout = device
 *       timeout unlessrefreshed
 */
+ (void)startIdleTimer;

/**
 * @brief Stops the idle timer
 */
+ (void)stopIdleTimer;

/**
 * Reset idle timer fire date to now + idle timeout
 */
+ (void)resetIdleTimer;

#pragma mark - Ticket timer
/**
 * @brief Set the ticket time out (is given minutes but saves the timeout in seconds)
 */
+ (void)setTicketTimeoutDuration:(NSInteger)durationInMinutes;

/**
 * @brief Starts the ticket timer. It executes repeatedly every for the max of
 *        ticketTimeout - 1 minute or ticket timeout / 2. On firing of the timer 
 *        it willrefresh the ticket.
 */
+ (void)startTicketTimer;

/**
 * @brief Sets the ticket timer fire time to be the current timer interval from now.  The ticket timer interval is max(ticket timeout - 1 minute, ticket timeout / 2).
 *
 */
+ (void)resetTicketTimer;

/**
 * @brief Stops the ticket timer
 */
+ (void)stopTicketTimer;

/**
 * @brief Returns true if idle timer is expired
 */
+ (BOOL)isTimeout;

#pragma mark - lifecycle

/**
 * @brief Called when the Watch application enters the foreground
 */

@end
