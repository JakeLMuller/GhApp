//
//  WPTestAddendum.h
//  MyChart
//
//  Created by Jonathon Walz on 1/2/12.
//  Copyright © 2012-2021 Epic. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *bdrda   02/2016 403802 trim text and remove some old code styling

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPUtil_Xml.h"

@interface WPTestAddendum : WPObject

@property (nonatomic,strong, nullable) NSString *text;
@property (nonatomic,strong, nullable) NSDate *dateTime;
@property (nonatomic,strong, nullable) WPObject *signedBy;

@end
