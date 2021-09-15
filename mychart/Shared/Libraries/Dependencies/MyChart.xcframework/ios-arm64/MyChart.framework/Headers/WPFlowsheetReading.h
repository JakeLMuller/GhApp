//
//  WPFlowsheetReading.h
//  iChart
//
//  Created by Matthew Flatau on 7/29/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"
#import "WPFlowsheetRow.h"

typedef NS_ENUM(NSInteger, WPFlowsheetAbnormalReason) {
    kWPFlowsheetAbnormalReasonTooLow = 1,
    WPFlowsheetAbnormalReasonTooHigh = 2,
} ;

#define NUMERIC_NULL -DBL_MAX

@interface WPFlowsheetReading : WPObject

@property (nonatomic, strong) WPCustomListOption *customListValue;
@property (nonatomic, assign) WPFlowsheetRowDataType dataType;
@property (nonatomic, strong) NSString *externalSource;

@property (nonatomic, assign) BOOL isEditable;
@property (nonatomic, assign) BOOL isEdited;
@property (nonatomic, assign) BOOL isAbnormal;

@property (nonatomic, strong) NSString *line;
@property (nonatomic, strong) NSMutableDictionary *looseMetadata;
@property (nonatomic, strong) NSMutableDictionary *strictMetadata;
@property (nonatomic, strong) NSString* primaryMetadataValue;
@property (nonatomic, assign) double numericValue;
@property (nonatomic, strong) NSString *rowID;
@property (nonatomic, assign) WPFlowsheetValueType valueType;
@property (nonatomic, strong) NSString *stringValue;
@property (nonatomic, assign) WPFlowsheetAbnormalReason whyAbnormal;

@property (nonatomic, strong) NSDate *instantTaken;
@property (nonatomic, strong) NSDate *instantEntered;
@property (nonatomic, strong) NSDate *originalInstantTaken;

@property (nonatomic, strong) NSAttributedString *displayString;

- (BOOL)isEqualToReading:(WPFlowsheetReading *)reading;
- (NSString*) getAccessibilityReadingValue;
- (void)clear;

@end
#endif
