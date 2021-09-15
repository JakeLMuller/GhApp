//
//  WPRequest.h
//  iChart
//
//  Created by Adam Hinz on 6/2/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish 1/11 196219 Removed default server address. It's now part of patient object.
//  *jdumke  5/13 267616 Added kWPServiceNamespace2013
//  *mflatau 1/2014 282432 Added execute external SOAP
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 07/2014 322012 support 2014 namespace
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM
//  *mrangwal 10/2016 447965 Migrating from NSURLConnection to NSURLSession

#import <Foundation/Foundation.h>
#import "WPUser.h"
#import "WPResponse.h"
#import "WPUtil_Strings.h"
 
typedef NS_ENUM(NSInteger, WPServiceNamespace) {
	kWPServiceNamespaceUndefined,
	kWPServiceNamespace2010,
	kWPServiceNamespace2011,
    kWPServiceNamespace2012,
    kWPServiceNamespace2013,
    kWPServiceNamespace2014,
    kWPServiceNamespace2015,
    kWPServiceNamespace2016,
    kWPServiceNamespace2017,
    kWPServiceNamespace2018,
    kWPServiceNamespace2019,
} ;

typedef NS_ENUM(NSInteger, WPRequestType) {
    kWPRequestTypeInternal,
    kWPRequestTypeExternalSOAP,
} ;

/**
 * \brief Encapsulates all information to execute a remote service request
 *
 * Parent class for outgoing service requests
 *
 * A Request object encapsulates all of the data required to access a service
 * on a remote machine.
 * 
 * A Request is sent to the EpicExternalServices and an appropriate response
 * object is returned.
 *
 *
 * @see WPResponse
 */
@interface WPRequest : NSMutableURLRequest

@property (nonatomic,strong)	WPUser*				user;			/**< Requesting user */
@property (nonatomic,strong)	NSString*			address;		/**< Address of the remote webserver */
@property (nonatomic,strong)	NSString*			command;		/**< Name of the command to call (i.e. getMeds) */
@property (nonatomic,strong)	NSString*			alertTitle;		/** Alert title, if shown. default is */

@property (nonatomic,assign)	Class			responseClass;
@property (nonatomic)			BOOL			dontExecuteOnMainThread;	/** Prevents ExtSrvCtrlr from executing on the main thread */
@property (nonatomic)			BOOL			isPatientContext;			/** Should patient index be prepended in the request? */
@property (nonatomic)			BOOL			showAlertOnNilResponse;     /** If response is nil then alert  */

@property (nonatomic, assign)   WPServiceNamespace serviceNamespace;
@property (nonatomic, assign)   WPRequestType requestType;

@property (nonatomic,strong)    NSHTTPURLResponse       *httpResponse;   //assumes that we always communicate over HTTP
@property (nonatomic,strong)    NSMutableData           *receivedData;
@property (nonatomic, strong)   NSURLSessionDataTask    *task;

/**
 * The delegate must respond to:
 * didCompleteRequest:withResponse:
 *
 * @see WPResponse
 */
@property (nonatomic,weak)      id				target;		/**< Delegate to receive a callback when the request object has completed */
@property (nonatomic)			SEL				action;		/**< Selector to execute */
@property (nonatomic, strong)   void            (^callback)(WPResponse *response); //If no target or action try the callback (works with static functions)

/**
 * Return the XML Body for this request
 *
 * @return String of XML to forward to the server
 *
 * This method is ABSTRACT and must be overriden
 */
-(NSData *)XMLData;

/**
 * Allocate a new Response object for this request
 * 
 * @return Response object representing this request 
 *
 */
-(WPResponse*)allocResponse;
-(NSString *)command;
-(void)execute;
-(void)cancelRequest;
-(void)callBackWithResponse:(WPResponse*)completedResponse;
-(void)showError;
-(void)queueUpInternalExecute;
-(void)executeQueuedUpInternal;

/**
 * Get the user agent string (contains device information)
 * @return the user agent string
 */
+ (NSString *)getUserAgent;
@end
