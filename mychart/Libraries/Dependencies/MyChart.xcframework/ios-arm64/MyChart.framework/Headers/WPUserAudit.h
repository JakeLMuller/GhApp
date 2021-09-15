//
//  WPUserAudit.h
//  iChart
//
//  Created by Chetan Satish on 10/5/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
// *mflatau 307439 adding audit items for SetStreamingStatus for Telemedicine conferences
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "EFXmlWriter.h"

typedef NS_ENUM(NSInteger, CommandActions) {
	Get=1,
	Put=2,
} ;

typedef NS_ENUM(NSInteger, WLogType) {
	WLogTypeDoNotLog = -1,
	WLogTypeOther = 0,
	WLogTypeLogin = 1,
	WLogTypeMedication = 2,
	WLogTypeAllergies = 3,
	WLogTypeLabResults = 4,
	WLogTypeImmunizations = 5,
	WLogTypeHealthMaintenance = 6,
	WLogTypeHealthSnapshot = 7,
	WLogTypeHistories = 8,
	WLogTypeEncounterReview = 9,
	WLogTypeDemographics = 10,
	WLogTypeProblemList = 11,
	WLogTypeAppointmentReview = 12,
	WLogTypeAccountInquiry = 13,
	WLogTypeMessaging = 14,
	WLogTypeReferralReview = 15,
	WLogTypeWalletCard = 16,
	WLogTypeInsurance = 17,
	WLogTypeAuditTrail = 18,
	WLogTypeChangePassword = 19,
	WLogTypeLogout = 20,
	WLogTypePatientNotes = 21,
	WLogTypeTermsandConditions = 22,
	WLogTypeAccountPayment = 23,
	WlogTypeAppointmentSchedule = 24,
	WLogTypeAppointmentAutoschedule = 25,
	WLogTypeAppointmentCancel = 26,
	WLogTypeAppointmentConfirm = 27,
	WLogTypeClassesReview = 28,
	WLogTypeClassesSchedule = 29,
	WLogTypeReferralRequest = 30,
	WLogTypeCustomerServiceRequest = 31,
	WLogTypeMedicalAdviceRequest = 32,
	WLogTypeMedicationRenewalRequest = 33,
	WLogTypeHealthMaintenanceSchedule = 34,
	WLogTypeAddressChangeRequest = 35,
	WLogTypeContextRelavancy = 36,
	WLogTypeProviderSearch = 37,
	WLogTypeProviderDetails = 38,
	WLogTypeDrivingDirections = 39,
	WLogTypeRecentPayments = 40,
	WLogTypeLabTests = 41,
	WLogTypeAccountDetails = 42,
	WLogTypeBenefitDetails = 43,
	WLogTypeAppointmentDetails = 44,
	WLogTypeEncounterDetails = 45,
	WLogTypePHRAllergies = 46,
	WLogTypePHRHealthissues = 47,
	WLogTypePHRImmunizations = 48,
	WLogTypePHRInsurance = 49,
	WLogTypePHRMeds = 50,
	WLogTypePHRProviders = 51,
	WLogTypeClaims = 52,
	WLogTypeEligibility = 53,
	WLogTypeCCLIST = 54,
	WLogTypeCCCSummary = 55,
	WLogTypeCRMSummary = 56,
	WLogTypePatPrefs = 57,
	WLogTypeProfileReview = 58,
	WLogTypeProfileChange = 59,
	WLogTypeGlucoList = 60,
	WLogTypeGlucoMeter = 61,
	WLogTypePatientReport = 62,
	WLogTypeLetters = 63,
	WLogTypePrefsUpdate = 64,
	WLogTypePasswordHint = 65,
	WLogTypeIPAdmissions = 66,
	WLogTypeProxyAccess = 67,
	WLogTypeSwitchContext = 68,
	WLogTypeRevokeProxyAccess = 69,
	WLogTypeProxySignup = 70,
	WLogTypeAccountSignup = 71,
	WLogTypeAccountSignupForProxyUse = 72,
	WLogTypeHBAccountDetails = 74,
	WLogTypeHospitalAccountDetails = 75,
	WLogTypeHospitalStatementDetails = 76,
	WLogTypeResultComponentGraphing = 77,
	WLogTypeFlowsheetReportsList = 78,
	WLogTypeFlowsheetReportDetail = 79,
	WLogTypeCoverageView = 80,
	WLogTypePasswordResetQuesAns = 81,
	WLogTypeHistoryQuestionnaire = 82,
	WLogTypePatientEnteredFlowsheet = 83,
	WLogTypePBStatementDetails = 84,
	WLogTypeHealthPlanAccessControl = 85,
	WLogTypeHealthPlanAddDep = 86,
	WLogTypeHealthPlanTermDep = 87,
	WLogTypeHealthPlanTermCvg = 88,
	WLogTypeHealthPlanOpenEnrollApplication = 89,
	WLogTypeHealthPlanRequest = 90,
	WLogTypeHealthPlandetail = 91,
	WLogTypeHealthPlanSelectPeriod = 92,
	wLogTypeHealthPlanSelectApplication = 93,
	WLogTypeHealthPlanChgAddr = 94,
	WLogTypeHealthPlanChgPCP = 95,
	WLogTypeHealthPlanMemDemog = 96,
	WLogTypeViewTicketList = 97,
	WLogTypeAppointmentDirCancel = 98,
	WLogTypeQuestionnaire = 99,
	WLogTypeViewScan = 101,
	WLogTypeProxyEnter = 102,
	WLogTypeProxyExit = 103,
	WLogTypeGetPCP = 104,
	WLogTypeEVisitPayment = 105,
	WLogTypeGrowthChart = 106,
	WLogTypeCopayPayment = 107,
	WLogTypePatInitQuestionnaire = 108,
	WLogTypeEVisit = 109,
	WLogTypeCreditCardManagement = 110,
	WLogTypeAlertsRetrievedByRemoteSystem = 111,
	WLogTypeLoginFromRemoteSystem = 112,
	WLogTypeRemoteCharts = 113,
	WLogTypeSwitchToRemoteSite = 114,
	WLogTypeDownloadCCD = 115,
	WLogTypeCreateExternalLink = 116,
	WLogTypeRemoveExternalLink = 117,
	WLogTypeSendDocumentToRemoteSystem = 118,
	WLogTypeUpdateInsurance = 119,
	WLogTypeUpdateAllergies = 120,
	WLogTypeUpdateMedications = 121,
	WLogTypeUpdateProblems = 122,
    WLogTypeSetStreamingStatus= 145,
    WLogTypeViewDocument = 184,
    WLogTypeDeclineTermsAndConditions = 246,
} ;

@interface WPUserAudit : WPObject {
	NSString*		accountID;
	NSDate*			timeStamp;			
	CommandActions	action;
	WLogType		logType;
	NSString*		comment;
}

@property (nonatomic,strong) NSString*	accountID;
@property (nonatomic,strong) NSDate*	timeStamp;
@property (nonatomic) CommandActions	action;
@property (nonatomic) WLogType			logType;
@property (nonatomic,strong) NSString*	comment;

- (id) initWithAccountID: (NSString *)acctID andLogType: (WLogType)lType andCommandAction: (CommandActions)cmdAction andComment:(NSString *)cmt;
- (void)writeXML:(EFXmlWriter *)xmlWriter;

@end
