//
//  WPUtil_Features.h
//  iChart
//
//  Created by Larry Irwin II on 7/8/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, FEATURE_RESPONSE) {
	FEATURE_UNAVAILABLE,
	FEATURE_AVAILABLE,
	FEATURE_READONLY,
} ;

// Clinical
extern NSString * const	FEATURE_MEDS_REVIEW;
extern NSString * const	FEATURE_ALLERGIES;
extern NSString * const	FEATURE_IMMUNIZATIONS;
extern NSString * const	FEATURE_HEALTH_REMINDERS;
extern NSString * const	FEATURE_HEALTH_REMINDER_SCHEDULE;
extern NSString * const FEATURE_HM_MARK_COMPLETE;
extern NSString * const	FEATURE_HISTORIES;
extern NSString * const	FEATURE_ALERTS;
extern NSString * const	FEATURE_HEALTH_SNAPSHOT;
extern NSString * const	FEATURE_HM_CONTENT;
extern NSString * const	FEATURE_HEALTH_ISSUES;
extern NSString * const FEATURE_MEDS_REFILL;
extern NSString * const FEATURE_MEDS_DIRECT_REFILL;
extern NSString * const FEATURE_GOALS_REVIEW;
extern NSString * const FEATURE_PROVIDER_WIDGET_LIST;

// Past Appointments
extern NSString * const FEATURE_RECENT_APPOINTMENTS;
extern NSString * const FEATURE_RECENT_VISITS;
extern NSString * const FEATURE_VISIT_SUMMARY;
extern NSString * const FEATURE_PAST_ADMISSIONS;
extern NSString * const FEATURE_DISCHARGE_INSTRUCTIONS;

// Upcoming Appointments
extern NSString * const FEATURE_APPT_REVIEW;
extern NSString * const FEATURE_APPT_DETAILS;
extern NSString * const FEATURE_APPT_ECHECKIN;
extern NSString * const FEATURE_APPT_CANCEL;
extern NSString * const FEATURE_APPT_CONFIRM;
extern NSString * const FEATURE_APPT_DIRECT_CANCEL;
extern NSString * const FEATURE_DRIVING_DIRECTIONS;
extern NSString * const FEATURE_APPT_RESCHEDULING;
extern NSString * const FEATURE_PREADMISSION_DETAILS;

// Auto Waitlist
extern NSString * const FEATURE_AUTO_WAITLIST;
extern NSString * const FEATURE_UPDATE_WAITLIST;

// Scheduling
extern NSString * const FEATURE_MOBILE_SCHED;
extern NSString * const FEATURE_APPT_REQUEST;
extern NSString * const FEATURE_APPT_SCHEDULE;
extern NSString * const FEATURE_APPT_TICKET_SCHEDULE;

// Test Results
extern NSString * const FEATURE_LABS;
extern NSString * const FEATURE_LAB_DETAILS;
extern NSString * const FEATURE_LAB_RESULT_CHART_GRAPH;
extern NSString * const FEATURE_DENY_TEST_RESULTS;


// Proxy
extern NSString * const FEATURE_PROXY_ACCESS;

// Messaging
extern NSString * const FEATURE_MESSAGES_INBOX;
extern NSString * const FEATURE_MESSAGES_OUTBOX;
extern NSString * const FEATURE_CUSTOMER_SERVICE;
extern NSString * const FEATURE_MEDICAL_ADVICE;
extern NSString * const FEATURE_IMAGE_UPLOAD;
extern NSString * const FEATURE_IMAGE_UPLOAD_EVISIT;
extern NSString * const FEATURE_MESSAGE_TASK_SCHEDULE;

// Letters
extern NSString * const FEATURE_LETTERS;

// Questionnaires
extern NSString * const FEATURE_QUESTIONNAIRES_HISTORY;
extern NSString * const FEATURE_QUESTIONNAIRES_GENERAL;
extern NSString * const FEATURE_DENY_BEDSIDE_QUESTIONNAIRES;

// Billing
extern NSString * const FEATURE_PB_ACCOUNT_INQUIRY;
extern NSString * const FEATURE_HB_ACCOUNT_INQUIRY;
extern NSString * const FEATURE_SBO_ACCOUNT_INQUIRY;
extern NSString * const FEATURE_COPAY_PAYMENT;
extern NSString * const FEATURE_PB_ACCOUNT_DETAILS;
extern NSString * const FEATURE_HB_ACCOUNT_DETAILS;
extern NSString * const FEATURE_SBO_ACCOUNT_DETAILS;
extern NSString * const FEATURE_RECENT_PAYMENTS;
extern NSString * const FEATURE_PB_STATEMENT_DETAILS;
extern NSString * const FEATURE_FINANCIAL_ASSISTANCE;

// Insurance
extern NSString * const FEATURE_ID_CARD;
extern NSString * const FEATURE_HTML_ID_CARD;
extern NSString * const FEATURE_BENEFIT_DETAILS;

// Track My Health
extern NSString * const FEATURE_TRACK_MY_HEALTH;
extern NSString * const FEATURE_EXTERNAL_PEF;

// Personalize
extern NSString * const FEATURE_PERSONALIZE;
extern NSString * const FEATURE_PERSONALIZE_PHOTO;

// Preferences
extern NSString * const FEATURE_PATIENT_PREFERENCES;
extern NSString * const FEATURE_CHANGE_PASSWORD;

// Visit Guide
extern NSString * const FEATURE_PATIENT_VISIT_GUIDE;

/**
 * Appointment auto-arrival with geolocation or Bluetooth beacons
 */
extern NSString * const FEATURE_APPT_SELF_ARRIVAL;

// Patient Estimates
extern NSString * const   FEATURE_PATIENT_ESTIMATES; // 195

// Telehealth
extern NSString * const FEATURE_TELEMEDICINE_SCHEDULING;
extern NSString * const FEATURE_ON_DEMAND_VIDEO_VISITS;
extern NSString * const FEATURE_QUICKSCHEDULE;
extern NSString * const FEATURE_DENY_JOINING_VIDEO_VISITS;

//ToDo
extern NSString * const   FEATURE_UPCOMING_ORDERS;
extern NSString * const   FEATURE_TASKS;
extern NSString * const   FEATURE_TASKS_ACT_ON;

// Share Everywhere
extern NSString * const FEATURE_DENY_SHARE_EVERYWHERE;

//Manage Reminders
extern NSString * const   FEATURE_MANAGE_REMINDERS_EDIT;

//EVisit
extern NSString * const   FEATURE_EVISIT; //117

// MO Premium Billing
extern NSString * const FEATURE_PREMIUM_BILLING;

// Community connections for H2G
extern NSString * const FEATURE_MANAGE_EXTERNAL_ACCOUNTS;

// MO Self-Triage
extern NSString * const FEATURE_SYMPTOM_CHECKER;

// MO Family access
extern NSString * const FEATURE_SEND_PROXY_INVITE;

// MO Document Center
extern NSString * const FEATURE_DOCUMENT_CENTER; //217

// MO Document hub
extern NSString * const FEATURE_DOWNLOAD_CCD;
extern NSString * const FEATURE_DOWNLOAD_VISIT_SUMMARY;
extern NSString * const FEATURE_TRANSMIT_VISIT_SUMMARY_CE;
extern NSString * const FEATURE_TRANSMIT_VISIT_SUMMARY_DIRECT;
extern NSString * const FEATURE_TRANSMIT_VISIT_SUMMARY_EMAIL;
extern NSString * const FEATURE_ROI_ACCESS;
extern NSString * const FEATURE_USER_AUDIT_TRAIL;
extern NSString * const FEATURE_MYCHART_AUDIT_TRAIL;

// Infection Control
extern NSString * const FEATURE_DENY_INFECTIOUS_DISEASE_STATUS;

// MO On My Way
extern NSString * const FEATURE_DENY_ON_MY_WAY;

@interface WPUtil_Features : NSObject {

}

@end
 
