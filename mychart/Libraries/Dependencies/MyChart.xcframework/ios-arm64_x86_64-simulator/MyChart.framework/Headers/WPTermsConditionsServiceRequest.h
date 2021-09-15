//
//  WPTermsConditionsServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 11/10/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
// *mflatau 09/2015 376566 Adding WP prefix to terms type

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPLoginErrors.h"

@class TermsConditionsServiceResponse;

@interface WPTermsConditionsServiceRequest : WPRequest {

}

- (instancetype)initWithTermsType:(WPTermsType)termsType locale:(NSString *)locale;
-(TermsConditionsServiceResponse*)allocResponse;

@end
