//
//  WPTestComments.h
//  MyChart
//
//  Created by Chetan Satish on 6/10/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPUtil_Xml.h"
#import "IWPProviderImageSource.h"
#import "WPOrganizationInfo.h"

@interface WPTestComments : WPObject <IWPProviderImageSource>

@property (nonatomic, strong, nullable) NSString *text;
@property (nonatomic, strong, nullable) NSDate *date;
@property (nonatomic, strong, nullable) NSString *viewedBy;
@property (nonatomic, strong, nullable) NSDate *viewedDate;
@property (nonatomic, strong, nullable) NSString *providerID;
@property (nonatomic, strong, nullable) NSString *providerPhotoURL;
@property (nonatomic, strong, nullable) UIImage *providerImage;
@property (nonatomic, strong, nullable) NSString *providerName;
@property (nonatomic, assign) BOOL hasProviderPhotoOnBlob;
@property (nonatomic, strong, nullable) WPOrganizationInfo *organization;

@end
