//
//  WPResponse.h
//  iChart
//
//  Created by Adam Hinz on 6/2/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.

#import <Foundation/Foundation.h>
#import "WPOrganizationInfo.h"

@class WPRequest;

//No claim to be complete, just a place to put them for now and make sure we have 200 (OK)
typedef NS_ENUM(NSInteger, HttpStatusCode) {	
	HttpStatusCodeOK=200,
	HttpStatusCodeNotFound=404,
} ;


/**
 * \brief Contains information encapsulating the response for a given WPRequest. 
 *
 * A Response object is an abstract class that represents the Response from
 * a web service. A Response object is generally allocated from the corresponding
 * WPRequest.
 *
 * @see WPRequest
 */
@interface WPResponse : NSObject {
	WPRequest*			_request;		/**< The request object that this is responding to */
	NSDate*				_timestamp;		/**< Time that this response was generated */
	NSError*			_error;			/**< Error that occured, or nil if everything is okay 
										 * Could be URL error or could be XML parsing error */
	NSHTTPURLResponse*	_httpResponse;
	
	BOOL didLoadLiveData;		/**< YES if the data came from a web service, NO else */
	BOOL didLoadLocalData;		/**< YES if the data came from local storage, NO else */

	BOOL doNotRequeueInvalidRequest;
}

@property (nonatomic,strong, nullable)	WPRequest*			request;
@property (nonatomic,strong, nullable)	NSDate*				timestamp;
@property (nonatomic,strong, nullable)	NSError*			error;
@property (nonatomic,strong, nullable)	NSHTTPURLResponse*	httpResponse;

@property (nonatomic)	BOOL doNotRequeueInvalidRequest;
/**
 * While didLoadLiveData and didLoadLocalData can both bo NO (in the case of an error)
 * they will never both be YES
 */
@property (nonatomic) BOOL didLoadLiveData;

/**
 * While didLoadLiveData and didLoadLocalData can both bo NO (in the case of an error)
 * they will never both be YES
 */
@property (nonatomic) BOOL didLoadLocalData;


@property (nonatomic,readonly) BOOL isOK;  //Was the response 'ok', is the response code in the 200s

/**
 * Indicate if there's at least one valid refreshable organization for the invoked service
 */
@property (nonatomic) BOOL hasRefreshableOrganizationLink;

// Property to store the list of organizations along with their statuses for Happy Together
@property (nonatomic,strong, nullable) NSMutableArray* organizations;
/**
 * Load the data from the XML data that was retrived from the server
 *
 * @param xml The XML server data
 *
 * This method is ABSTRACT and must be overridden
 */
-(void)loadFromXMLData:(nullable NSData*)xml;

// Function to get the list of failed organizations for Happy Together
-(nullable NSMutableArray*)getFailedOrganizations;

// Given an organization, did we receive information from the organization or not?
-(BOOL)isConnectionFailedForOrg:(nullable WPOrganizationInfo*) org;

@end
