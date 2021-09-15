//
//  WPGetDocumentRequest.h
//  MyChart
//
//  Created by Gary Zhuo on 4/29/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPGetDocumentResponse.h"

/**
 * Object representing a request for the web service to retrieve a document from the BLOB.
 */
@interface WPGetDocumentRequest : WPRequest

- (instancetype) initWithDcsId:(NSString *)dcsId fileExtension:(NSString *)fileExtension andOrgID:(NSString *)orgID;

@end

