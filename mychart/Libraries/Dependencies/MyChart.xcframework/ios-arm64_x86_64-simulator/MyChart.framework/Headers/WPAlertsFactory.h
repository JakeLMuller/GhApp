//
//  WPAlertsFactory.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/29/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAlertsFactory : NSObject

+ (NSMutableArray*) convertDummyAlerts:(NSMutableArray*)dummyAlerts forPatientIndex:(NSInteger)patientIndex;

@end
