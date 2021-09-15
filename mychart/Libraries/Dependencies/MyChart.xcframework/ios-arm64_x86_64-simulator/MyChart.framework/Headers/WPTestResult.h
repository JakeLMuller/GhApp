//
//  WPTestResult.h
//  MyChart
//
//  Created by Epic  on 6/3/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPUtil_Xml.h"
#import "WPOrganizationInfo.h"
#import "IWPProviderImageSource.h"


/**
 * Model class used to store basic information about a test result that
 * is used in the list view. More information is found using the orderID
 * and DAT to request a WPTestDetail object
 *
 */
@interface WPTestResult : WPObject <IWPProviderImageSource, PETestResult>

// order DAT
@property (nonatomic, strong, nullable) NSString* DAT;

// the provider name who ordered the test
@property (nonatomic, strong, nullable) NSString*	orderedBy;

// result status- not guaranteed to be populated here, will usually be in details
@property (nonatomic, strong, nullable) NSString*	status;

// date the result was, er, resulted. Not guaranteed (but usually there)
@property (nonatomic, strong, nullable) NSDate* resultDate;

// whether or not the current viewer has seen this test result. YES if not.
@property (nonatomic, assign) BOOL read;

// Whether we were given a result time. YES if not.
@property (nonatomic, assign) BOOL isResultTimeNull;

// Whether the given test result is abnormal. YES if yes.
@property (nonatomic, assign) BOOL isAbnormal;

// Text to show for the preview for unread test results
@property (nonatomic, strong, nullable) NSString *previewBody;

// Image url to show with the preview
@property (nonatomic, strong, nullable) NSString *previewProviderPhotoURL;

// Name of the person associated with the preview, to be used when the url is not usable
@property (nonatomic, strong, nullable) NSString *previewName;

// Cached downloaded image from previewProviderPhotoURL
@property (nonatomic, strong, nullable) UIImage *previewImage;

// whether or not the commenting provider has a photo on the blob
@property (nonatomic, assign) BOOL hasPreviewProviderPhotoOnBlob;

// ID of the commenting provider
@property (nonatomic, strong, nullable) NSString *previewProviderID;

// Set to YES if the read property was ever set to NO
@property (nonatomic, assign, readonly) BOOL isInitiallyUnread;

// organization info for where this test result came from
@property(nonatomic,strong, nullable) WPOrganizationInfo *organization;

// If we should show a provider preview or details
@property (nonatomic, assign) BOOL hideDetails;

- (nullable instancetype)initWithObjectId:(nullable NSString *)objectId andDat:(nullable NSString *)dat;

-(nullable instancetype)initWithPETestResult:(_Nullable id<PETestResult>)testResult;

@end
