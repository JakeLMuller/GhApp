//
//  WPOrganizationInfo.h
//  MyChart
//
//  Created by Ashwin  Pallikarana Tirumala on 4/25/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPUtil_Xml.h"
#import "IWPCacheableImageSource.h"



@interface WPOrganizationInfo : WPObject<PEOrganizationInfoProtocol, IWPCacheableImageSource>

@property (nonatomic, copy, nullable) NSString* organizationId;
@property (nonatomic, copy, nullable) NSString* organizationName;
@property (nonatomic) BOOL isExternal;
@property (nonatomic, copy, nullable) NSString* logoUrl;
@property (nonatomic) NSInteger linkStatus;
@property (nonatomic) ExternalOrganizationLinkType organizationLinkType;
@property (nonatomic, copy, nullable) NSDate* lastRefreshDate;


-(nonnull instancetype) init;

-(nonnull instancetype) initWithOrganizationId:(nullable NSString *)organizationID organizationName:(nullable NSString *)organizationName isExternal:(BOOL)isExternal;

-(nonnull instancetype) initWithOrganizationId:(nullable NSString *)organizationID organizationName:(nullable NSString *)organizationName isExternal:(BOOL)isExternal logoURL:(nullable NSString *)logoURL;

//Constructor that initializes the object from a delimited string returned by Interconnect.
//Format: OrgID$c(5)OrgName$c(5)LinkStatus$c(6)
-(nonnull id) initWithString:(nullable NSString*)delimitedString;


-(nonnull id) initWithPEOrganization:(_Nonnull id<PEOrganizationInfoProtocol>)peOrganization;

@end
