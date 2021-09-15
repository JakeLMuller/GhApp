//
//  EFBloodPressureGrapher.h
//  EFGraphingLibrary
//
//  Created by Mike Epley on 7/25/14.
//  Copyright © 2014-2021 Epic. All rights reserved.
//

#import "EFLineGrapher.h"
#import "EFBloodPressureDataSet.h"

@interface EFBloodPressureGrapher : EFLineGrapher

- (id) initWithDataSet:(EFBloodPressureDataSet *)bpDataSet;

@property EFBloodPressureDataSet *bpDataSet;

@end
