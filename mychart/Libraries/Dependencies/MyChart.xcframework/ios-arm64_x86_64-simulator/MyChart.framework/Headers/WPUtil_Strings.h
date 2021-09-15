//
//  WPUtil_Strings.h
//  MyChart
//
//  Created by Larry Irwin II on 7/11/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>




//CustomStrings.xml keys (Do not I18N them)
static NSString * const kWPCustomStringRxRefillListHeader = @"RxRefillListHeader";
static NSString * const kWPCustomStringRxRefillDetailsHeader = @"RxRefillDetailsHeader";
static NSString * const kWPCustomStringRxRefillErrorAdmitted = @"RxRefillErrorAdmitted";
static NSString * const kWPCustomStringRxRefillListEmptyMessage = @"RxRefillListEmptyMessage";
static NSString * const kWPCustomStringRxRefillButtonTextEnabled = @"RxRefillButtonTextEnabled";
static NSString * const kWPCustomStringRxRefillButtonTextDisabled = @"RxRefillButtonTextDisabled";
static NSString * const kWPCustomStringRxRefillButtonTextDisabledAdmitted = @"RxRefillButtonTextDisabledAdmitted";

// New RX Refill
static NSString * const kWPCustomStringRxRefillButtonDescriptionSingle = @"RxRefillButtonDescriptionSingle";
static NSString * const kWPCustomStringRxRefillButtonDescription = @"RxRefillButtonDescription";
static NSString * const kWPCustomStringRxRefillBodyNoRefillsRemaining = @"RxRefillBodyNoRefillsRemaining";
static NSString * const kWPCustomStringRxRefillBodyOneRefillRemaining = @"RxRefillBodyOneRefillRemaining";
static NSString * const kWPCustomStringRxRefillBodyMultipleRefillRemaining = @"RxRefillBodyMultipleRefillRemaining";
static NSString * const kWPCustomStringRxRefillBodyRefillPrefix = @"RxRefillBodyRefillPrefix";
static NSString * const kWPCustomStringRxRefillRequestSuccess = @"RxRefillRequestSuccess";


// Rx Refill Billing
static NSString * const kWPCustomStringRxRefillBillingMedicationLabel = @"RxRefillBillingMedicationLabel";
static NSString * const kWPCustomStringRxRefillBillingRenewLabel = @"RxRefillBillingRenewLabel";
static NSString * const kWPCustomStringRxRefillBillingPaymentTitle = @"RxRefillBillingPaymentTitle";

// Rx Refill Alerts
static NSString * const kWPCustomStringRxRefillDueAlertPatientSingle = @"RxRefillDueAlertPatientSingle";
static NSString * const kWPCustomStringRxRefillDueAlertPatientMultiple = @"RxRefillDueAlertPatientMultiple";
static NSString * const kWPCustomStringRxRefillDueAlertProxySingle = @"RxRefillDueAlertProxySingle";
static NSString * const kWPCustomStringRxRefillDueAlertProxyMultiple = @"RxRefillDueAlertProxyMultiple";

static NSString * const kWPCustomStringListSeparatorPrimary = @"ListSeparatorPrimary";
static NSString * const kWPCustomStringListSeparatorSecondary = @"ListSeparatorSecondary";
static NSString * const kWPCustomStringPCPIndicator = @"PCPIndicator";
static NSString * const kWPCustomStringECheckInKey = @"eCheckInName";
static NSString * const kWPCustomStringECheckInForInpatientKey = @"eCheckInNameForInpatient";
static NSString * const kWPCustomStringECheckInCompleteKey = @"eCheckInComplete";
static NSString * const kWPCustomStringECheckInCompleteDetailsKey = @"eCheckInCompleteDetails";
static NSString * const kWPCustomStringInpatientECheckInCompleteKey = @"InpatientEcheckInComplete";
static NSString * const kWPCustomStringConfirmApptDetailKey = @"AppointmentConfirmDetails";
static NSString * const kWPCustomStringRescheduleInstructionsKey = @"RescheduleInstructions";
static NSString * const kWPCutomStringExpiredPasswordTitle = @"ExpiredPasswordTitle";
static NSString * const kWPCustomStringPasswordResetTitle = @"PasswordResetTitle";
static NSString * const kWPCustomStringPasswordRequirements = @"PasswordRequirements";
static NSString * const kWPCustomStringEVisit = @"EVisitName";
static NSString * const kWPCustomStringSymptomChecker = @"SymptomChecker";
static NSString * const kWPCustomStringVidyoMicNotGrabbed = @"VidyoMicNotGrabbed";
static NSString * const kWPCustomStringMessages = @"Messages";

static NSString * const KWPCustomStringTestResultsPreText = @"TestResultsPreText";
static NSString * const KWPCustomStringTestResultsPostText = @"TestResultsPostText";
static NSString * const KWPCustomStringTestResults = @"TestResults";
static NSString * const KWPCustomStringShareEverywhere = @"ShareEverywhere";
static NSString * const KWPCustomStringToDo = @"ToDo";
static NSString * const KWPCustomStringMedications = @"Medications";

static NSString * const kWPCustomStringTestResultDetailDoctorsCommentHeader = @"DoctorsCommentHeader";

static NSString * const KWPCustomStringShareEverywhereAdditionalText = @"ShareEverywhereAdditionalText";
static NSString * const kWPCustomStringTestResultDetailFDIRowBody = @"TestResultDetailFDIRowBody";

static NSString * const kWPCustomStringMedicationsHospitalAdmissionBannerText = @"MedicationsHospitalAdmissionBannerText";
static NSString * const kWPCustomStringMedicationsHospitalAdmissionBannerProxyText = @"MedicationsHospitalAdmissionBannerProxyText";

static NSString * const KWPCustomStringAbnormalFlowsheetReadingAlert = @"AbnormalFlowsheetReadingAlertText";


static NSString * const kWPCustomStringNotAllowedToJoinVideoVisitMessage = @"NotAllowedToJoinVideoVisitMessage";
static NSString * const kWPCustomStringCannotJoinVideoVisitMessage = @"CannotJoinVideoVisitMessage";

static NSString * const kWPCustomStringDirectCancelWorkflowPreText = @"DirectCancelWorkflowPreText";
static NSString * const kWPCustomStringPersonalizePhotoDisclaimer = @"PersonalizePhotoDisclaimer";

// Strings that contain "patient"
static NSString * const kWPCustomStringSwitchPatients = @"SwitchPatients";
static NSString * const kWPCustomStringChooseDefaultPatient = @"ChooseDefaultPatient";
static NSString * const kWPCustomStringChangeDefaultPatient = @"ChangeDefaultPatient";
static NSString * const kWPCustomStringNoPatientAccess = @"NoPatientAccess";
static NSString * const kWPCustomStringGrantedPatientAccess = @"GrantedPatientAccess";
static NSString * const kWPCustomStringSelectPatientToView = @"SelectPatientToView";
static NSString * const kWPCustomStringSelectPatientToViewAccessibility = @"SelectPatientToViewAccessibility";

static NSString * const kWPCustomStringEmergencyPhoneNumber = @"EmergencyPhoneNumber";
static NSString * const kWPCustomStringCovidScreeningStatusLowRisk = @"CovidScreeningStatusLowRisk";
static NSString * const kWPCustomStringCovidScreeningStatusMediumRisk = @"CovidScreeningStatusMediumRisk";
static NSString * const kWPCustomStringCovidScreeningStatusHighRisk = @"CovidScreeningStatusHighRisk";
static NSString * const kWPCustomStringCovidPastScreeningStatusLowRisk = @"CovidPastScreeningStatusLowRisk";
static NSString * const kWPCustomStringCovidPastScreeningStatusMediumRisk = @"CovidPastScreeningStatusMediumRisk";
static NSString * const kWPCustomStringCovidPastScreeningStatusHighRisk = @"CovidPastScreeningStatusHighRisk";

static NSString * const kWPListSeparatorPrimary = @", ";
static NSString * const kWPBullet = @"•";
static NSString * const kWPEmptyBullet = @"◦";


@interface WPUtil_Strings : NSObject {

}

+(NSString*)customStringForKey:(NSString*)key;
+(NSString*)customStringForKey:(NSString*)key withDefaultValue:(NSString*)defaultValue;
+(NSString*)customStringForKey:(NSString*)key withDefaultValue:(NSString*)defaultValue withParameters:(NSDictionary*)parameters;


+(NSString*)customString:(enum PEOrganizationCustomString)customString withDefaultValue:(NSString*)defaultValue;
+(NSString*)customString:(enum PEOrganizationCustomString)customString withDefaultValue:(NSString*)defaultValue withParameters:(NSDictionary*)parameters;

+(NSString*)formatString:(NSString*)string withParameters:(NSDictionary*)parameters;

+(NSString*)customListSeparator;
+(BOOL)string:(NSString*)string containsString:(NSString*)substring;
+(void)addStringForKey:(NSString*)key withValue:(NSString *)value;
+(BOOL)stringContainsOnlyAllowedCharacters:(NSString*)string;

@end
