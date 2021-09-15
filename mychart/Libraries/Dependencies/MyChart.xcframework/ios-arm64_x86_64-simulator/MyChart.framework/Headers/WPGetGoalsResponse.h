//
//  WPGetGoalsResponse.h
//  MyChart
//
//  Created by Yash Vaka on  1/6/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"

@interface WPGoalsResult : WPObject

@property (nonatomic, assign)  BOOL isSharingNotesEnabled;
@property (strong,nonatomic) NSMutableArray *goals;

@end

@interface WPGetGoalsResponse : WPResponse

@property (nonatomic, strong) WPGoalsResult *goalsResult;

@end
