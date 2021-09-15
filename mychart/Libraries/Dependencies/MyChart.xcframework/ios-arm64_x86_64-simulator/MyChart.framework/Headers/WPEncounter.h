//
//  WPEncounter.h
//  iChart
//
//  Created by Epic on 7/7/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPAppointment.h"

@class WPVitals;

@interface WPEncounter : WPAppointment

@property (nonatomic,strong) NSString* followUpInstructions;
@property (nonatomic,strong) NSArray* medications;
@property (nonatomic,strong) NSArray* reasons;
@property (nonatomic,strong) NSArray* diagnoses;
@property (nonatomic,strong) NSArray* orders;
@property (nonatomic,strong) NSString* avs_order;
@property (nonatomic,strong) WPVitals* vitals;
@property (nonatomic,strong) NSArray* avsPdfs;
@property (nonatomic, assign) BOOL isEDVisit;
@property (nonatomic,assign) BOOL isPastAdmission;
@property (nonatomic,strong) NSString* locationName; 
@property (nonatomic, strong) NSDate* admissionDate;

@end
