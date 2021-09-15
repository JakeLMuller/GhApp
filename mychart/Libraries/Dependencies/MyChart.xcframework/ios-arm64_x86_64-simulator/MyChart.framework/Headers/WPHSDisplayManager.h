//
//  WPHSDisplayManager.h
//  iChart
//
//  Created by Ben Drda on 1/5/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *tgupta  09/2014 329241 Adding support for accessibility
//  *apallika 05/2017 478570 Adding support for external data

#import "WPHSSectionViewController.h"
#import "WPAllergy.h"

@class WPAllergy;
@class WPHealthIssue;
@class WPImmunization;

@interface WPHSDisplayManager : NSObject

+(NSString *)getDescriptionForAllergy:(WPAllergy *) allergy forAccessibility:(BOOL)isAccessibility;
+(NSString *)getDescriptionForHealthIssue:(WPHealthIssue *) healthIssue;
+(NSString *)getDescriptionForImmunization:(WPImmunization *) immunization;
+(NSString *)getAccessibilityLabelForTitle:(NSString *)title forSection:(ClinicalSectionType)sectionType;
+(NSString *)getAccessibilityLabelForTitle:(NSString *)title forSection:(ClinicalSectionType)sectionType withPatientName:(NSString*)patientName;
+(UIImage *)getImageForAllergyType:(WPAllergenType)type;
+(NSString *)getExternalDataLabelForAllergy: (WPAllergy *) allergy;
+(NSString *)getExternalDataLabelForHealthIssue: (WPHealthIssue *)healthIssue;
@end
