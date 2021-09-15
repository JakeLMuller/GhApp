//
//  WPProviderBlobImageRequest.h
//  MyChart
//
//  Created by Mike Epley on 5/9/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPProviderBlobImageResponse.h"
#import "WPOrganizationInfo.h"

/**
 * Object representing a request for the web service to retrieve a provider photo from the BLOB.
 */
@interface WPProviderBlobImageRequest : WPRequest

/**
 * Initializes an instance of WPProviderBlobImageRequest with the specified provider ID and organization.
 *
 * @param providerID the provider ID for this request
 * @param organization instance of WPOrganizationInfo representing the organization the provider belongs to
 */
- (instancetype)initWithProviderID:(NSString *)providerID organization:(WPOrganizationInfo *)organization;

@end
