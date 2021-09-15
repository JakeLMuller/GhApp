//
//  WPAttachmentSettings.h
//  iChart
//
//  Created by Chetan Satish on 7/1/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPAttachmentSettings : WPObject {
	NSInteger _maximumAllowed;			//maximum number of attachments allowed
	NSInteger _maximumImageSize;			//maximum allowed image size in KB
	NSInteger _maximumVideoSize;			//maximum allowed video size in KB
	
	NSArray *_allowedImageExtensions;	//list of allowed image extensions
	NSArray *_allowedVideoExtensions;	//list of allowed video extensions
}

@property (nonatomic, assign) NSInteger maximumAllowed;
@property (nonatomic, assign) NSInteger maximumImageSize;
@property (nonatomic, assign) NSInteger maximumVideoSize;

@property (nonatomic, strong) NSArray *allowedImageExtensions;
@property (nonatomic, strong) NSArray *allowedVideoExtensions;

@end
