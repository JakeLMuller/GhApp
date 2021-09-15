//
//  WPComponentAPIs.h
//  MyChart
//
//  Created by Kai Zong Khor on 5/17/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//


// Header file containing all the bridging component API classes for easy reference/importing.

#ifndef WPComponentAPIs_h
#define WPComponentAPIs_h

#import "WPAppointmentsComponentAPI.h"
#import "WPToDoComponentBridgingAPI.h"
#import "WPProblemListComponentBridgingAPI.h"
#import "WPTestResultDetailComponentAPI.h"
#import "WPH2GOrgPopupComponentAPI.h"
#import "WPH2GManageMyAccountComponentAPI.h"
#import "WPDeepLinkComponentAPI.h"
#import "WPApplicationComponentAPI.h"
#import "WPMyChartRefComponentAPI.h"
#import "WPNativeMessagesComponentAPI.h"


#if HEALTHKIT_ENABLED
#import "WPTrackMyHealthComponentAPI.h"
#endif

#endif /* WPComponentAPIs_h */
