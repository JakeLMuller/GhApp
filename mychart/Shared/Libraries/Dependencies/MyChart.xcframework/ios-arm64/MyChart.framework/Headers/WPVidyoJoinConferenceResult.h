//
//  WPVidyoJoinConferenceResult.h
//  iChart
//
//  Created by Matthew Flatau on 1/16/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

@interface WPVidyoJoinConferenceResult : WPObject

@property (nonatomic, assign) BOOL OK;

@end



@interface VidyoFaultCode : WPObject

@property (nonatomic, strong) NSString* value;

@end



@interface VidyoFaultReason : WPObject

@property (nonatomic, strong) NSString* text;

@end



@interface VidyoFaultDetail : WPObject

@property (nonatomic, strong) NSString* fault;

@end



@interface VidyoFault : WPObject

@property (nonatomic, strong) VidyoFaultCode* code;
@property (nonatomic, strong) VidyoFaultReason* reason;
@property (nonatomic, strong) VidyoFaultDetail* detail;

@end



@interface WPVidyoJoinConferenceResultBody : WPObject

@property (nonatomic, strong) WPVidyoJoinConferenceResult* joinConferenceResponse;
@property (nonatomic, strong) VidyoFault* fault;

@end



@interface VidyoJoinConferenceEnvelope : WPObject

@property (nonatomic, strong) WPVidyoJoinConferenceResultBody* body;
@property (nonatomic, readonly) BOOL ok;

@end
