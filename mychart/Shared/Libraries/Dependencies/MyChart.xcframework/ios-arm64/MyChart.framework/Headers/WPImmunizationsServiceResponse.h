//
//  WPImmunizationsServiceResponse.h
//  iChart
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPImmunizationsServiceResponse : WPResponse {

	NSMutableArray * immunizations;
}

@property (nonatomic, strong) NSMutableArray * immunizations;

-(void)loadFromXMLData:(NSData*)xml;

@end
