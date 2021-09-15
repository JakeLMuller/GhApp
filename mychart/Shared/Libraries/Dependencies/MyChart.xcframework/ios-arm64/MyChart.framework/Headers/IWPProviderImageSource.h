//
//  IWPProviderImageSource.h
//  MyChart
//
//  Created by Mike Epley on 5/5/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IWPCacheableImageSource.h"

@class WPOrganizationInfo;

/**
 * Interface for a model that serves as the source of a provider image that should be loaded via a web URL or from the BLOB.  Images loaded with this source will be cached.
 * Images can be loaded by providing a source to WPImageLoader.
 */
@protocol IWPProviderImageSource <IWPCacheableImageSource>

/**
 * The ID of the provider with an image represented by this source.
 *
 * @return The ID of a provider with an image
 */
- (NSString*)providerID;

/**
 * Indicates whether or not the image represented by this source may be loaded from the BLOB.
 *
 * @return Boolean indicating if a provider image can be loaded from the BLOB
 */
- (BOOL)hasProviderImageOnBlob;

/**
 * An instance of WPOrganizationInfo representing the organization that the provider image is from.
 *
 * @return WPOrganizationInfo representing the organization that the provider image is from
 */
- (WPOrganizationInfo*)organization;

@end
