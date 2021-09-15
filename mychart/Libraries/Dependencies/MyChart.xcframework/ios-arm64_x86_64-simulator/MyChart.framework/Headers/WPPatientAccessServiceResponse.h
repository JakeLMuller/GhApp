//
//  ProxyServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 8/3/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPPatientAccessServiceResponse : WPResponse

@property (nonatomic,strong) NSMutableArray *patientAccesses;

@end
