//
//  WPPatientInformationRequest.h
//  iChart
//
//  Created by Chetan Satish on 1/26/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

#import "WPPatientInformationResponse.h"

@interface WPPatientInformationRequest : WPRequest {
	
	NSInteger patientIndex;
	
}

@property (nonatomic) NSInteger patientIndex;

-(id)initWithPatientIndex:(NSInteger)index;

/**
 * Allocates a new response object
 *
 * @return a new allocated PatientInformationResponse
 */
-(WPPatientInformationResponse*)allocResponse;

@end
