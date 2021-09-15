//
//  WPInitVideoResult.h
//  iChart
//
//  Created by Matthew Flatau on 2/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPTelemedicineVendor.h"
#import "WPTelemedicineError.h"
#import "WPStreamingStatusResult.h"

@interface WPInitVideoResult : WPObject

@property (nonatomic, strong, nullable) WPTelemedicineVendor *vendor;
@property (nonatomic, strong, nullable) NSString *videoVisitKey;
@property (nonatomic, assign) WPTelemedicineResponseStatus status;
@property (nonatomic, assign) WPTelemedicineStreamingStatus streamingStatus;
@property (nonatomic, strong, nullable) WPTelemedicineError *error;
@property (nonatomic, assign) BOOL canJoinVideoVisit;
@property (nonatomic, assign) WPTelemedicineCannotJoinReason cannotJoinReason;

@end
