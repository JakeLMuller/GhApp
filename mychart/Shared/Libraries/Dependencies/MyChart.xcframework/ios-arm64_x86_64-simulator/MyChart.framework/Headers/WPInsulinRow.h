//
//  WPInsulinRow.h
//  MyChart
//
//  Created by Jacob Andrews-Ohlman on 7/3/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPFlowsheetRow.h"
#import "WPFlowsheetReading.h"

@interface WPInsulinRow : WPFlowsheetRow

@property (nonatomic, strong) WPFlowsheetRow* basalRow;
@property (nonatomic, strong) WPFlowsheetRow* bolusRow;

- (id) initWithBasalRow:(WPFlowsheetRow*)basalRow andBolusRow:(WPFlowsheetRow*)bolusRow;
- (void)processRows;

@end
#endif
