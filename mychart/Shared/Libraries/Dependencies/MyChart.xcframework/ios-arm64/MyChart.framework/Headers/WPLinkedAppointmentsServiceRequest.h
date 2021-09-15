//
//  WPLinkedAppointmentsServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 9/10/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import	"WPRequest.h"

@class WPLinkedAppointmentsServiceResponse;

@interface WPLinkedAppointmentsServiceRequest : WPRequest {
	NSString* DAT;
    WPOrganizationInfo* OrganizationInfo;
}

@property (nonatomic,strong) NSString* DAT;
@property (nonatomic,strong) WPOrganizationInfo* OrganizationInfo;

-(id)initWithDat:(NSString*)dat andOrg:(WPOrganizationInfo*)OrganizationInfo;
-(NSData *)XMLData;

-(WPLinkedAppointmentsServiceResponse*)allocResponse;

@end
