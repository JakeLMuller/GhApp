//
//  WPTermsConditionsViewController.h
//  iChart
//
//  Created by Chetan Satish on 11/10/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish 3/11 199912 Changed callbackObj from retain to assign
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM
//  *mflatau 09/2015 376566 Presenting controller correctly
//  *csatish 02/2016 403704 Code cleanup and convert to Auto-layouts. Define protocol

#import <UIKit/UIKit.h>
#import "WPTermsConditionsServiceRequest.h"

@protocol WPTermsConditionsViewDelegate <NSObject>
@required
- (void)didAccept:(BOOL)accept forType:(WPTermsType)termsType;
@optional
- (void)receivedServerErrorForTermsType:(WPTermsType)termsType;
@end


@interface WPTermsConditionsViewController : UIViewController

@property (nonatomic, weak) id<WPTermsConditionsViewDelegate>	delegate;

- (instancetype)initWithType:(WPTermsType)type delegate:(id<WPTermsConditionsViewDelegate>) delegate;

@end
