//
//  WPGoal.h
//  
//
//  Created by Yash Vaka on 1/11/16.
//
//

#import "WPObject.h"


typedef NS_ENUM(NSInteger, WPGoalType)
{
    kWPGoalTypeUnknown = 0,
    kWPGoalTypeDiet = 1,
    kWPGoalTypeExercise = 2,
    kWPGoalTypeWeight = 3,
    kWPGoalTypeBloodPressure = 4,
    kWPGoalTypeResultComponent = 5,
    kWPGoalTypePatientStarted = 6,
    kWPGoalTypeContingency = 7,
    kWPGoalTypeGeneral = 8,
};


@interface WPReading : WPObject

@property (nonatomic, strong) NSString*     value;
@property (nonatomic, strong) NSString*		valueTitle;
@property (nonatomic, strong) NSString*		complianceClass;
@property (nonatomic, assign) NSInteger     numericValue;
@property (nonatomic, strong) NSDate*		DateISO;

@end


@interface WPTitleInfo : WPObject

@property (nonatomic, strong) NSString*		item;
@property (nonatomic, strong) NSString*     pattern;
@property (nonatomic, strong) NSString*		target1;
@property (nonatomic, strong) NSString*		target2;

@end


@interface WPGoal : WPObject

@property (nonatomic, strong) NSString*     goalId;
@property (nonatomic, strong) NSString*     title;
@property (nonatomic, assign) NSInteger     complianceType;
@property (nonatomic, assign) WPGoalType    goalType;
@property (nonatomic, strong) NSArray*		notes;
@property (nonatomic, strong) NSArray*		readings;
@property (nonatomic, strong) WPTitleInfo*	titleInfo;

@end
