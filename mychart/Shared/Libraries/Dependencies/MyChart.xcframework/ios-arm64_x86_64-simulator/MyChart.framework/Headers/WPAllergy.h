//
//  WPAllergy.h
//  iChart
//
//  Created by Epic on 6/16/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *apallika 06/2017 478570 Add support for external organization info

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPUtil_Xml.h"
#import "WPOrganizationInfo.h"

typedef NS_ENUM(NSInteger, WPAllergenType) {
    kWPAllergenTypeUnknown = 0,
    kWPAllergenTypeSystemic = 1,
    kWPAllergenTypeDrugClass = 2,
    kWPAllergenTypeFood = 3,
    kWPAllergenTypeEnvironmental = 4,
    kWPAllergenTypeAnimal = 5,
    kWPAllergenTypePlant = 6,
    kWPAllergenTypeChemical = 7,
    kWPAllergenTypeDrugIngredient = 8,
    kWPAllergenTypeDrug = 9,
};

/*
 Allergy details
*/
@interface WPAllergy : WPObject <InlineEducationSourceProtocol>


@property(nonatomic, strong) NSDate * _Nullable date;
@property(nonatomic, strong) NSArray * _Nullable reactions;
@property(nonatomic, assign) WPAllergenType type;
@property(nonatomic, strong) NSMutableArray * _Nullable orgInfo;   //Holds an array of WPOrganizationInfo objects to account for
                                                        //deduplication where an allergy can come from >1 organization

//InlineEducationSourceProtocol
@property(nonatomic) BOOL hasInlineEducationSource;
@property(nonatomic, nonnull) NSString* getInlineEducationContextID;
@property(nonatomic) InlineEducationType getInlineEducationContext;
@property(nonatomic, nonnull) NSString* getInlineEducationSearchTerm;

- (BOOL) isExternal;
- (WPOrganizationInfo *_Nullable) getFirstOrg;
@end
