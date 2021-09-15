//
//  WPMedication.h
//  MyChart
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPPharmacy.h"
#import "WPUtil_Xml.h"
#import "IWPProviderImageSource.h"
#import "WPOrganizationInfo.h"


//ORD 47330 - Willow AmbRx refill request status
typedef NS_ENUM(NSInteger, WPMedicationReportedType) {
	kWPMedReportedProvider = 1,
	kWPMedReportedPatient = 2,
} ;

typedef NS_ENUM(NSInteger, WPMedicationRefillStatus) {
    kWPMedRefillNew= 10,
    kWPMedRefillNeedsRx = 20,
    kWPMedRefillPendFill = 30,
    kWPMedRefillSent = 35,
    kWPMedRefillFillInitiated = 40,
    kWPMedRefillFilled = 50,
    kWPMedRefillFillRejected = 55,
    kWPMedRefillVerified = 60,
    kWPMedRefillReadyForDispense = 70,
    kWPMedRefillDispensed = 80,
} ;

typedef NS_ENUM(NSInteger, WPMedicationForm) {
    kWPMedicationFormUnknown = 0,
    kWPMedicationFormAerosol = 1,
    kWPMedicationFormAeroPowder = 2,
    kWPMedicationFormAeroSolution = 3,
    kWPMedicationFormInhaler = 29,
    kWPMedicationFormTablet = 55,
    kWPMedicationFormCapsuleDelayedRelease = 102,
    kWPMedicationFormCapsuleEntericCoatedParticles = 103,
    kWPMedicationFormCapsuleSprinkle = 104,
    kWPMedicationFormCapsuleSR12HR = 105,
    kWPMedicationFormCapsuleSR24HR = 106,
};


@interface WPUpdateInformation : WPObject

@property (nonatomic, strong) NSString *comments;
@property (nonatomic, strong) NSString *referenceID;
@property (nonatomic, strong) NSString *status;

@end

@interface WPPatientFriendlyName : WPObject
@property (nonatomic, strong) NSString *Caption;
@property (nonatomic, strong) NSString *CaptionType;
@property (nonatomic, strong) NSString *Text;

@end


@interface WPMedication : WPObject <IWPProviderImageSource>

@property (nonatomic, strong) NSString *productName;
@property (nonatomic, strong) NSString *commonBrandName;
@property (nonatomic, strong) NSString *dosageInfo;
@property (nonatomic, strong) NSString *instructions;
@property (nonatomic, strong) NSString *provider;
@property (nonatomic, strong) NSString *providerID;
@property (nonatomic, strong) NSString *providerPhotoURL;
@property (nonatomic, assign) BOOL hasProviderPhotoOnBlob;
@property (nonatomic, strong) NSString *refillsTotal;
@property (nonatomic, strong) NSString *refillsRemaining;
@property (nonatomic) BOOL expired;
@property (nonatomic, strong) NSString *prescriptionNumber;
@property (nonatomic, strong) WPPharmacy *pharmacy;
@property (nonatomic, strong) NSDate *startDate;
@property (nonatomic, strong) NSDate *endDate;
@property (nonatomic, strong) NSDate *orderingDate;
@property (nonatomic, strong) NSDate *discontinuedDate;
@property (nonatomic, strong) NSDate *expirationDate;
@property (nonatomic, strong) NSString *ndcCode;
@property (nonatomic, strong) NSString *genericProductIndicator;
@property (nonatomic) BOOL canRefill;
@property (nonatomic) BOOL isAnticoagOrder;
@property (nonatomic) BOOL ignoreFutureStartDate;
@property (nonatomic) BOOL hasPendingRefill;
@property (nonatomic) BOOL waitingForInsuranceAuthorization;
@property (nonatomic) WPMedicationRefillStatus refillPendingStatus;
@property (nonatomic) WPMedicationReportedType medicationReportedType;
@property (nonatomic, strong) NSString *lastUpdateInstant;
@property (nonatomic) BOOL hasPendingUpdate;
@property (nonatomic) BOOL possibleDuplicate;
@property (nonatomic, assign) WPMedicationForm form;
@property (nonatomic, strong) NSMutableArray *patientFriendlyName;
@property (nonatomic, strong) WPOrganizationInfo* organization;
@property (nonatomic, strong) NSString *mdlID;
@property (nonatomic, strong) NSString *mdlName;
@property (nonatomic, strong) NSString *shortName;


// Unused Properties
@property (nonatomic, strong) NSString *discreteRefillsRemaining;
@property (nonatomic, strong) NSString *fdbID;
@property (nonatomic, strong) NSString *lastDispenseDateISO;
@property (nonatomic, strong) NSString *lastDispenseQuantity;
@property (nonatomic, strong) NSString *mpiID;
@property (nonatomic, strong) NSString *nextDispenseDateISO;
@property (nonatomic, strong) NSString *quantity;
@property (nonatomic, strong) NSString *refillExpirationDateISO;
@property (nonatomic, strong) WPUpdateInformation *updateInformation;
@property (nonatomic)		  BOOL isPRN;
@property (nonatomic)		  BOOL isPartialFill;

+ (NSMutableDictionary *)getMedicationClassMap;
- (BOOL)hasFutureStartDate;
- (BOOL)isEqualToMedication:(WPMedication *)med;

@end
