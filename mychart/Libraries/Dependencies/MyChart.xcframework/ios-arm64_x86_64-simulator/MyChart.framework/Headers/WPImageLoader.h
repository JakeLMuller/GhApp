//
//  WPImageLoader.h
//  MyChart
//
//  Created by Mike Epley on 5/5/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IWPImageLoaderDelegate.h"
#import "IWPImageSource.h"
#import "IWPCacheableImageSource.h"
#import "IWPProviderImageSource.h"

/**
 * Class for loading images.  All image loading should be channeled through this class.
 */
@interface WPImageLoader : NSObject

/**
 * Loads an image with the provided IWPImageSource object.  The provided IWPImageLoaderDelegate will be notified
 * when the image is loaded successfully or when image loading fails for any reason.
 *
 * @param source The source to load an image with
 * @param delegate The delegate to notify on completion/failure
 */
+ (void)loadImageWithSource:(id <IWPImageSource>)source delegate:(id <IWPImageLoaderDelegate>)delegate;

/**
 * Loads and caches an image with the provided IWPCacheableImageSource object.  The provided IWPImageLoaderDelegate will be notified
 * when the image is loaded successfully or when image loading fails for any reason.  Images will be loaded from cache before retrieving
 * them over the network whenever possible.
 *
 * @param source The source to load an image with
 * @param delegate The delegate to notify on completion/failure
 */
+ (void)loadCacheableImageWithSource:(id <IWPCacheableImageSource>)source delegate:(id <IWPImageLoaderDelegate>)delegate;

/**
 * Loads and caches a provider image with the provided IWPProviderImageSource object.  The provided IWPImageLoaderDelegate will be notified
 * when the image is loaded successfully or when image loading fails for any reason.  Images will be loaded from cache before retrieving
 * them over the network whenever possible.
 *
 * @param source The source to load an image with
 * @param delegate The delegate to notify on completion/failure
 */
+ (void)loadProviderImageWithSource:(id <IWPProviderImageSource>)source delegate:(id <IWPImageLoaderDelegate>)delegate;

/**
 * Indicates whether or not loading for an image can even be attempted given the provided source.
 *
 * @param source The source to load an image with
 * @return True IFF image loading can be attempted with the provided source
 */
+ (BOOL)canLoadImageWithSource:(id <IWPImageSource>)source;

@end
