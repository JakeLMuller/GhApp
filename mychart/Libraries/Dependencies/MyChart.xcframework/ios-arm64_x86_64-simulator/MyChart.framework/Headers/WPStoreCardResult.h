//
//  WPStoreCardResult.h
//  iChart
//
//  Created by Jesse Dumke on 7/20/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

typedef NS_ENUM(NSInteger, StoreCardResultCodes) {
    kStoreCardFailure = 0,
	kStoreCardSuccess = 1
} ;

#import "WPObject.h"

@interface WPStoreCardResult : WPObject {
    StoreCardResultCodes resultCode_;
}

@property (nonatomic) StoreCardResultCodes resultCode;

@end
