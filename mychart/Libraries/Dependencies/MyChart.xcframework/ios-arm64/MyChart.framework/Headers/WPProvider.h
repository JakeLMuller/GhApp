//
//  WPProvider.h
//  MyChart
//
//  Created by Chetan Satish on 9/8/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPDepartment.h"
#import "WPOrganizationInfo.h"
#import "IWPProviderImageSource.h"





typedef NS_ENUM(NSInteger, WPProviderType) {
    kWPProviderTypeUnknown = 0,
    kWPProviderTypePerson = 1,
    kWPProviderTypeResource = 2,
    kWPProviderTypeClass = 3
} ;

@interface WPProvider : WPObject <IWPProviderImageSource, PEMessageProvider, PEAppointmentProvider>
@property (nonatomic, readonly, strong) id <PEOrganizationInfoProtocol> _Nonnull getPEOrganization;

@property (nonatomic, assign) BOOL				canDirectSchedule;
@property (nonatomic, assign) BOOL				canRequestAppointment;
@property (nonatomic, assign) BOOL				canMessage;
@property (nonatomic, assign) BOOL				canRequestCustomAppointment;
@property (nonatomic, assign) BOOL				hasNoProviderRecord;
@property (nonatomic, assign) BOOL				isNewSchedulingEnabled;

@property (nonatomic, assign) BOOL				isPCP;
@property (nonatomic, assign) BOOL              isProviderIdEncrypted;
@property (nonatomic, strong, nullable) NSString*			PCPType;
@property (nonatomic, strong, nullable) NSString*			OOCEndDate;
@property (nonatomic, strong, nullable) WPCategory*		sex;
@property (nonatomic, copy, nullable) NSString*			photoURL;
@property (nonatomic, assign) BOOL				hasPhotoOnBlob;

@property (nonatomic, strong, nullable) NSArray*			departmentIDs;
@property (nonatomic, strong, nullable) NSArray*          departments;
@property (nonatomic, strong, nullable) NSArray*			languages;
@property (nonatomic, strong, nullable) NSArray*			specialties;
@property (nonatomic, strong, nullable) NSArray*			providerRoles;
@property (nonatomic, strong, nullable) NSArray*			schedulableVisitTypes;
@property (nonatomic, strong, nullable) NSArray*			AboutMeBlurb;

@property (nonatomic, strong, nullable) NSString*			departmentName;
@property (nonatomic, strong, nullable) NSString*			phone;
@property (nonatomic, strong, nullable) NSString*			address;

@property (nonatomic, strong, nullable) NSString*			infoBlurbUrl;
@property (nonatomic, strong, nullable) NSString*			webPageUrl;

@property (nonatomic, assign) WPProviderType    type;

@property (nonatomic, strong, nullable) WPDepartment      *department;
@property (nonatomic, assign) NSInteger         waitTimeSeconds;
@property (nonatomic, strong, nullable) UIImage           *image;

@property (nonatomic,strong, nullable) NSMutableArray     *orgInfo;   //Holds an array of WPOrganizationInfo objects to account for
                                                            //deduplication where a provider can come from >1 organization

- (id _Nonnull )initWithID:(NSString *_Nonnull)ID andName:(NSString *_Nullable)name andIsPCP:(BOOL)isPCP andPhotoURL:(NSString *_Nullable)logoURL andOrganization:(WPOrganizationInfo *_Nonnull)organization andIsProviderIdEncrypted:(BOOL)isProviderIdEncrypted;

// Used for sorting Providers in a list
- (NSComparisonResult)compare:(nonnull WPProvider *)otherProvider;

// Used to check if the provider is from an external organization (from a Happy Together perspective)
- (BOOL)isExternal;

@end
