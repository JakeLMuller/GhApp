//
//  WPCurrentHealthIssuesServiceRequest.h
//  iChart
//
//  Created by Epic on 6/29/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPCurrentHealthIssuesServiceResponse;

@interface WPCurrentHealthIssuesServiceRequest : WPRequest {

}

-(id)init;
-(NSData *)XMLData;
-(WPCurrentHealthIssuesServiceResponse*)allocResponse;

@end
