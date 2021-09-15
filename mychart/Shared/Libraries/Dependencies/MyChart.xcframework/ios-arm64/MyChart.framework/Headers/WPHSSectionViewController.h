//
//  WPHSSectionViewController.h
//  iChart
//
//  Created by Epic on 6/8/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"
#import "WPRequest.h"

typedef NS_ENUM(NSInteger, ClinicalSectionType) {
	kAllergies,
	kImmunizations,
	kCurrentHealthIssues,
} ;
@interface WPHSSectionViewController : WPTableViewController 

@property (nonatomic) ClinicalSectionType sectionType;

@property (nonatomic, strong, nullable) NSArray  *immunizations;
@property (nonatomic, strong, nullable) NSArray  *screenings;
@property (nonatomic, assign) BOOL isImmunizationsDoneOrUnnecessary;
@property (nonatomic, assign) BOOL isScreeningsDoneOrUnnecessary;


/**
 * init
 * @ param secType - Clinical Section Type
 */
- (nonnull instancetype)initWithClincalSection:(ClinicalSectionType)secType;
-(void)setContentInsets:(UIEdgeInsets)insets;

@end

