//
//  WPSaveNotificationPreferencesResponse.h
//  MyChart
//
//  Created by Surender Pal Singh on 8/29/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPSaveNotificationPreferencesResult.h"


@interface WPSaveNotificationPreferencesResponse : WPResponse

@property (nonatomic, strong) WPSaveNotificationPreferencesResult* result;

-(void)loadFromXMLData:(NSData*)xml;

@end
