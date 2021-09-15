//
//  IWPImageLoaderDelegate.h
//  MyChart
//
//  Created by Mike Epley on 5/5/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IWPImageSource.h"

/**
 * Delegate protocol for loading images via the WPImageLoader.
 * Callers should implement this protocol to receive the requested image or to be notified when image loading fails.
 */
@protocol IWPImageLoaderDelegate <NSObject>

/**
 * Delegate method that's invoked by WPImageLoader when an image is successfully loaded with a given source.
 *
 * @param image The image that was loaded successfully
 * @param source The source used to load the image
 */
- (void)didLoadImage:(UIImage*)image fromSource:(id <IWPImageSource>)source;

/**
 * Listener method that's invoked by WPImageLoader when an image cannot be loaded with a given source.
 *
 * @param source The source that was used to try and load the image
 */
- (void)didFailToLoadImageFromSource:(id <IWPImageSource>)source;

@end
