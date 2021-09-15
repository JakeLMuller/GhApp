//
//  FeatureInformation.h
//  iChart
//
//  Created by Epic on 7/3/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
// *csatish 1/11 196219 Removed AccessClass (ECL id). Wasn't used and wasn't synced in multideployment.
//  *mflatau 06/2014 316778 Updating to ARC


#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPUtil_Features.h"

@interface WPFeatures : WPObject <NSCoding>

@property (nonatomic,strong) NSMutableArray*	enabledFeatures;
@property (nonatomic,strong) NSMutableArray*	disabledFeatures;

/*
 This is required until we implement mobile security filtering on cache.
 Used to show/hide refill button
 YES - if the web server it's connecting to supports refill workflow (i.e. has necessary SUs/updates)
 NO - if the web server does not support refill workflow.
 */
@property (nonatomic) BOOL allowRxRefill;

-(FEATURE_RESPONSE)featureEnabledFor: (const NSString *)featureName;

@end
