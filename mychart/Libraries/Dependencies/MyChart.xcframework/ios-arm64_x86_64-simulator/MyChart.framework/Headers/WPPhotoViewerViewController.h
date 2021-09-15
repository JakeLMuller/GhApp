//
//  WPPhotoViewerViewController.h
//  MyChart
//
//  Created by Yash Vaka on 10/2/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPShareViewController.h"

@interface WPPhotoViewerViewController : WPViewController <UIScrollViewDelegate, WPShareDelegate>

- (instancetype)initWithImage:(UIImage *)image;
- (instancetype)initWithImage:(NSData *)imageData allowShare:(BOOL)allowShare isPatientDocument:(BOOL)isPatientDocument withName:(NSString *)imageName dcsID:(NSString *)dcsID extension:(NSString *)imageExtension;

@end

