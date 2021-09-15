//
//  WPScheduleWebViewController.h
//  MyChart
//
//  Created by Yash Vaka on 6/8/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPActivityWebViewController.h"
#import "WPCampaignCard.h"

@class WPProvider;

extern NSString* const ticketIdMOParamKey;

@interface WPScheduleWebViewController : WPActivityWebViewController

- (instancetype)initWithTicketId:(NSString *)ticketId;
- (instancetype)initWithParams:(NSDictionary<NSString *,NSString*> *)params;
- (instancetype)initWithProvider:(id<PEAppointmentProvider>)provider;
- (instancetype)initWithHMScheduleAppointment:(NSString*)reasonForVisit hmTopicId:(NSString*)hmTopicId dontEncryptTopic:(Boolean)dontEncryptTopic;
- (instancetype)initSchedulingWithMode:(WPMyChartWebViewMode)mode parameters:(NSDictionary<NSString *,NSString *> *)params andPresentationStyle:(WPViewPresentationStyle)style patientIndex:(NSInteger)patientIndex isExternal:(BOOL)isExternal orgID:(NSString *)orgID;

/**
 * initializes the scheduling web view controller for when called from a Campaign action
 * @param the campaign object
 */
- (instancetype)initWithCampaign:(WPCampaignCard *)campaign;

@end
