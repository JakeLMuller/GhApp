//
//  IWPCacheableImageSource.h
//  MyChart
//
//  Created by Mike Epley on 5/5/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IWPImageSource.h"

/**
 * Protocol for a model that serves as the source of an image that should be loaded via a web URL.  Images loaded with this source will be cached.
 * Images can be loaded by providing a source to WPImageLoader.
 */
@protocol IWPCacheableImageSource <IWPImageSource>

/**
 * Gets the unique cache key the image represented by this source.
 *
 * @return A unique cache key for an image
 */
- (NSString*)imageCacheKey;

@end
