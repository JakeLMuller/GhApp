//
//  WPPharmacyDeliveryMethod.h
//  iChart
//
//  Created by Jesse Dumke on 8/31/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import "WPObject.h"

//NOTE: This is a WPObject; the method type is stored in the .ID property.

typedef NS_ENUM(NSInteger, PharmacyDeliveryMethod) {
    kWPPharmacyDeliveryMethodPickup = 1,
    kWPPharmacyDeliveryMethodMailOrder = 2,
    kWPPharmacyDeliveryMethodCourier = 3
} ;

typedef NS_ENUM(NSInteger, PharmacyPaymentMethod) {
    kWPPharmacyPaymentMethodCreditCard = 2
} ;

@interface WPPharmacyDeliveryMethod : WPObject {    
    NSMutableArray *paymentMethods_;  
    PharmacyDeliveryMethod type_;
}

@property (nonatomic,strong) NSMutableArray *paymentMethods;
@property (nonatomic) PharmacyDeliveryMethod type;

@end
