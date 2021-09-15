//
//  WPUtil_Encryption.h
//  Tab
//
//  Created by WPUtil_Encryptike on 3/12/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//  Change History:
//  *bdrda  11/2011 220335 removed date methods (duplicates of methods in WPUtil_Dates
//  *tgupta 04/2014 Added support for session ticket encryption
//  *mflatau 08/2014 324504 Removing unnecessary functions

#import <Foundation/Foundation.h>

@interface WPUtil_Encryption : NSObject

+(NSData*)sha1:(NSData*)data;
+(NSData *)generateSHA256:(NSString *)source withSalt:(NSData *)salt;
+(NSData *)salt;
+(NSData *)saltFrom256:(NSString *)hash;

+(NSData*)aes128EncryptData:(NSData*)data withEncryptionKey:(NSData *)key;
+(NSData *)aes128DecryptData:(NSData *)data withEncryptionKey:(NSData *)key;

+(UIImage *)imageFromString:(NSString *)encodeString;

@end
