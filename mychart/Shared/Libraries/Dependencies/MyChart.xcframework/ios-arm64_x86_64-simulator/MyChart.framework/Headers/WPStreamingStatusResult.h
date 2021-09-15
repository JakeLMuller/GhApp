//
//  WPStreamingStatusResult.h
//  iChart
//
//  Created by Matthew Flatau on 12/20/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPTelemedicineError.h"
#import "WPTelemedicineConstants.h"

@interface WPStreamingStatusResult : WPObject

@property (nonatomic, assign) WPTelemedicineStreamingStatus streamingStatus;
@property (nonatomic, strong) WPTelemedicineError *error;

@end
