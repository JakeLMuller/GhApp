//
//  WPIncrementalLoadingTracker.h
//  iChart
//
//  Created by Varun Vijayvargiya on 4/29/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


#import "WPUtil_Xml.h"
#import "WPObject.h"
#import "WPOrganizationInfo.h"

/*class to support incremental loading across the community for
  mychart mobile. Stores organization info and item ID to look at
  for when incrementally loading next.
 */
@interface WPIncrementalLoadingTracker : WPObject

@property (nonatomic, strong, nullable) WPOrganizationInfo *organization;
@property (nonatomic, strong, nullable) NSString* nextItemID;
@property (nonatomic, assign) BOOL done;
@property (nonatomic, strong, nullable) NSString* secondaryNextItemID;
@property (nonatomic, assign) BOOL secondaryDone;

@end
