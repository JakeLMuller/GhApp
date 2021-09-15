//
//  WPAuthenticationServiceRequest.h
//  iChart
//
//  Created by Adam on 6/8/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPUser;
@class WPAuthenticationServiceResponse;

/**
 * \brief Authentication Server Request
 *
 * Used to authenticate to a remote server <br />
 * This Request posts: <ul>
 * <li>Username</li>
 * <li>Password</li>
 * </ul>
 */
@interface WPAuthenticationServiceRequest : WPRequest

/**
 * This auth ticket is NOT the same as WPRequest's ticket ivar. In particualr,
 * the 'ticket' ivar is automatically used to authenticate a request - we don't want
 * this request to be authenticated.
 */
@property (nonatomic,strong)	NSString*	username;
@property (nonatomic,strong)	NSString*	password;
@property (nonatomic,strong)    NSString*   websiteName;
@property (nonatomic, strong)   NSString*   deviceID;
@property (nonatomic,assign)	BOOL		reauth;
@property (nonatomic,assign)	BOOL        validationOnly;

/**
 * Initialize this object
 * By deafult this request:
 * <ul>
 * <li>Can NOT persist data</li>
 * <li>Is NOT Mostly Static</li>
 * <li>Does NOT need live data</li>
 * </ul>
 *
 * This object's response is saved automatically to the authentication
 * static variable. Also note that most of the static/live requests will
 * be handled by external machinery
 *
 * @param username Username to log in with
 * @param password Password to log with
 */
-(id)initWithUsername:(NSString*)username password:(NSString*)password deviceID:(NSString *)deviceID websiteName:(NSString *)websiteName;

/**
 * XML Body with username and password
 *
 * @return nil
 */
-(NSData *)XMLData;

/**
 * Allocate a new Response object for this request
 * 
 * @return An AuthenticationServiceResponse 
 */
-(WPAuthenticationServiceResponse*)allocResponse;

/**
 * Writes the screen size data to a writer
 */
+ (void)writeScreenSize:(EFXmlWriter*)writer;

@end
