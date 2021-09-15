//
//  WPFlowsheet.h
//  iChart
//
//  Created by Matthew Flatau on 7/24/14.
//  Copyright © 2014-2021 Epic Systems Corp. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"

@class EFDataSet;
@class WPFlowsheetRow;
@class WPFlowsheetReading;
@class WPInsulinRow;

typedef NS_ENUM(NSInteger, WPFlowsheetEntryType) {
    kWPFlowsheetEntryTypeManual = 1,
    kWPFlowsheetEntryTypeDevice = 2,
} ;

typedef NS_ENUM(NSInteger, WPFlowsheetEntryMode) {
    kWPFlowsheetEntryModeStandard = 1,
    kWPFlowsheetEntryModeDay = 2,
} ;

typedef NS_ENUM(NSInteger, WPFlowsheetEpisodeStatus) {
    kWPFlowsheetEpisodeStatusActive = 1,
    kWPFlowsheetEpisodeStatusResolved = 2,
    kWPFlowsheetEpisodeStatusDeleted = 3,   //Shouldn't see
} ;


@interface WPFlowsheet : WPObject

@property (nonatomic, strong) NSString *templateID;  //ID of the template being used, FLT or FDV
@property (nonatomic, strong) NSDate *editableInstant;      //First date for which readings are editable
@property (nonatomic, strong) NSString *displayTemplateID; //ID of the display template. Manual entry is same as templateID, device entry is either empty or the FDV's display FLT
@property (nonatomic, strong) NSString *episodeID;
@property (nonatomic, assign) WPFlowsheetEntryType entryType;
@property (nonatomic, assign) WPFlowsheetEntryMode entryMode;
@property (nonatomic, assign) WPFlowsheetEpisodeStatus status;

@property (nonatomic, strong) NSDate *startDate;
@property (nonatomic, strong) NSDate *endDate;
@property (nonatomic, strong) NSMutableArray *dates;        //Dates for dayEntry
@property (nonatomic, strong) NSMutableArray *instants;    //Instants for standard entry


@property (nonatomic, strong) NSString *instructions;
@property (nonatomic, strong) NSMutableArray *rowGroups;
@property (nonatomic, strong) NSMutableArray *rows;

@property (nonatomic, strong) NSMutableArray *readings;         //Sorted by instantTaken (earliest -> latest)
@property (nonatomic, strong) NSMutableDictionary *rowIDsToRows;
@property (nonatomic, strong) NSString *subtitle;

@property (nonatomic, strong) NSDate *nextLoadDate;

//populated while editing readings for this flowseet so we can separate into basal/bolus rows while editing and add this back when we're done.
@property (nonatomic, strong) WPInsulinRow *backupInsulinRow;

- (NSDate *)getMinDate;
- (NSDate *)getMaxDate;

//Inserts a reading into the readings for date dictionary and deletes erroneous day
//entry readings (multiple readings of same type on same day)
- (void)insertReading:(WPFlowsheetReading *)reading;
- (void)deleteReading:(WPFlowsheetReading *)reading;
//Inserts reading into date dictionary as well as inserting the reading in the correct order
//into the reading's respective row
- (void)addNewReading:(WPFlowsheetReading *)reading;
- (NSMutableDictionary *)getReadingsForDate:(NSDate *)date;
- (void)insertBloodPressureReadings:(NSArray *)readings;
- (void)clearAllReadings;
- (BOOL)hasData;

- (void) addFakeMetadataRows;
- (void) removeFakeMetadataRows;
- (void) separateInsulinRows;
- (void) combineInsulinRows;
@end
#endif
