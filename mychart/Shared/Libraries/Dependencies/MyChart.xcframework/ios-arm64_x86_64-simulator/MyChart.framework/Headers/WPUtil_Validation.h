//
//  WPUtil_Validation.h
//  iChart
//
//  Created by Jesse Dumke on 10/16/12.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPCreditCard.h"
#import "WPViewController.h"

@interface WPUtil_Validation : NSObject

+ (BOOL)validateEmail: (NSString *)email;
+ (BOOL)validatePhoneNumber: (NSString *)phoneNumber DEPRECATED_ATTRIBUTE; //Phone number validation should happen on the server
+ (BOOL)validateCreditCardNumber:(NSString *)number allowedBrands:(NSMutableArray *)brands;
+ (BOOL)validateExpirationDate:(NSInteger)year month:(NSInteger)month;
+ (BOOL)passLuhnCheck:(NSString *)number;
+ (BOOL)brandIsAllowed:(CreditCardBrands)brand allowedBrands:(NSMutableArray *)brands;
+ (WPCategory *)getBrandCategoryFromNumber: (NSString *)number allowedBrands:(NSMutableArray *)brands;
+ (CreditCardBrands)getCardBrand:(NSString *)number;
+ (BOOL)checkOnlyAllowedCharactersForString:(NSString *)string inViewController:(UIViewController *)viewController;

@end
