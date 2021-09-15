//
//  WPTermsConditionsServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 11/10/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@interface WPTermsConditionsServiceResponse : WPResponse {
	NSMutableString *termsConditions;
}

@property (nonatomic,strong) NSMutableString *termsConditions;

/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
