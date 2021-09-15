//
//  UIImage+WP.h
//  MyChart
//
//  Created by Chetan Satish on 1/22/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

@interface UIImage (WP)

/// Creates an image from the bundle
+ (UIImage *)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;
/**
 * Rescales the provided image using the specified width. This method will maintain the original aspect ratio.
 *
 * @param image The image to rescale
 * @param width The width to rescale the image to
 * @return A rescaled copy of the original image, with the original aspect ratio preserved.
 */
+ (UIImage *)rescaleImage:(UIImage *)image width:(CGFloat)width;

/**
 * Rescales the provided image using the specified height. This method will maintain the original aspect ratio.
 *
 * @param image The image to rescale
 * @param height The height to rescale the image to
 * @return A rescaled copy of the original image, with the original aspect ratio preserved.
 */
+ (UIImage *)rescaleImage:(UIImage *)image height:(CGFloat)height;

/**
 * Rescales the provided image using the specified desired size. This method will pick the best size based on the desired size that maintains the original aspect ratio.
 *
 * @param image The image to resize
 * @param size The desired size to resize the image to
 * @return A resized copy of the original image, with the original aspect ratio preserved.
 */
+ (UIImage *)rescaleImage:(UIImage *)image desiredSize:(CGSize)desiredSize;

/**
 * Resizes the provided image using the specified size. This method has no protections in place to retain the original aspect ratio.
 *
 * @param image The image to resize
 * @param size The size to resize the image to
 * @return A resized copy of the original image.
 */
+ (UIImage *)resizeImage:(UIImage *)image size:(CGSize)newSize;

// TODO: Document the below methods
+ (UIImage *)imageFromURL:(NSString *)urlString;
+ (UIImage *)imageFromURL:(NSString *)urlString desiredSize:(CGSize)desiredSize;
+ (UIImage *)springboardImageFromURL:(NSString *)urlString;
+ (UIImage *)imageFromColor:(UIColor *) color;
+ (UIImage *)imageForApplicationWithID:(NSString *)idString;
+ (UIImage *)squareImageFromImage:(UIImage *)image;
+ (UIImage *)imageFromText:(NSString *)text withSize:(CGSize)size backgroundColor:(UIColor *)backgroundColor foregroundColor:(UIColor *)foregroundColor;

- (UIImage *)getFixedOrientationImage;
- (UIImage *)grayscaleImage;


@end
