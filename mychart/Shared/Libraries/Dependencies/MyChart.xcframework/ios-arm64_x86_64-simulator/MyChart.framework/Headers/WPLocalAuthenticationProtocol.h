//
//  WPLocalAuthenticationProtocol.h
//  MyChart
//
//  Created by Alex J White on 6/18/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

//Protocol intended to provide extension of the implementation of <LocalAuthentication>.
@protocol WPLocalAuthenticationProtocol <NSObject>

/*!
*@brief NSData representing the current state of saved fingerprints on the device. Typically retrieved through [LocalAuthentication evaluatedPolicyDomainState].
 */
- (NSData *)evaluatedPolicyDomainStateData;

@end

