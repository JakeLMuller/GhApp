//
//  WPECheckInWebViewController.h
//  MyChart
//
//  Created by Yash Vaka on 6/8/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPActivityWebViewController.h"

@class WPAppointment;

@interface WPECheckInWebViewController : WPActivityWebViewController

+ (nonnull WPECheckInWebViewController *)eCheckInControllerForCSN:(nullable NSString *)csn patientIndex:(NSInteger)index;
+ (nonnull WPECheckInWebViewController *)eCheckInControllerForCSN:(nullable NSString *)csn isCsnEncrypted:(BOOL)isCsnEncrypted;
+ (nonnull WPECheckInWebViewController *)eCheckInControllerForCSN:(nullable NSString *)csn organizationInfo:(nullable WPOrganizationInfo*)organizationInfo isInpatient:(BOOL)isInpatient isCsnEncrypted:(BOOL)isCsnEncrypted isEVisit:(BOOL)isEVisit;

@property (nonatomic) BOOL isEVisit;

@end
