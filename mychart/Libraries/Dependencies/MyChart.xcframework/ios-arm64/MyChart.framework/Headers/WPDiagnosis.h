//
//  WPDiagnosis.h
//  iChart
//
//  Created by Epic on 7/7/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish 5/11 199912 Removed "icd" definition which previously would have contained ICD-9 code but was retired in Epic-2010. 
//                       From Epic-2010 or later, "icd" was replaced with "code" and "codeset" which needs to be defined later when 
//                       we implement content linking on iPhone.


#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPDiagnosis : WPObject {
	//Need to define dx code and codeset for content linking
}

@end
