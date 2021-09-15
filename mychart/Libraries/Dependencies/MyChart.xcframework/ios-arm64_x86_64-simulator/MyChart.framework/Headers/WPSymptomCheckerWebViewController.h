//
//  WPSymptomCheckerWebViewController.h
//  MyChart
//
//  Created by Yash Vaka on 12/4/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPActivityWebViewController.h"

@interface WPSymptomCheckerWebViewController : WPActivityWebViewController

- (instancetype)initWithTreeID:(NSString *)treeID andTitle:(NSString *)title;

@end
