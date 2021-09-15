//
//  WPAuthenticationServiceResponse.h
//  iChart
//
//  Created by Adam on 6/8/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPAuthenticateResult.h"

@class WPUser;


/**
 * \breif Response information for Authentication
 *
 * XML deserialized to a credential object
 */
@interface WPAuthenticationServiceResponse : WPResponse

@property (nonatomic)			BOOL				isAuthCheck;    /**< If set to YES then the auto-auth code will NOT run and no ticket will be loaded */
@property (nonatomic, strong)	WPUser*				loggedInUser;   /**< WPUser object - contains user data including authentication details */
@property (nonatomic, strong)	NSString*			username;       /**< Added to ticket when constructed by loadFromXMLData */
@property (nonatomic, strong)	WPAuthenticateResult*	authResult; /**< Authentication result object */
@property (nonatomic)           BOOL                validationOnly;

/**
 * @param uname Name of the user who was just authenticated
 */
-(id)initWithUsername:(NSString*)uname;

@end
