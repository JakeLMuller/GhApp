//
//  WPGetOrganizationsWithAccessToFeatureRequest.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 5/8/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//
#import "WPRequest.h"

@class WPGetOrganizationsWithAccessToFeatureRequest;

@interface WPGetOrganizationsWithAccessToFeatureRequest : WPRequest

@property (nonatomic, strong) NSString* feature;

-(id)initWithFeature:(NSString *)feature;

/**
 * XML Body
 */
-(NSData *)XMLData;

/**
 * Allocate a new Response object for this request
 *
 * @return An AuthenticationServiceResponse
 */
-(WPGetOrganizationsWithAccessToFeatureRequest*)allocResponse;

@end
