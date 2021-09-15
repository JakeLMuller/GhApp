//
//  WPAvsPdf.h
//  MyChart
//
//  Created by Chad Close on 10/25/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPAvsPdf : WPObject
{
    NSData* fileBlob;
    NSString* fileName;
}

@property (nonatomic,strong) NSData* fileBlob;
@property (nonatomic,strong) NSString* fileName;

@end
