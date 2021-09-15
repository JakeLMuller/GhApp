//
//  WPPharmacy.h
//  iChart
//
//  Created by Chetan Satish on 1/22/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPPharmacyDeliveryMethod.h"

@interface WPPharmacy : WPObject

@property (nonatomic, strong) NSString *departmentID;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *hours;		//This is a free text. E.g. M-F 9:00AM-10:00PM
@property (nonatomic) BOOL isIntegrated;
@property (nonatomic, readonly) BOOL isUserEntered;
@property (nonatomic, strong) NSMutableArray *deliveryMethods;

- (instancetype)initUserEnteredPharmacyWithName:(NSString *)pharmacyName;
- (BOOL)supportsPickup;
- (BOOL)supportsMailOrDelivery;
- (BOOL)isEqualToPharmacy:(WPPharmacy *)pharmacy;

@end
