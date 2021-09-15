//
//  WPAlertOption.h
//  MyChart
//
//  Created by Alex J White on 1/21/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPAlertOption : WPObject


typedef NS_ENUM(NSInteger, WPAlertOptionKVP)
{
    kWPAlertOptionUnknown = 0,
    
    //Item
    kWPAlertOptionKey = 1,
    kWPAlertOptionName = 2,
    kWPAlertOptionDateTimeISO = 3,
    kWPAlertOptionProviderName = 4,
    kWPAlertOptionDescription = 5,
    kWPAlertOptionVisitType = 6,
    kWPAlertOptionSubject = 7,
    kWPAlertOptionDepartment = 8,
    kWPAlertOptionDueDateTimeISO = 9,
    kWPAlertOptionOverride = 10,
    kWPAlertOptionQnrAvailableDateISO = 11,
    kWPAlertOptionIsDotNet = 12,
    kWPAlertOptionTelemedicineCanBegin = 13,
    kWPAlertOptionSMSActive = 14,
    kWPAlertOptionAllEmailEnabled = 15,
    kWPAlertOptionAllTextEnabled = 16,
    kWPAlertOptionEmail = 17,
    kWPAlertOptionPhone = 18,
    kWPAlertOptionNotificationPreferenceCauses = 19,
    
    //Info
    kWPAlertOptionNumberOfDay = 100,
    kWPAlertOptionAccount = 101,
    kWPAlertOptionAccountName = 102,
    kWPAlertOptionGuarantorCount = 103,
    kWPAlertOptionAmountDue = 104,
    kWPAlertOptionCreditCardLastFour = 105,
    kWPAlertOptionCreditCardBrand = 106,
    kWPAlertOptionNumberOfQnrDueSoon = 107,
    
    //Condition
    kWPAlertOptionIsOverdue = 200,
    
    WPAlertOptionVideoVisitRemoteOrganizationName = 300,
    WPAlertOptionVideoVisitRemoteOrganizationId = 301,
    
    //MyChart Now Encounter
    kWPAlertOptionNowEncounterCsn = 400,
    kWPAlertOptionNumberOfEncounterAlerts = 401,
    
    //Is eligible for user-initiated appointment self-arrival
    kWPAlertOptionIsUserInitiatedArrivalAllowed = 500,
    
    //Web Only Alert option
    kWPAlertOptionListOfPatients = 10000,
    kWPAlertOptionTotalNumberWebAlerts = 10001,
    
    //Client Only Alert Option
    kWPAlertOptionDateOfProxyExpiry = 11000,
};

@property (nonatomic,assign) WPAlertOptionKVP key;
@property (nonatomic,strong) NSObject *value;


@end
