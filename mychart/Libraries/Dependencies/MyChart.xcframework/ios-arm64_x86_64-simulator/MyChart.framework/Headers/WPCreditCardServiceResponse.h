//
//  WPCreditCardServiceResponse.h
//  iChart
//
//  Created by Jesse Dumke on 7/9/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPResponse.h"
#import "WPCreditCardsAndSettings.h"
#import <Foundation/Foundation.h>

@interface WPCreditCardServiceResponse : WPResponse {
    WPCreditCardsAndSettings *cardsAndSettings_;
}

@property (nonatomic, strong) WPCreditCardsAndSettings *cardsAndSettings;

@end
