//
//  WPMarkCompleteServiceRequest.h
//  MyChart
//
//  Created by Jake Silver on 5/22/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPRequest.h"
#import "WPMarkCompleteServiceResponse.h"

@class WPMarkCompleteServiceRequest;

@interface WPMarkCompleteServiceRequest : WPRequest {
}

@property (nonatomic, strong) NSString *topicID;
@property (nonatomic, strong) NSString *dateCompleted;

-(WPMarkCompleteServiceResponse*)allocResponse;

@end
