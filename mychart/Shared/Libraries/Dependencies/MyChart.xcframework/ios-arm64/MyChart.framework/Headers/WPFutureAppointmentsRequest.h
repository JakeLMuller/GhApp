//
//  WPFutureAppointmentsRequest.h
//  iChart
//
//  Created by Matthew Flatau on 12/8/14.
//  Copyright © 2014-2021  Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPFutureAppointmentsResponse.h"

@interface WPFutureAppointmentsRequest : WPRequest

@property (nonatomic) NSInteger numApptsToReturn;
@property (nonatomic) NSInteger patientIndex;
@property (nonatomic) BOOL showExternal;
@property (nonatomic) BOOL ignoreED;
@property (nonatomic) BOOL isHelloPatient;

-(instancetype)initWithShowExternal: (BOOL)showExternal;
-(instancetype)initWithShowExternal: (BOOL)showExternal ignoreED:(BOOL)ignoreED;
-(instancetype)initWithPatientIndex:(NSInteger)patientIndex showExternal:(BOOL)showExternal;
-(instancetype)initWithPatientIndex:(NSInteger)patientIndex showExternal:(BOOL)showExternal ignoreED:(BOOL)ignoreED;
-(instancetype)initForHelloPatientWithPatientIndex:(NSInteger)patientIndex;

-(WPFutureAppointmentsResponse *)allocResponse;

@end
