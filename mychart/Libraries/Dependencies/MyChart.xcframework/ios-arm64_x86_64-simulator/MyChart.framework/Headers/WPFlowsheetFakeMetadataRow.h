//
//  WPFlowsheetFakeMetadataRow.h
//  MyChart
//
//  Created by Jacob Andrews-Ohlman on 7/25/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPFlowsheetRow.h"

static NSString* const kWPFakeGlucoseMetadataRowID = @"bloodGlucose";

@interface WPFlowsheetFakeMetadataRow : WPFlowsheetRow
@property (nonatomic, readonly) WPFlowsheetRowMetadataType metadataType;
@property (nonatomic, weak) WPFlowsheetRow* dataRow;
- (instancetype)initWithMetadataType:(WPFlowsheetRowMetadataType)metadataType dataRow:(WPFlowsheetRow*)dataRow;
+ (WPCustomListOption*) beforeMealOption;
+ (WPCustomListOption*) afterMealOption;
+ (WPCustomListOption*) optionForValue:(NSString*)value metadataType:(WPFlowsheetRowMetadataType)metadataType;
@end
#endif
