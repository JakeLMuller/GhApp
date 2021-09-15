//
//  WPBillingSummaryWebViewController
//  MyChart
//
//  Created by Kyle Wu on 1/4/18.
//  Copyright © 2018-2020 Epic Systems Corporation. All rights reserved.
//

#import "WPActivityWebViewController.h"

@interface WPBillingSummaryWebViewController : WPActivityWebViewController

-(instancetype) initForDetails:(NSDictionary<NSString *,NSString*> *)params;

-(instancetype) initForPayments:(NSDictionary<NSString *,NSString*> *)params;

-(instancetype) initForAutopay:(NSDictionary<NSString *,NSString*> *)params;

@end

