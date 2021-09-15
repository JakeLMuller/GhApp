//
//  WPPatientEstimatesWebViewController.h
//  MyChart
//
//  Created by Surender Pal Singh on 4/11/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPActivityWebViewController.h"

@interface WPPatientEstimatesWebViewController : WPActivityWebViewController

-(instancetype) initForDetails:(NSDictionary<NSString *,NSString*> *)params;

@end
