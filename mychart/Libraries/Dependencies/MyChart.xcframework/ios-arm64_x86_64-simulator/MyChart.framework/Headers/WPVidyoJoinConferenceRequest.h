//
//  WPVidyoJoinConferenceRequest.h
//  iChart
//
//  Created by Matthew Flatau on 1/16/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPVidyoJoinConferenceResponse.h"
#import "WPTelemedicineRoom.h"
#import "WPTelemedicineUser.h"

@interface WPVidyoJoinConferenceRequest : WPRequest

- (id)initWithRoom:(WPTelemedicineRoom *)room andUser:(WPTelemedicineUser *)user;

- (WPVidyoJoinConferenceResponse *)allocResponse;

@property (nonatomic, strong) WPTelemedicineRoom *room;

@end

