//
//  WPIDCardViewController.h
//  iChart
//
//  Created by Sanders Baik on 3/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPViewController.h"

@interface WPIDCardViewController : WPViewController <WKNavigationDelegate>

-(instancetype)initWithCoverage:(NSString *)cvgId;

@end
