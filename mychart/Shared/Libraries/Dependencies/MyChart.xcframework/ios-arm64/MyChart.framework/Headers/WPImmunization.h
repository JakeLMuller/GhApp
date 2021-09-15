//
//  WPImmunization.h
//  iChart
//
//  Created by Epic on 6/26/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPUtil_Dates.h"
#import "WPUtil_Xml.h"

@interface WPImmunization : WPObject<InlineEducationSourceProtocol> {
	NSArray * dates;
}

@property (nonatomic, strong, nullable) NSArray * dates;
@property (nonatomic, strong, nullable) NSString * immId;

//InlineEducationSourceProtocol
@property(nonatomic) BOOL hasInlineEducationSource;
@property(nonatomic, nonnull) NSString* getInlineEducationContextID;
@property(nonatomic) InlineEducationType getInlineEducationContext;
@property(nonatomic, nonnull) NSString* getInlineEducationSearchTerm;

@end
