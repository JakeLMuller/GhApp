//
//  WPCreditCard.h
//  iChart
//
//  Created by Jesse Dumke on 7/9/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 02/2015 354336 Fixing 64-bit errors

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPAddress.h"

//categories defined in I EVP 105
typedef NS_ENUM(NSInteger, CreditCardBrands) {
	kCreditCardBrandVisa = 1,
	kCreditCardBrandMasterCard = 2,
	kCreditCardBrandAmericanExpress = 3,
    kCreditCardBrandDiscover = 4,
    kCreditCardBrandDinersClub = 5,
    kCreditCardBrandOther = 6
} ;

@interface WPCreditCard : WPObject

@property (nonatomic, strong) NSString* paymentCardID;      //EVP - only for stored cards
@property (nonatomic, strong) NSString* cardHolderName;
@property (nonatomic, strong) NSString* lastFourDigits;
@property (nonatomic, strong) NSString* expirationMonth;
@property (nonatomic, strong) NSString* expirationYear;
@property (nonatomic, strong) NSString* securityCode;
@property (nonatomic, strong) WPCategory *brand;

@property (nonatomic, strong) NSString* number;             //for newly entered cards only
@property (nonatomic, strong) WPAddress* address;
@property (nonatomic) BOOL saveCard;

- (NSString *)getLastFourDigits;
- (BOOL)isEqualToCreditCard:(WPCreditCard *)object;

@end
