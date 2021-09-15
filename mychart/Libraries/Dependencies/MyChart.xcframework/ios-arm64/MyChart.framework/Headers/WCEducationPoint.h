//
//  WCEducationPoint.h
//  MyChart
//
//  Created by Jessica Perng on 9/6/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPCategory.h"

//Selection of I PED 96013 Values
typedef NS_ENUM(NSInteger, WCEducationPointStatus) {
    kWCEducationPointStatusRead = 1, // Read
    kWCEducationPointStatusUnderstand = 2, // Done
    kWCEducationPointStatusQuestions = 4, // Question
};

@interface WCEducationPoint : WPObject

@property (nonatomic, strong) NSString *educationPointID;
@property (nonatomic, strong) WPCategory *educationPointStatus;

@end
