//
//  EFBloodPressureDataSet.h
//  EFGraphingLibrary
//
//  Created by Mike Epley on 7/25/14.
//  Copyright © 2014-2021 Epic. All rights reserved.
//

#import "EFDataSet.h"

@interface EFBloodPressureDataSet : EFDataSet

- (id) initWithSystolicDataSet:(EFDataSet *)systolicDataSet diastolicDataSet:(EFDataSet *)diastolicDataSet;

@property EFDataSet *systolicDataSet;
@property EFDataSet *diastolicDataSet;

@end
