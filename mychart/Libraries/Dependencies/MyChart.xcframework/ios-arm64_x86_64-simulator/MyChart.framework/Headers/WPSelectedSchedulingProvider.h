//
//  WPSelectedSchedulingProvider.h
//  iChart
//
//  Created by Chetan Satish on 8/11/11.
//  Copyright © 2011-2021 Epic	Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

@class WPProvider;
@class WPCategory;

//NOT a model object. Do not inherit from WPObject
@interface WPSelectedSchedulingProvider : NSObject

@property (nonatomic, strong) WPProvider*		provider;
@property (nonatomic, strong) WPCategory*		center;

- (instancetype) initWithProvider: (WPProvider*)providerObj andCenter:(WPCategory*)centerObj;

@end
