//
//  WPHealthAdvisory.h
//  iChart
//
//  Created by Epic on 7/14/09.
//  Copyright © 2013-2021 Epic Systems Corp. All rights reserved.
//
//  REVISION HISTORY:
//  *jdumke 05/13 267616 additional properties
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM
//  *mflatau 07/2015 376565 Adding AgedOut and Excluded statuses
//  *jsilver 05/2017 480686 Adding topicId and updateInfo properties to handle new web service

#import <UIKit/UIKit.h>
#import "WPObject.h"
#import "WPUtil_Xml.h"
#import "WPHealthAdvisoryUpdateInfo.h"

//Topic statuses - see GetStatusInfo^WPGETHM
typedef NS_ENUM(NSInteger, WPHealthAdvisoryTopicStatus) {
	kWPHealthAdvisoryTopicStatusOverdue = 100,
    kWPHealthAdvisoryTopicStatusDue = 200,
    kWPHealthAdvisoryTopicStatusDueSoon = 300,
    kWPHealthAdvisoryTopicStatusPostponed = 400,
    kWPHealthAdvisoryTopicStatusNotDue = 500,
    kWPHealthAdvisoryTopicStatusAddressed = 600,
    kWPHealthAdvisoryTopicStatusSatisfied = 700,
    kWPHealthAdvisoryTopicStatusAgedOut = 800,
    kWPHealthAdvisoryTopicStatusExcluded = 900,
    kWPHealthAdvisoryTopicStatusPending = 11111,
    kWPHealthAdvisoryTopicStatusUnknown = 99999,
} ;

@interface WPHealthAdvisory : WPObject

@property (nonatomic, strong) NSString *topicId;
@property (nonatomic, strong) NSDate *lastDoneDate;
@property (nonatomic, strong) NSDate *dueDate;
@property (nonatomic, strong) NSDate *postponedDate;
@property (nonatomic, strong) NSString *status;				  //enum text
@property (nonatomic, strong) NSString *statusText;			  //free text
@property (nonatomic, strong) NSString *dueDateOverride;	  //text that should override due date display
@property (nonatomic, assign) NSInteger priorityKey;          //the order it should be displayed in the table
@property (nonatomic, strong) NSDictionary *statusDictionary;
@property (nonatomic, strong) WPHealthAdvisoryUpdateInfo *updateInformation;

+ (NSMutableDictionary *)getHealthAdvisoryClassMap;
- (BOOL)isOverdueForPatientToDoList;

@end
