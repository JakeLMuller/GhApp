//
//  WPAsyncTaskTracker.h
//  iChart
//
//  Created by Ben Drda on 8/8/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 02/2015 354336 Fixing 64-bit errors

#import <Foundation/Foundation.h>

/*!
 @brief Class for tracking multiple asynchronous tasks.
 @author Ben Drda
 */
@interface WPAsyncTaskTracker : NSObject

/*!
 @brief Dictionary available to keep artbitrary data for the completionBlock
 */
@property (nonatomic, strong) NSMutableDictionary *userInfo;

/*!
 @brief Initializes a tracker. After counter decrements, it will call onCompletion.
 @param counter         the number of times we can be decremented
 @param completionBlock the code to call when we have been decremented counter times
 @return                a new WPTracker
 */
- (id)initWithCounter:(NSInteger)counter andCompletionBlock: (void (^)(BOOL, NSDictionary *))completionBlock;
/*!
 @brief Indicates that one of the tasks is complete. onCompletion will be called if that was the last task.
 */
-(void) decrement;
/*!
 @brief Sets the failure flag. When onCompletion is called, its argument will be NO.
 */
-(void) setAsFailed;
/*!
 @return    Whether all associated tasks have finished.
 */
-(BOOL) isFinished;
/*!
 @return    Whether any associated task has failed.
 */
-(BOOL) isFailed;
/*!
 @brief Adds a strong reference to an object. This may be necessary to keep this tracker and the request objects from being collected into garbage.
 @param caller  the caller.
 */
-(void) addCaller: (id) caller;

@end
