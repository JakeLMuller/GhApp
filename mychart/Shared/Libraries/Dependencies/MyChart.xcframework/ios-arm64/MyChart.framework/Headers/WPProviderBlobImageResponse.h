//
//  WPProviderBlobImageResponse.h
//  MyChart
//
//  Created by Mike Epley on 5/9/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

/**
 * Object representing a response from the web service to retrieve a provider photo from the BLOB.
 */
@interface WPProviderBlobImageResponse : WPResponse

/**
 * Returns the provider image represented by this response object.
 *
 * @return The provider image from this response as a UIImage
 */
- (UIImage *)providerImage;

@end


