//
//  TestResultsStrings.h
//  MyChart
//
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPLocaleInfo.h"

#define STR_TR_HEADER_DEFAULT  NSLocalizedStringFromTableInBundle(@"TR1", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Default header for doctor's comments section")
#define STR_TR_NO_INFO  NSLocalizedStringFromTableInBundle(@"TR2", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Appears when a lab is selected but has no additional data@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_RESULT_NOTE  NSLocalizedStringFromTableInBundle(@"TR4", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the result note@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_NARRATIVE  NSLocalizedStringFromTableInBundle(@"TR5", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the narrative section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_IMPRESSION  NSLocalizedStringFromTableInBundle(@"TR6", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the impression section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_NOTE  NSLocalizedStringFromTableInBundle(@"TR7", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the note section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_MORE_INFO  NSLocalizedStringFromTableInBundle(@"TR8", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Displays when lab results have more detail on the MyChart website.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_STANDARD_RANGE  NSLocalizedStringFromTableInBundle(@"TR9", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label for the standard range of a lab result component.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_UNITS  NSLocalizedStringFromTableInBundle(@"TR10", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label for the unit of a lab result component@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_MESSAGE_DEFAULT_SUBJECT  NSLocalizedStringFromTableInBundle(@"TR11", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Default subject for message spawned from test results.  %1$@ is the name of the test result. Do not translate in Arabic since hyperspace cannot view Arabic characters.")
#define STR_TR_MESSAGE_DEFAULT_BODY_WITH_DATE  NSLocalizedStringFromTableInBundle(@"TR12", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Default body for message spawned from test results, with date.  %1$@ is the test result title.  %2$@ is the date. Do not translate in Arabic since hyperspace cannot view Arabic characters.")
#define STR_TR_MESSAGE_DEFAULT_BODY  NSLocalizedStringFromTableInBundle(@"TR13", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Default body for messages spawned from test results.  %1$@ is the name of the test result.")
#define STR_TR_DEFAULT_TITLE  NSLocalizedStringFromTableInBundle(@"TR14", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Default title for the test results feature@LENGTH@18 characters")
#define STR_TR_ERROR_LOADING_GEN  NSLocalizedStringFromTableInBundle(@"TR16", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Displays when there is an error loading the lab result table@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_NO_DATA  NSLocalizedStringFromTableInBundle(@"TR17", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Displays when there are no test results to view")
#define STR_TR_TABLE_TITLE_COMP_RESULTS  NSLocalizedStringFromTableInBundle(@"TR18", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Title for the component results table for the detailed view of lab results.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_VALUE  NSLocalizedStringFromTableInBundle(@"TR19", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the value column in the component results table@LENGTH@6 characters@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_HEADER_STD_RANGE  NSLocalizedStringFromTableInBundle(@"TR20", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the standard range column in the component results table. Due to space restrictions, no single word in this translation should be longer than 13 characters.@LENGTH@14 characters@CONSTRAINTS@Use HTML safe characters. Due to space restrictions, no single word in this translation should be longer than 13 characters.")
#define STR_TR_HEADER_UNITS  NSLocalizedStringFromTableInBundle(@"TR21", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the units column in the component results table@LENGTH@10 characters@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_LABEL_RESULT_STATUS  NSLocalizedStringFromTableInBundle(@"TR22", @"TestResults",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label for the status of the lab result (e.g., final result)@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_LABEL_VIEWED_ON  NSLocalizedStringFromTableInBundle(@"TR23", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Displays the date and time on which this lab result was last viewed.  %1$@ is the date and time the lab result was last viewed.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_RANGE_FORMAT  NSLocalizedStringFromTableInBundle(@"TR24", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Formatting for the component reference range for a test result.  %1$@ is the low value. %2$@ is the high value")
#define STR_TR_UNREAD_MESSAGE  NSLocalizedStringFromTableInBundle(@"TR25", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Voiceover text to inform the user that their test result is unread.")
#define STR_TR_NO_ORDERING_PROVIDER  NSLocalizedStringFromTableInBundle(@"TR20111221115702", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Appears in place of the ordering provider's name when the order for this test result has no ordering provider.")
#define STR_TR_VALUE  NSLocalizedStringFromTableInBundle(@"TR20120105113016", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label for the value associated with a given component.@LENGTH@12 characters@CONSTRAINTS@Use HTML safe characters.")
#define STR_TR_HEADER_ADDENDA  NSLocalizedStringFromTableInBundle(@"TR20120109022250", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the addenda section in the narrative section@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_SIGNED_BY  NSLocalizedStringFromTableInBundle(@"TR20120109022327", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Signed by header for addenda.  %1$@ is signer name.@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_ORIGINAL_NARRATIVE  NSLocalizedStringFromTableInBundle(@"TR20120109022342", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Header for the original narrative section in the narrative section when a addenda is shown@CONSTRAINTS@Use HTML safe characters")
#define STR_TR_ACC_ABNORMAL  NSLocalizedStringFromTableInBundle(@"TR20140625110838", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Voiceover text for the abnormal icon displayed in the test results list page. Indicates to the blind user that the given test result is abnormal. $1$@ is the title of the test result. comma adds a pause to the narration. E.G. Abnormal, CBC")
#define STR_TR_RESULTED_ON  NSLocalizedStringFromTableInBundle(@"TR20140625121820", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Text label for the date of the test result. %1$@ is the date the test result was resulted.@LENGTH@35 characters")
#define STR_TR_ACC_ABNORMAL_VAL  NSLocalizedStringFromTableInBundle(@"TR20140627051451", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Voiceover text read on the test results details page to indicate that a particular value is abnormal. This is read after the the value itself and requires an additional swipe(voiceover select next item) to get to.")
#define STR_TR_ACC_ORDERED_BY  NSLocalizedStringFromTableInBundle(@"TR20140625122104", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@The voiceover text read for the label listing the provider that ordered a test result. %1$@ is the provider name.")
#define STR_TR_ACC_COMPOSE_BUTTON  NSLocalizedStringFromTableInBundle(@"TR20140702010413", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Voiceover text for the button to compose a message about a test result to send to a provider.")
#define STR_TR_ACC_COMPOSE_BUTTON_HINT  NSLocalizedStringFromTableInBundle(@"TR20140702010501", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Voiceover hint for the button to compose a message about a test result to send to a provider.")
#define STR_TR_HEADER_NAME  NSLocalizedStringFromTableInBundle(@"TR20160125155945", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@header of the component name field.")
#define STR_TR_ACTION_MEDADVICE NSLocalizedStringFromTableInBundle(@"TR20160128111647", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button leads to compose activity about a given test result")
#define STR_TR_COMPONENT_NUMBER NSLocalizedStringFromTableInBundle(@"TR20160128044900", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@appears in an unread test result. %1$@ is the number of components in the test result")
#define STR_TR_PREVIEW_BODY_DEFAULT NSLocalizedStringFromTableInBundle(@"TR20160208153540", @"TestResults", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@stuff")
#define STR_ALERT_TITLE_APPT_DETAILS_UNAVAILABLE _STRC(@"Details Not Available", @"@CONTEXT@Title for alert when user does not have security to view details.", @"STR_ALERT_TITLE_APPT_DETAILS_UNAVAILABLE")
#define STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE_ORG_PROXY _STRC(@"%1$@ does not have details available for %2$@'s appointment.", @"@CONTEXT@Message for alert when user does not have access to details. %1$@ is the organization name. %2$@ is the patient's name.", @"STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE_ORG_PROXY")
#define STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE_ORG _STRC(@"%1$@ does not have details available for your appointment.", @"@CONTEXT@Message for alert when user does not have access to details. %1$@ is the organization name.", @"STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE_ORG")
#define STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE_PROXY _STRC(@"This organization does not have details available for %1$@'s appointment.", @"@CONTEXT@Message for alert when user does not have access to details. %1$@ is the patient's name.", @"STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE_PROXY")
#define STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE _STRC(@"This organization does not have details available for your appointment.", @"@CONTEXT@Message for alert when user does not have access to details.", @"STR_ALERT_MESSAGE_APPT_DETAILS_UNAVAILABLE")

// THIS CLASS SHOULD BE REMOVED LATER
// Since we do not have a solution for accessing strings defined using #defines and _STRC in objective c from Swift, this class serves as the proxy. Once we have a solution, delete this class and use the new system.
// Same goes for WPAppointmentsStrings
@interface WPTestResultsStrings: NSObject

+ (NSString*) HeaderDefault; 
+ (NSString*) ResultedOn;
+ (NSString*) AccOrderedBy;
+ (NSString *) headerValue;
+ (NSString *) headerStdRange;
+ (NSString *) actionMedAdvice;
+ (NSString *) accResultedOn;
+ (NSString *) moreInfo;
+ (NSString *) headerNote;
+ (NSString *) headerImpression;
+ (NSString *) headerNarrative;
+ (NSString *) headerResultNote;
+ (NSString *) tableTitleCompResults;
+ (NSString *) headerAddenda;
+ (NSString *) signedBy;
+ (NSString *) headerTranscriptions;
+ (NSString *) headerNarrativeImpression;
+ (NSString *) headerComments;
+ (NSString *) noDetailsAlertMessage;
+ (NSString *) detailsNotAvailableAlertTitle;
+ (NSString *) detailsUnavailableOrgProxyAlertMessage;
+ (NSString *) detailsUnavailableProxyAlertMessage;
+ (NSString *) detailsUnavailableOrgAlertMessage;
+ (NSString *) detailsUnavailableAlertMessage;
+ (NSString *) messageDefaultBodyWithDate;
+ (NSString *) messageDefaultBody;
+ (NSString *) messageDefaultSubject;
+ (NSString *) navBtnTitleNext; 
+ (NSString *) navBtnTitlePrev;
+ (NSString *) componentAccAbnormalRangeUnitComments;
+ (NSString *) componentAccAbnormalUnitRangeUnit;
+ (NSString *) componentAccRangeUnitComments;
+ (NSString *) componentAccRangeUnit;
+ (NSString *) componentAccAbnormalUnitComments;
+ (NSString *) componentAccAbnormalUnit;
+ (NSString *) componentAccUnitComments;
+ (NSString *) componentAccUnit;
+ (NSString *) componentAccAbnormalRangeComments;
+ (NSString *) componentAccAbnormalRange;
+ (NSString *) componentAccRangeComments;
+ (NSString *) componentAccRange;
+ (NSString *) componentAccAbnormalComments;
+ (NSString *) componentAccAbnormal;
+ (NSString *) componentAccComments;
+ (NSString *) componentAcc;
+ (NSString *) noComponentInformation;

@end
