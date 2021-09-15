//
//  WPKeychainManager.h
//  MyChart
//
//  Created by Ben Drda on 4/1/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 400698 05/2016 Removing migrate keychain code as that was released in 3.7.2 and we are now on 4.5

#import <Foundation/Foundation.h>
#import "WPLoginToken.h"

/*!
 @brief keychain manager finds all the keychain items stored in the group, creates WPKeychainItems for them, and stores them in an accessible array
 */
@interface WPKeychainManager : NSObject

/*! 
 * @brief the keychain items associated with the given group
 */
@property (nonatomic, strong) NSArray *keychainItems;

/*! 
 * @brief removes the list of keychain items
 */
+ (void)removeAllEntries;

@end


