//
//  WPImageCache.h
//  MyChart
//
//  Created by Mike Epley on 5/5/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPOrganizationInfo.h"

/**
 * Represents a cache specifically designed to store and retrieve images (UIImage objects) with associated image cache keys.
 */
@interface WPImageCache : NSObject

/**
 * Gets an image from the cache with the provided key, if one exists.
 *
 * @param key The cache key for the image
 * @return The cached image, or NIL if there is no image cached for the provided key
 */
+ (UIImage*)cachedImageWithKey:(NSString*)key;

/**
 * Put an image in the cache and maps it to the provided key.  Will overwrite any existing image already cached with the key.
 *
 * @param image The image to put in cache
 * @param key The cache key for the image
 */
+ (void)putImage:(UIImage*)image withKey:(NSString*)key;

/**
 * Indicates whether or not an image is cached with the provided key.
 *
 * @param key The cache key for the image
 * @return True IFF the cache contains an image for the provided key
 */
+ (BOOL)hasImageCachedWithKey:(NSString*)key;

/**
 * Returns a unique cache key for an image identified in part by the the image URL.
 *
 * @param url the image URL
 * @return A unique cache for an image
 */
+ (NSString*)imageCacheKeyWithURL:(NSString*)url;

/**
 * Returns a unique cache key for a provider image identified in part by the provider ID.
 *
 * @param providerID the ID for the provider that the image represents
 * @param organization the WPOrganizationInfo object representing the organization that the provider belongs to
 * @return A unique cache key for a provider image
 */
+ (NSString*)providerImageCacheKeyWithID:(NSString*)providerID organization:(WPOrganizationInfo*)organization;

@end
