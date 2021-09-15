//
//  WPComposeMessageNavigationController.h
//  iChart
//
//  Created by Mike on 6/22/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPRootNavigationController.h"
#import "WPComposeMessageViewController.h"
#import "WPProvider.h"
#import "WPAccount.h"

@interface WPComposeMessageNavigationController : WPRootNavigationController

@property (nonatomic, strong) WPComposeMessageViewController *rootViewController;
@property (nonatomic, strong) WPOrganizationInfo *organization;

-(instancetype)initForMedicalAdviceRequest;
-(instancetype)initForMedicalAdviceRequestIsTestResultQuestion:(BOOL)isTestResultQuestion;
-(instancetype)initForMedicalAdviceRequestWithOrganization:(WPOrganizationInfo*)organization;
-(instancetype)initForMedicalAdviceRequestWithOrganization:(WPOrganizationInfo*)organization isTestResultQuestion:(BOOL)isTestResultQuestion;
-(instancetype)initForReplyWithOriginalMessage:(WPMessage *)msg;
-(instancetype)initForMedicalAdviceRequestWithProvider:(id<PEMessageProvider>)provider;
-(instancetype)initForMedicalAdviceRequestWithAppleECGFileURL:(NSString*)url;
-(instancetype)initForCustomerService;
-(instancetype)initForCustomerServiceWithInfo:(NSString *)encMsgInfo;

@end
