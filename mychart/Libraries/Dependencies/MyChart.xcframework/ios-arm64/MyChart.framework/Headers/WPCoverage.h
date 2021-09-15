//
//  WPCoverage.h
//  iChart
//
//  Created by Sanders Baik on 7/30/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPCoverage : WPObject{
    NSString *_displayName;
}
@property (nonatomic, strong) NSString *coverageID;
@property (nonatomic, strong) NSString *displayName;  // This property is overriding the read-only property available from WPObject, so that we can set this to the value we receive from the coverage web service
@property (nonatomic, strong) NSString *memberID;
@end
