//
//  WPCreditCardsAndSettings.h
//  iChart
//
//  Created by Jesse Dumke on 8/2/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPCategory.h"
#import "WPCreditCard.h"

@interface WPCreditCardsAndSettings : WPObject {
    NSMutableArray *creditCards_;       //contains array of WPCreditCard objects
    NSMutableArray *brands_;            //contains array of WPCategory objects
    BOOL requireSecurityCode_;
    BOOL allowSavingCards_;
}

@property (nonatomic, strong) NSMutableArray *cards;
@property (nonatomic, strong) NSMutableArray *brands;
@property (nonatomic) BOOL requireSecurityCode;
@property (nonatomic) BOOL allowSavingCards;

@end

