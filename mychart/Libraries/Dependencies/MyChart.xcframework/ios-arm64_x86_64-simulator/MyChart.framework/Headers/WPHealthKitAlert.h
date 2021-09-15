//
//  WPHealthKitAlert.h
//  MyChart
//
//  Created by Zac Ling on 11/30/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
#if HEALTHKIT_ENABLED
#import "WPAlert.h"

@interface WPHealthKitAlert : WPAlert <IWPHealthKitAlert>

+ (NSString *)healthKitAlertString;
+ (NSString *)healthKitLinkedKey;

@end
#endif
