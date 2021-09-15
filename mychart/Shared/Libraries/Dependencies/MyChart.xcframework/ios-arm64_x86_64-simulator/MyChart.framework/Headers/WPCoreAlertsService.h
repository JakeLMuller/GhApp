//
//  WPCoreAlertsService.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/18/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#if WPHEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif
#import "WPAlert.h"

@protocol WPCoreAlertsServiceDelegate;
@protocol WPCoreAlertsServiceDataSource;

typedef NS_ENUM(NSInteger, WPAlertErrorCode) {
    WPAlertErrorCodeAlertsNotAccessible = 1,
    WPAlertErrorCodeRequestServerError = 2
};

extern NSString * const WPAlertsErrorDomain;
extern NSString * const WPNotificationPatientAlertsInvalidated;

/**
 * For internal uses use WPAlertsServiceManager, do not use this class directly.
 */
@interface WPCoreAlertsService : NSObject

+ (NSArray *)refreshAlertNotifications;

- (instancetype)initWithDelegate:(id <WPCoreAlertsServiceDelegate>)delegate
                   andDataSource:(id <WPCoreAlertsServiceDataSource>)dataSource;

/**
 * Initializes alert service
 * @param delegate delegate for callbacks
 * @param dataSource datasource for checking whether an alert is supported
 * @param loadWithHPREnabled whether alerts should be loaded even if HPR is enabled
 */
- (instancetype)initWithDelegate:(id <WPCoreAlertsServiceDelegate>)delegate
                   andDataSource:(id <WPCoreAlertsServiceDataSource>)dataSource
              loadWithHPREnabled:(BOOL)loadWithHPREnabled;

- (void)getAlertsForPatients:(NSArray <WPPatientContext *>*)patients;

@end


@protocol WPCoreAlertsServiceDelegate <NSObject>

- (void) didReceiveAlerts:(NSArray*)alerts;

@optional
- (void) failedToReceiveAlertsForPatient:(WPPatientContext *)patient withError:(NSError *)error;

@end

@protocol WPCoreAlertsServiceDataSource <NSObject>

@required
- (BOOL)isAlertSupported:(WPAlert *)alert forPatient:(WPPatientContext *)patient;

@end
