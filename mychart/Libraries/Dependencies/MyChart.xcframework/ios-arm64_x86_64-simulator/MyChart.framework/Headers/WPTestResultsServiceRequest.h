//
//  TestResultsRequest.h
//  iChart
//
//  Created by Epic on 6/9/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPTestResultsServiceResponse;

/**
 * Request the list of test results 
 */
@interface WPTestResultsServiceRequest : WPRequest {
}

@property (nonatomic,strong) NSMutableArray *nextLabMap;

/**
 * Initialize to point to the first test result
 */
-(id)init;

/**
 * Set the begginning of the next set of test results
 *
 * @param idx the ID at the start of the test result list
 */
-(void)startAfterLab:(NSString*)idx;

/**
 * Set the map of beginning of the next set of test results
 * across all organizations
 * @param map the map
 */
-(void)nextTestResultsMap:(NSMutableArray*)map;

-(NSData *)XMLData;

/** Allocate the return response */
-(WPTestResultsServiceResponse*)allocResponse;

@end
