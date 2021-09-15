//
//  WPPatientContext.h
//  iChart
//
//  Created by Chetan Satish on 7/30/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPFeatures.h"



@import ToDo;

/// Status indicating that the user should be warned that proxy access is expiring soon.
static NSString * const WPStatusAccessExpiringSoon = @"activewarn";

@interface WPPatientContext : WPObject <IWPPatient, PEPatientProtocol, PEPatientIndexProtocol, PEToDoPatientProtocol>

/// Patient's full legal name
@property (strong, nonatomic) NSString *legalName;

/// Patient's WPR ID
@property (strong, nonatomic) NSString *accountID;

/// Patient's WPR CID with the suffix "^CID" in an Intraconnect context; Patient's WPR ID otherwise
@property (strong, nonatomic) NSString *uniqueID;

/// The date on which proxy access to this patient expires.
@property (strong, nonatomic) NSDate *tillDateISO;

/// The status for the user's proxy access to this patient.
@property (strong, nonatomic) NSString *status;

/// TODO: What does this mean?
@property (nonatomic) BOOL isProxy;

/// The list of features that are available/unavailable while accessing this patient.
@property (strong, nonatomic) WPFeatures *featureInformation;

/// The list of entities that can be selected as recipients for Medical Advice Request messages for this patient.
@property (strong, nonatomic) NSMutableArray *medAdviceRecipients;

/// The list of alerts for this patient.
@property (strong, nonatomic) NSMutableArray *alerts;

/// The photo for this patient.
@property (strong, nonatomic) UIImage *photo;

/// The index of the color selected for this patient by the user, for display in MyChart.
@property (nonatomic) NSInteger colorIndex;

/// This patient's home deployment Interconnect URL in an Intraconnect context.
@property (strong, nonatomic) NSString *homeURL;

/// TODO: What does this mean?
@property (nonatomic) BOOL needsDataFromHomeDeployment;

/// Indicates whether or not this patient is currently admitted to the hospital.
@property (nonatomic) BOOL isAdmitted;

/// Indicates whether or not this patient is currently in an emergency department.
@property (nonatomic) BOOL isInED;

/// The ID of the MyChart Now context that this patient is currently in, if any.
@property (strong, nonatomic) NSString *nowContextID;

/// The index of this patient in the list of patients that a user can access.
@property (nonatomic, readonly) NSInteger index;

/// Indicates whether or not the patient has alerts that cannot be handled in mobile.
@property (nonatomic) BOOL hasWebAlerts;

/// Indicates the number of alerts for this patient that cannot be handled in mobile.
@property (nonatomic) NSInteger numberOfWebAlerts;

/// TODO: What does this mean?
@property (nonatomic) BOOL isSelfProxy;

/// Indicates whether or not this patient is currently enrolled in Care Companion.
@property (nonatomic) BOOL isCareCompanionEnrolled;

/// Indicates which service areas this patient is associated with when they have a refusal on file (Finland).
@property (strong, nonatomic) NSMutableArray *allowedServiceAreas;

- (BOOL)isEqualToPatient:(WPPatientContext *)patient;

/**
 * Returns whether the patient is a refusal patient i.e has a refusal on file. This can
 * happen in Finland environments where there could be multiple EPTs for the same person
 * in different service areas.
 *
 * @return whether patient has a refusal on file.
 */
-(BOOL)isRefusalPatient;

// returns the proxy access expiration date in long date format
- (NSString *) getProxyExpirationDate;

// returns the proxy access expiration date in specified format
- (NSString *) getProxyExpirationDateWithDateFormat:(NSString *)dateFormat;

@end
