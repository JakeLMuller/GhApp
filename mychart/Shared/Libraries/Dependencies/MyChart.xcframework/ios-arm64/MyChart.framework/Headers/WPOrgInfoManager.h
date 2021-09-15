//
//  WPOrgInfoManager.h
//  MyChart
//
//  Created by Chetan Satish on 4/18/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WPOrgInfoStatus) {
    kWPOrgInfoStatusSuccess = 1,
    kWPOrgInfoStatusErrorLoading = 2,
    kWPOrgInfoStatusAppVersionTooLow = 3,
    kWPOrgInfoStatusCustomPhonebookErrorLoading = 4,
};

typedef void (^WPOrgInfoCompletion)(WPOrgInfoStatus, NSArray*, NSString*);

@interface WPOrgInfoManager : NSObject

@property (readwrite, copy) WPOrgInfoCompletion completion;

/*!
 @brief retrieve preferred server list from NSUserDefaults
 */
+ (NSArray *)loadPreferredServersFromArchive;

/*!
 @brief Returns YES if the preferred server list in NSUserDefaults list is stale and needs to be reloaded
 */
+ (BOOL)isStalePreferredServersArchive;

+ (NSString *)archivedPhonebookURLString;

/*!
 @brief Archives the servers in the NSUserdefaults
 @param servers - List of servers
 */
+ (void)archiveServers:(NSMutableArray *)servers;
+ (void)archiveServers:(NSMutableArray *)servers fromPhonebookURLString:(NSString*)urlString;

/*!
 @brief Load preferred server list from archive. If the list is stale, it loads it from the server
 @param completion - Returns status code and list of servers
 */
- (void)loadPreferredServerListWithPhonebookURLString:(NSString*)phonebookURLString completion:(WPOrgInfoCompletion)completion;

/*!
 @brief Load servers for phonebook
 @param completion - Returns status code and list of servers
 */
-(void)loadServerListfromPhonebookURLString:(NSString*)phonebookURLString completion:(WPOrgInfoCompletion)completion;

@end
