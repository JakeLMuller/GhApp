//
//  WPMessageRecipient.h
//  MyChart
//
//  Created by Larry Irwin II on 5/18/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IWPProviderImageSource.h"
#import "WPObject.h"
#import "WPUtil_Xml.h"
#import "WPOrganizationInfo.h"

typedef NS_ENUM(NSInteger, MessageRecipientTemplate) {
	kMessageRecipientTemplateUnknown = 0,
	kMessageRecipientTemplateOffice = 1,
	kMessageRecipientTemplateList = 2,
} ;

/* This object mimics the one on the web server 
 * It is used for:
 * 1. The list of people that the user can send a message to
 * 2. The To/FROM for message details
 */
@interface WPMessageRecipient : WPObject <IWPProviderImageSource>

@property (nonatomic, strong) NSString *legalName; 
@property (nonatomic, strong) NSString *serID;
@property (nonatomic, assign) BOOL isPCP;
@property (nonatomic, assign) int PCPType;
@property (nonatomic, assign) MessageRecipientTemplate recipTemplate;
@property (nonatomic, strong) NSDate *OOCEndDate;
@property (nonatomic, strong) NSString *providerPhotoURL;
@property (nonatomic, strong) UIImage *photo;
@property (nonatomic, assign) BOOL hasProviderPhotoOnBlob;
@property (nonatomic, strong) WPOrganizationInfo *organization;

@end
