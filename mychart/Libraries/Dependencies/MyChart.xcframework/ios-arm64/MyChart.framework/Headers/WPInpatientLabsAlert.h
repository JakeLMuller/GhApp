//
//  WPNewInpatientLabsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/1/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPInpatientLabsAlert : WPAlert <IWPInpatientLabsAlert>

@property (nonatomic, strong) NSDate *labDate;
@property (nonatomic, strong) NSString *labName;
@property (nonatomic, assign) NSInteger encounterCount;
@property (nonatomic, strong) NSString *nowEncounterCsn;

@end
