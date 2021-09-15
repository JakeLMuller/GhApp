//
//  WPNewBillingStatementsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/2/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPNewBillingStatementsAlert : WPAlert <IWPNewBillingStatementsAlert>

@property (nonatomic, assign) NSInteger guarantorCount;
@property (nonatomic, strong) NSString *accountID;
@property (nonatomic, strong) NSDate *statementDate;

@end
