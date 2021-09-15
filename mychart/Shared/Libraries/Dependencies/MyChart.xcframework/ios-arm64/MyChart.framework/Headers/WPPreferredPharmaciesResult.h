//
//  WPPreferredPharmaciesResult.h
//  iChart
//
//  Created by Chetan Satish on 8/17/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPPreferredPharmaciesResult : WPObject

@property (nonatomic, strong) NSMutableArray *preferredPharmacies;
@property (nonatomic, assign) BOOL includeOwningPharmacy;
@property (nonatomic, assign) BOOL allowFreeTextPharmacy;
@property (nonatomic, assign) BOOL integratedOnly;
@property (nonatomic, strong) NSMutableArray *mailingAddress;
@property (nonatomic, assign) BOOL showPickupDateTime;

@end
