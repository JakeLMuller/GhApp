//
//  WPTestDetail.h
//  MyChart
//
//  Created by Epic on 7/6/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPTestResult.h"
#import "WPTestComments.h"
#import "WPTestTranscription.h"
#import "WPUtil_Xml.h"


/**
 * Detailed information about a test result
 */
@interface WPTestDetail : WPTestResult <InlineEducationSourceProtocol>

// array of WPTestComponent
@property(nonatomic, strong, nullable) NSArray *components;

// impression for the result
@property(nonatomic, strong, nullable) NSString *impression;

// narrative for the result
@property(nonatomic, strong, nullable) NSString *narrative;

// HTML version of narrative & impression
@property(nonatomic, strong, nullable) NSString *htmlNarrativeImpression;

// free text field
@property(nonatomic, strong, nullable) NSString *resultNote;

// flag indicating whether this should be shown or not
@property(nonatomic, assign) BOOL showFlag;

// array of WPMessageRecipient people who user can message form this result
@property(nonatomic, strong, nullable) NSArray *recipients;

// array of WPTestComments
@property(nonatomic, strong, nullable) NSArray *comments;

// flag indicating if this is an ECG result
@property(nonatomic) BOOL isECG;

// flag indicating if this test has scans
@property(nonatomic) BOOL hasScans;

// array of rtf WPTestTranscription
@property(nonatomic, strong, nullable) NSArray *transcriptions;

// array of html WPTestTranscriptions
@property(nonatomic, strong, nullable) NSArray *htmlTranscriptions;

// array of plain text WPTestAddendum
@property(nonatomic, strong, nullable) NSArray *addenda;

// array of html WPTestAddendum
@property(nonatomic, strong, nullable) NSArray *htmlAddenda;

// flag indicating if this result has RTF components
@property(nonatomic, assign) BOOL hasRTFComponents;

// array of WPSpecimen
@property(nonatomic, strong, nullable) NSArray *specimens;

// FDI ID for external images
@property(nonatomic, strong, nullable) NSString *fdiID;

// array of test result scanned images
@property(nonatomic, strong, nullable) NSArray *scans;

// part of the test result detail model, true if we've set up inline education FDI integration in WDF 96033
@property(nonatomic) BOOL hasEducationSource;

// returns hasEducationSource
@property(nonatomic) BOOL hasInlineEducationSource;

// Order ID
@property(nonatomic, nonnull) NSString* getInlineEducationContextID;

// Enum InlineEducationType.LabResults
@property(nonatomic) InlineEducationType getInlineEducationContext;

// Search term for content linking
// encrypted order ID to launch MO page for specific test result
@property(nonatomic, nonnull) NSString* encryptedOrderID;

// Whether or not we should display this test result detail in MO
@property(nonatomic) BOOL shouldUseCustomReport;

@property(nonatomic) NSString* _Nonnull getInlineEducationSearchTerm;

// Boolean indicating whether the patient has access to comm center to ask a question or if they should fall back to native messaging
@property(nonatomic) BOOL hasAccessToCommCenter;

// Convenience functions
- (BOOL)containsRtfTranscriptions;
- (BOOL)containsHtmlTranscriptions;
- (BOOL)containsPlainTextAddenda;
- (BOOL)containsHtmlAddenda;
- (BOOL)containsComments;

@end
