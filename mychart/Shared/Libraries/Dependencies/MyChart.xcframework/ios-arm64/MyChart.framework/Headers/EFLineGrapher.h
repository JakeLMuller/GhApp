//
//  EFLineGrapher.h
//  EFGrapher
//
//  Created by Mike Epley on 7/17/14.
//  Copyright © 2014-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EFDataSet.h"
#import "EFGrapher.h"

@interface EFLineGrapher : EFGrapher

extern const float LineGraphPointRadius;
extern const float LineGraphLineWidth;

- (void) drawGraphData;

@end
