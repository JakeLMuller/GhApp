//
//  NSUserDefaults+Encryption.h
//  iChart
//
//  Created by Ben Drda on 9/25/14.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (WPEncryption)

/*!
 @brief same as setObject, but encrypts the object
 @param value       see setObject:forKey:
 @param defaultName see setObject:forKey:
 */
-(void) setSecureObject:(id)value forKey:(NSString *)defaultName;

/*!
 @brief same as objectForKey, but decrypts the object
 @param defaultName see objectForKey:
 @return            see objectForKey:
 */
-(id) secureObjectForKey:(NSString *)defaultName;

@end
