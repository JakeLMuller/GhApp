//
//  WPMARSettingsServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 9/8/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPMARSettingsServiceResponse;

@interface WPMARSettingsServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;
-(id)initWithOrganization:(WPOrganizationInfo*)organization;

-(WPMARSettingsServiceResponse*)allocResponse;

@end
