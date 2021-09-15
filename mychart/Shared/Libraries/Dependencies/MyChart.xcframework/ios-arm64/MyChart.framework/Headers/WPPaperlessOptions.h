//
//  WPPaperlessOptions.h
//  iChart
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPAccountSummary.h"     //PaperlessStatus is defined here

@interface WPPaperlessOptions : WPObject {
    PaperlessStatus paperlessStatus_;
    NSString *patientEmail_;
    NSString *patientPhone_;
    
    BOOL ticklerSignUpRequired_;    //whether the user must sign up for ticklers in order to go paperless
    BOOL isEmailAllowed_;           //whether the user is able to sign up to receive e-mail ticklers
    BOOL isPhoneAllowed_;           //whether they can receive SMS ticklers
    BOOL signupForEmail_;           //whether the user is signing up for e-mail ticklers
    BOOL signupForMobile_;          //whether the user is signing up for mobile ticklers
}

@property (nonatomic) PaperlessStatus paperlessStatus;
@property (nonatomic, strong) NSString *patientEmail;
@property (nonatomic, strong) NSString *patientPhone;
@property (nonatomic) BOOL ticklerSignUpRequired;
@property (nonatomic) BOOL isEmailAllowed;
@property (nonatomic) BOOL isPhoneAllowed;
@property (nonatomic) BOOL signupForEmail;
@property (nonatomic) BOOL signupForMobile;

@end
