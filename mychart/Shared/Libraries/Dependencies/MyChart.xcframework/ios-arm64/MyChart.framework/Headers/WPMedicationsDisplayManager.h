//
//  WPMedicationsDisplayManager
//  iChart
//
//  Created by Ben Drda on 01/04/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  Revision History:
//    *jdumke 09/2014 329802 add accessibilityLabelWithWarning

@class WPMedication;

#import "WPPharmacy.h"
#import "WPMedicationForRefill.h"

@interface WPMedicationsDisplayManager : NSObject{

}

/*
 * Generates the main display name for the medication.
 */
+(NSString *)displayNameForMedication : (WPMedication *) medication;

/*
 * Generates a description, e.g., "(AMOXIL), 500 MG capsule", for the medication.
 */
+ (NSString *)descriptionFromMedication:(WPMedication *)medication;

/*
 * Generates refill text, e.g. "2 refills remaining", from the given medication.
 */
+ (NSAttributedString *)refillTextFromMedication:(WPMedication *)medication;

/*
 * @brief Generates refill status text, e.g. "Fill in Progress", from the given medication.
 * @param medication
 * @param showGenericText - whether to show the generic "Cannot Be Refilled" of "Request a Refill" text
 * @param refillsAllowed - Whether or not the user has security to refill medications
 */
+ (NSAttributedString *)refillStatusTextFromMedication:(WPMedication *)medication showGenericText:(BOOL)showGenericText refillsAllowed:(BOOL *)refillsAllowed isAdmittedForMedRefill:(BOOL)isAdmittedForMedRefill;

/*
 * Generates text for a given delivery method.
 */
+ (NSString *)textForDeliveryMethod:(PharmacyDeliveryMethod) method;

/*
 * Generates text for a given refillable medication, to display on the refill summary page.
 */
+ (NSAttributedString *)nameAndDosageTextForMedication:(WPMedication *) medication;

/*
 * Appends or Prepends a "Warning," phrase to an accessibility string
 */
+ (NSString *)accessibilityLabelWithWarning:(NSString *) accessibilityLabel asPrefix:(BOOL)asPrefix;

+ (UIImage *)medFormImageForMedication:(WPMedication *)medication;

+ (BOOL)isMedicationReadyForPickup:(WPMedication *)medication isAdmittedForMedRefill:(BOOL)isAdmittedForMedRefill;

/*
 * Construct taking instructions for the med. It will add a warning for anticoagulation order
 */
+ (NSString *) getMedInstructions:(WPMedication *)medication;

@end
