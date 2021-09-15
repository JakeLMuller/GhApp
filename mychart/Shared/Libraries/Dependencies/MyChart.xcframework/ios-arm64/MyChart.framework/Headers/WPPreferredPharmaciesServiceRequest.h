//
//  WPPreferredPharmaciesServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 6/20/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPPreferredPharmaciesServiceResponse;

@interface WPPreferredPharmaciesServiceRequest : WPRequest {

}

- (instancetype)initWithMedicationList:(NSArray *)medicationList;

- (WPPreferredPharmaciesServiceResponse*)allocResponse;

@end
