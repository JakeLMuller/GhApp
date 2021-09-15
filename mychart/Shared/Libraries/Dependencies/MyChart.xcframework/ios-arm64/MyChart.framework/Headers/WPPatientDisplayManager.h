//
//  WPPatientDisplayManager.h
//  MyChart
//
//  Created by Matt Richardson on 12/20/17.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPPatientDisplayManager : NSObject

+(NSString *) nameForProxyDisclaimer: (WPPatientContext *) patient; // returns the patient name for use in the proxy disclaimer

/**
 * Returns the name to display appended by allowed service areas for a refusal patient. This can
 * happen in Finland environments, where there could be multiple EPTs for the same person in
 * different service areas.
 * @param patient - patient
 * @param useNickname if patient nickname needs to be used instead of name
 * @return a NSString
 */
+(NSString *)getNameForRefusalPatient:(WPPatientContext *) patient useNickname:(BOOL)useNickname;
@end
