//
//  WPHealthKitEnums.h
//  MyChart
//
//  Created by Jacob Andrews-Ohlman on 7/30/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//


/*!
 @brief Name of the key in the user info of a Background sync complete notification that stores the WPHKOrganizationRow object related to the completed sync.
 */
static NSString * const kWPHKNotificationSyncRow = @"kWPHKNotificationSyncRow";

/*!
 @brief Name of the key in the user info of a Background sync complete notification that stores a WPHKSyncChangeType value for what is currently happening to the row
 */
static NSString * const kWPHKNotificationSyncChangeType = @"kWPHKNotificationSyncChangeType";
static NSString * const kWPHKNotificationDeviceStatusChangeType = @"kWPNotificationHKStatusDidChangeDeviceStatus";
static NSString * const kWPHKBackgroundSyncFailedOrganizations = @"com.epic.MyChart.HealthKit.BackgroundSync.FailedOrganizations";

/*!
 @brief type defines how the state of a row has changed to related to its syncing
 */
typedef NS_ENUM(NSInteger, WPHKSyncChangeType) {
    kWPHKSyncChangeSyncing,
    kWPHKSyncChangeDone,
    kWPHKSyncChangeError,
};

/*!
 @brief defines strict metadata keys matching category values in I FSD 1310 - Third Party Metadata Key (Strict)
 */
static NSString* const kWPHKMetadataKeyUUID = @"1";
static NSString* const kWPHKMetadataKeyBloodGlucoseMealTime = @"2";
static NSString* const kWPHKMetadataKeyInsulinDeliveryReason = @"3";

/// MyChart-defined HealthKit metadata values that are the same as HealthKit-defiend values. These exist so users
/// can manual enter metadata even if their iOS version doesn't yet have the data types and so users can view data
/// regardless of where it came from. Should match MetadataValues.java and getMetadataStringFromValue^WPPEFMY7
static NSString* const kWPHKInsulinDeliveryReasonBasal = @"1";
static NSString* const kWPHKInsulinDeliveryReasonBolus = @"2";
static NSString* const kWPHKBloodGlucoseMealTimePreprandial = @"1";
static NSString* const kWPHKBloodGlucoseMealTimePostprandial = @"2";
