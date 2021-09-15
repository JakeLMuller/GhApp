//
//  WPMedicationForRefill.h
//  iChart
//
//  Created by Chetan Satish on 6/20/11.
//  Copyright © 2011-2021 Epic Sytems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//

@class WPMedication;
@class WPPharmacy;

//!!This is not a model class (Hence not inheriting from WPObject).!!
//Contains:
//  - Cell display data for medication refill list view
//  - Reference to medication object for orderID, lastUpdateIInstant and fillpharmacyID for refill 

@interface WPMedicationForRefill : NSObject

@property (nonatomic, strong) NSString *detailedText;
@property (nonatomic, strong) NSString *refillText;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, strong) NSString *refillComment;

@property (nonatomic, strong) WPMedication *medication;
@property (weak, nonatomic, readonly) NSString *name;
@property (weak, nonatomic, readonly) NSString *orderID;
@property (weak, nonatomic, readonly) NSString *lastUpdateInstant;
@property (weak, nonatomic, readonly) WPPharmacy *fillPharmacy;

- (instancetype)initWithMedication:(WPMedication *)medication;

@end
