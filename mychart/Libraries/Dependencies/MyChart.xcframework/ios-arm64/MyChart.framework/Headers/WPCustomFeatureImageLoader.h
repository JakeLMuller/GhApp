//
//  WPCustomFeatureImageLoader
//  MyChart
//
//  Created by Kyle Wu on 9/12/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IWPImageLoaderDelegate.h"
#import "WPCustomFeature.h"

@protocol IWPFeatureImageLoaderDelegate <NSObject>
//Called after all images have been loaded for the provided features
- (void) onImageLoadingComplete;
@end

@interface WPCustomFeatureImageLoader : NSObject

// if all image is loaded
@property (nonatomic, readonly) BOOL imageLoadingComplete;

// For a list of features, load their images from the given url
- (void)getImagesForFeatures:(NSArray <WPCustomFeature*> *)features keepOriginalColor:(BOOL) keepColor withDelegate:(id <IWPFeatureImageLoaderDelegate>)delegate;
@end
