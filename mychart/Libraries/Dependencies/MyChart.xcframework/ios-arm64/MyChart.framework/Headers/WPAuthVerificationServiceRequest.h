//
//  WPAuthVerificationServiceRequest.h
//  iChart
//
//  Created by Epic on 10/21/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPUser;
@class WPAuthenticationServiceResponse;

/**
 * \brief Attempt to verify that the given ticket
 * is valid
 */
@interface WPAuthVerificationServiceRequest : WPRequest {
}

/*!
 @brief init disabled because model objects are required
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 * Initialize this object
 * By deafult this request:
 *
 * This object's response is saved automatically to the authentication
 * static variable. Also note that most of the static/live requests will
 * be handled by external machinery
 *
 * @param reqUser - the WPUser to verify
 */
-(instancetype)initWithCredential:(WPUser*)reqUser;

/**
 * Allocate a new Response object for this request
 * 
 * @return An WPAuthenticationServiceResponse 
 */
-(WPAuthenticationServiceResponse*)allocResponse;



@end
