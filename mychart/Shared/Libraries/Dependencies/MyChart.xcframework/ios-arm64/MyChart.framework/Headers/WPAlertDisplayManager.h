//
//  WPAlertDisplayManager.h
//  MyChart
//
//  Created by Alex J White on 1/22/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlertNotification.h"
#import "WPActivityManager.h"

//Special characters that can appear in the badge label
#define BADGE_BANG 200000  //"!"

@interface WPAlertDisplayManager : WPObject

+ (UIColor *)colorForActivity:(WPActivity)activity;
+ (UIColor *)colorForAlert:(WPAlert *)alert;

+ (UIImage *)imageForAlertType:(WPAlertType)type;

+ (NSInteger)numberOfAlertsForPatient:(WPPatientContext *)patient;

+ (NSInteger)consolidateWithTotalAlertCount:(NSInteger)count upcomingCount:(NSInteger)upcomingCount telemedCount:(NSInteger)telemedCount;

+ (NSString *)getBadgeStringForActivity:(WPActivity)activity;
+ (NSInteger)getBadgeCountForActivity:(WPActivity)activity;

//This method is used to determine if any of a patient's appointment alerts will generate a count of "!" on the springboard. If we do, then this method returns true.
+ (BOOL)patientHasBangForAppts:(WPPatientContext*)patient;

@end
