//
//  WPAlertsServiceManager.h
//  MyChart
//
//  Created by Mohammed Rangwala on 2/15/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
#import "WPCoreAlertsService.h"

/**
 * @brief Use this class to get alerts internally
 */
@interface WPAlertsServiceManager : NSObject

+ (void)getAlertsForPatients:(NSArray <WPPatientContext *>*)patients withDelegate:(id <WPCoreAlertsServiceDelegate>)delegate
               andDataSource:(id <WPCoreAlertsServiceDataSource>)dataSource;

@end
