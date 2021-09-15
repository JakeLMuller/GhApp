//
//  WPNewInsuranceInvoicesAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/2/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPNewInsuranceInvoicesAlert : WPAlert <IWPNewInsuranceInvoicesAlert>

@property (nonatomic, strong) NSString *accountID;

@end
