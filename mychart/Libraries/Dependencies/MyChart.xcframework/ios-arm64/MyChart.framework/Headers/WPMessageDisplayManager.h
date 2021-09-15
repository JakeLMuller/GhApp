//
//  WPMessageDisplayManager.h
//  iChart
//
//  Created by Ben Drda on 07/19/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//


#import <Foundation/Foundation.h>

@class WPMessageRecipient;
@class WPMessage;
@class WPMessageTask;
@class WPMessageViewer;

@interface WPMessageDisplayManager : NSObject

+ (NSString *) nameForRecipientInMessageHeader: (WPMessageRecipient *) recipient;
+ (NSString *) nameFromMessageRecipient: (WPMessageRecipient *) recipient;
+ (NSString *) nameFromMessageRecipient: (WPMessageRecipient *) recipient withOOCText: (BOOL) withOOCText;
+ (NSString *) dateFromMessage: (WPMessage *) message;
+ (NSString *) getSelectedViewersNamesString:(NSArray *)selectedViewers; 


+ (UIImage *)getThumbnailForImage:(UIImage*)image thumbnailWidth:(CGFloat)width thumbnailHeight:(CGFloat)height;
+ (UIImage *)getThumbnailForVideo:(NSURL*)url thumbnailWidth:(CGFloat)width thumbnailHeight:(CGFloat)height;


@end
