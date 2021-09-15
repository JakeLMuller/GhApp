//
//  WPImageDownloader.h
//  iChart
//
//  Created by Chetan Satish on 6/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau  06/2014 316778 Updating to ARC
//  *mrangwal 10/2016 447965 Migrating from NSURLConnection to NSURLSession

#import <Foundation/Foundation.h>
#import "WPServer.h"

@protocol WPImageDownloaderDelegate 
- (void)imageDidLoadForIndexPath:(NSIndexPath *)indexPath isLoginImage:(BOOL)isLoginImage;

- (void)imageFailedLoadingForIndexPath:(NSIndexPath *)indexPath;
@end

@interface WPImageDownloader : NSObject

@property (nonatomic, strong) NSString*							imageURL;
@property (nonatomic, strong) NSIndexPath*						indexPathInTableView;
@property (nonatomic, weak) id <WPImageDownloaderDelegate>	delegate;

@property (nonatomic, strong) WPServer*							server;

- (void)startDownload:(BOOL)isLoginImage;
- (void)cancelDownload;

@end
