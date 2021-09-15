//
//  WPGetViewersProtocol.h
//  MyChart
//
//  Created by Alex J White on 1/31/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPObject.h"
#import "WPGetMessageViewersResult.h"

@protocol WPGetViewersProtocolDelegate <NSObject>
@required
/**
 * Array of viewers names.
 */
- (void) handleViewers:(NSArray*)viewers withSetting:(WPMessageViewersSetting)settingEnum withConfidentiality:(WPConfidentialitySetting)confidentialityEnum withUserWPR:(NSString*)userWPR withPatientWPR:(NSString*)patientWPR;
@end

@interface WPGetViewersProtocol : WPObject


@property (nonatomic,weak) id<WPGetViewersProtocolDelegate> delegate;

//Call the get viewers request with the passed security string
//callback function should pass back array of viewers and setting (combined in response object) to delegate. Delegate's function should
- (void)getViewersWithAdditionalSecurity:(NSString *)secString forOrganization:(WPOrganizationInfo*)organization;

+ (NSMutableArray *) orderedViewersFromViewers:(NSMutableArray *) viewersFromResponse;

+ (NSMutableArray *) orderedViewersFromViewers:(NSMutableArray *) viewersFromResponse userWPR:(NSString *)userWPR patientWPR:(NSString *)patientWPR;

@end
