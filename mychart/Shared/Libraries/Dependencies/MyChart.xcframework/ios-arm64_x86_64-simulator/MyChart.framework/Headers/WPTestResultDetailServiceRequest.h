//
//  WPTestResultDetailServiceRequest.h
//  iChart
//
//  Created by Epic on 7/1/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPOrganizationInfo.h"

@class WPTestResultDetailServiceResponse;

/**
 * Service used to request details for a given test
 *
 */
@interface WPTestResultDetailServiceRequest : WPRequest {

}

@property (nonatomic,strong) NSString* testID;
@property (nonatomic,strong) WPOrganizationInfo *org;
@property (nonatomic,assign) BOOL evaluateH2GOnServer;
@property (nonatomic,assign) BOOL isTestIdEncrypted;


/**
 * Set the command string for a test
 *
 * @param idx the test id
 * @param dat the DAT on the test
 * @param organization where test is from
 *
 * @returns nothing
 * @sideeffects Sets the internal request string
 */
-(void)getDetailsForTest:(NSString *)idx withDAT:(NSString*)dat org:(WPOrganizationInfo*)org;

-(void)getDetailsForTest:(NSString *)idx withDAT:(NSString*)dat org:(WPOrganizationInfo*)org evaluateH2GOnServer:(BOOL)evaluateH2GOnServer isTestIdEncrypted:(BOOL)isTestIdEncrypted;

/**
 * Initialize
 */
-(id)init;

/**
 * @returns xml
 */
-(NSData *)XMLData;

/**
 * @returns a newly allocated WPTestResultDetailServiceResponse
 */
-(WPTestResultDetailServiceResponse*)allocResponse;

@end
