//
//  WPPaymentServiceResult.h
//  iChart
//
//  Created by Jesse Dumke on 7/20/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

typedef NS_ENUM(NSInteger, WPPaymentResultCode) {
    kWPPaymentResultCodeSuccess = 1,
    kWPPaymentResultCodeDeclined = 2,
    kWPPaymentResultCodeTransactionSuccessButPostingFailed = 101,   //credit card was charged, but payment posting to Resolute failed
    kWPPaymentResultCodeTransactionSuccessSaveCardFailed = 102,
} ;

#import "WPObject.h"
#import "WPStoreCardResult.h"

@interface WPPaymentServiceResult : WPObject

@property (nonatomic, strong) NSMutableString* amount;
@property (nonatomic, strong) NSMutableString* authorizationCode;
@property (nonatomic) WPPaymentResultCode resultCode;
@property (nonatomic, strong) NSMutableString* resultMessage;
@property (nonatomic, strong) WPStoreCardResult* storeCardResponse;
@property (nonatomic, strong) NSMutableString* transactionId;

@end
