//
//  WPVidyoJoinConferenceResponse.h
//  iChart
//
//  Created by Matthew Flatau on 1/16/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPVidyoJoinConferenceResult.h"

@interface WPVidyoJoinConferenceResponse : WPResponse

@property (nonatomic, strong) VidyoJoinConferenceEnvelope *result;

@end
