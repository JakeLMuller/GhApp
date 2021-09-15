//
//  WPAuditLogManager.h
//  iChart
//
//  Created by Chetan Satish on 10/7/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPUserAudit.h"
//
#import "WPAuditLogServiceRequest.h"


@interface WPAuditLogManager : NSObject {
	
	NSMutableArray *userAuditLog;
	NSMutableDictionary *patientAuditLogs;
}

@property (nonatomic, strong, nullable) NSMutableArray *userAuditLog;
@property (nonatomic, strong, nullable) NSMutableDictionary *patientAuditLogs;

+ (nullable WPAuditLogManager *)getSharedManager;

+ (void)clearSharedManager;
/*
 * Adds audit for the current patient being accessed
 */
- (void) addToAuditLogWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction andComment:(nullable NSString *)cmt;
- (void) addToAuditLogWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction;

/*
 * Adds audit for the specified patient
 */
- (void) addToAuditLogForPatient:(nonnull WPPatientContext *)patient withType:(WLogType)lType andCommandAction:(CommandActions)cmdAction andComment:(nullable NSString *)cmt;
- (void) addToAuditLogForPatient:(nonnull WPPatientContext *)patient withType:(WLogType)lType andCommandAction:(CommandActions)cmdAction;

/*
 * Adds audit for the currently logged in user.
 * This audit is used when user performs action outside of patient data. E.g., switching proxies.
 * If the user is also a patient, then any patient specific action like, send medical advice  should go to the patient audit and not the user audit.
 */
- (void) addToAuditLogForUserWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction andComment:(nullable NSString *)cmt;
- (void) addToAuditLogForUserWithType:(WLogType)lType andCommandAction:(CommandActions)cmdAction;

/*
 * Send audit log to the server
 */
- (void) sendAuditLogRequestForUser;
- (void) sendAuditLogRequestForPatient:(nonnull WPPatientContext *)patient;

/* 
 * Flush user and all patient audit logs
 */
- (void) flushAuditLog;
- (nonnull NSArray *) getAndFlushAuditLog;

@end

