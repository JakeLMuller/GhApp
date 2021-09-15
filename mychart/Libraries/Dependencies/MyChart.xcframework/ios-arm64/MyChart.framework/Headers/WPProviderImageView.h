//
//  WPProviderImageView.h
//  MyChart
//
//  Created by Yash Vaka on 5/12/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "IWPImageLoaderDelegate.h"
#import "IWPProviderImageSource.h"

@class WPProvider;
@class WPMessageRecipient;

/**
 * View for displaying images for providers throughout MyChart Mobile.  Given a "source" object, this view will handle 
 * loading and displaying a provider image from a URL or the BLOB, falling back to a placeholder image as appropriate.
 */
@interface WPProviderImageView: UIImageView <IWPImageLoaderDelegate>

/**
 * Sets the image source and provider name for this WPProviderImageView instance.  Invoking this method will
 * kick off the image loading process.  If image loading fails for any reason, the provider name will be used
 * to create a fallback image.
 * @param source The provider image source to load an image with
 * @param providerName The name of the provider
 */
- (void)setProviderImageSource:(id <IWPProviderImageSource>)source providerName:(NSString*)providerName;

/**
 * Indicates whether or not loading for a provider image can even be attempted given a provider image source.
 * @param source The provider image source to load an image with
 * @return True IFF image loading can be attempted with the provider image source
 */
+ (BOOL)canLoadProviderImageWithSource:(id <IWPProviderImageSource>)source;

@end
