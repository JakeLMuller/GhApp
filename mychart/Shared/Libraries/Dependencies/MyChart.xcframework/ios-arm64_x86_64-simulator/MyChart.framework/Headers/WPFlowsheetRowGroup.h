//
//  WPFlowsheetRowGroup.h
//  iChart
//
//  Created by Matthew Flatau on 8/13/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"

@class WPFlowsheetRow;

@interface WPFlowsheetRowGroup : WPObject

@property (nonatomic, strong) NSMutableArray *rowIDs;       //Array of row IDs in this group

//Helper properties
@property (nonatomic, strong) NSArray *rows;                //Array of rows in this group
@property (nonatomic, assign) BOOL hasBloodPressure;
@property (nonatomic, assign) BOOL hasInsulin;

- (int) indexOfFlowsheetRow:(WPFlowsheetRow*)rowToFind;
- (void) insertFlowsheetRow:(WPFlowsheetRow*)row atIndex:(int)index;
- (void) removeFlowsheetRowAtIndex:(int)index;
- (void) removeFakeMetadataRows;

@end
#endif
