//
//  AllergyServiceResponse.h
//  iChart
//
//  Created by Epic on 6/16/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *apallika 05/2017 478570 Add support for external data

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPAllergyListResult.h"

@interface WPAllergiesServiceResponse : WPResponse {
	NSMutableArray * allergies;
}

@property(nonatomic,strong) NSMutableArray * allergies;
@property(nonatomic,strong) WPAllergyListResult *allergyListResult;

-(void)loadFromXMLData:(NSData*)xml;

@end
