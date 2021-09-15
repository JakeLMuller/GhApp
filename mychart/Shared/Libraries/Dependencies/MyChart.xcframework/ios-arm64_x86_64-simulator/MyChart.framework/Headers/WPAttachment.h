//
//  WPAttachment.h
//  iChart
//
//  Created by Chetan Satish on 6/28/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

//these are the list of supported image and video extensions
//It is a subset of WDF 1884 (allowed image extensions) and 1888 (allowed video extensions)
//(We always convert images to JPEG before upload. Videos selected from UIImagePicker is always
// in MOV format.)
#define kWPMediaTypeJPG @"JPG"
#define kWPMediaTypeJPEG @"JPEG"
#define kWPMediaTypeMOV @"MOV"
#define kWPMediaTypePDF @"PDF"

typedef enum{
    kWPMessageAttachmentTypeImage = 0,
    kWPMessageAttachmentTypeVideo = 1,
    kWPMessageAttachmentTypePDF = 2,
    kWPMessageAttachmentTypeUnsupported = 100,
}WPMessageAttachmentCategory;

@interface WPAttachment : WPObject

@property (nonatomic, strong) UIImage *thumbnail;
@property (nonatomic, strong) NSData  *data;
@property (nonatomic, strong) NSString *base64Data;
@property (nonatomic, strong) NSString *fileExtension;
@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSString *dcsId;

//return YES if the list contains at least one supported image extensions
+ (BOOL)hasSupportedImageExtension:(NSArray *)extensions;

//return YES if the list contains at least one supported video extensions
+ (BOOL)hasSupportedVideoExtension:(NSArray *)extensions;

//return YES if the list contains at least one supported document extension (PDF)
+ (BOOL)hasSupportedDocumentExtension:(NSArray *)extensions;

- (NSData *)getData;
- (UIImage *)getImage;
- (WPMessageAttachmentCategory)getAttachmentCategory;

/**
 Creates the file path for the attachments that need to be saved locally.
 @return returns a file path for the attachment
 */
- (NSString *)pathForLocalAttachment;

@end
