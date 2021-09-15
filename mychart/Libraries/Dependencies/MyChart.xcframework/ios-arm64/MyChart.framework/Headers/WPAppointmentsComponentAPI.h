//
//  WPAppointmentComponentAPI.h
//  MyChart
//
//  Created by Kai Zong Khor on 5/16/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

//"Bridging" class to allow Swift components to reuse existing Objective-C code while the functionality is not yet migrated to the component framework. When that is done, this should be deleted.

@interface WPAppointmentsComponentAPI : NSObject <PEAppointmentsComponentAPIProtocol>

@end
