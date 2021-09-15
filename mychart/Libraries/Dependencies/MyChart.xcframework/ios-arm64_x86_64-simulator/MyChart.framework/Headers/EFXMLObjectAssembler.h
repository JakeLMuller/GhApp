//
//  EFXMLObjectAssembler.h
//  iChart
//
//  Created by Adam on 6/3/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>

/**
 * \brief Create an object from the given XML input.
 *
 * Given an XML string assemble an object
 *
 * Objects to be assembled MUST respond to the following class method:
 *
 * +(BOOL)allowsXMLSerialization 
 *
 * with a non-nil value
 */
@interface EFXMLObjectAssembler : NSObject
	<NSXMLParserDelegate>


/**
 * Convience method to get a set of objects from XML
 *
 * @param className The name of the class to expect
 * @param data The data to parse
 * @param error The error that occured (if any)
 *
 * @return an array of objects
 */
+(NSArray*)assembleXMLObjectCollectionWithClass:(NSString*)className data:(NSData*)data andError:(NSError* __autoreleasing *)error;

/**
 * Convience method to get a set of objects from XML
 *
 * @param classNames The names of the classes to expect
 * @param data The data to parse
 * @param error The error that occured (if any)
 *
 * @return an array of objects
 */
+(NSArray*)assembleXMLObjectCollectionWithClasses:(NSArray*)classNames data:(NSData*)data andError:(NSError* __autoreleasing *)error;

/**
 * Allocates and returns an autoreleased array of className objects
 *
 * @param className The name of the class to expect
 * @param data The data to parse
 * @param error The error that occured (if any)
 *
 * @return an array of objects
 */
-(NSArray*)getXMLObjectCollectionWithClass:(NSString*)className data:(NSData*)data andError:(NSError* __autoreleasing *)error;

/**
 * Allocates and returns an autoreleased object
 *
 * @param classMap Map tags to epic object names
 * @param data The data to parse
 * @param error The error that occured (if any)
 *
 * @return an object
 */
//-(id <NSObject, NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration>)parseWCFXMLWithClassMap:(NSDictionary*)classMap xmlData:(NSData*)data andError:(NSError**)error;
-(id)parseWCFXMLWithClassMap:(NSDictionary*)classMap xmlData:(NSData*)data andError:(NSError* __autoreleasing *)error;

/**
 * Allocates and returns an autoreleased object
 *
 * @param classMap Map tags to epic object names
 * @param data The data to parse
 * @param error The error that occured (if any)
 *
 * @return an object
 */
+(id)assembleWCFXMLWithClassMap:(NSDictionary*)classMap xmlData:(NSData*)data andError:(NSError* __autoreleasing *)error;
//+(id <NSObject, NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration>)assembleWCFXMLWithClassMap:(NSDictionary*)classMap xmlData:(NSData*)data andError:(NSError**)error;

/**
 * Allocates and returns an autoreleased array of objects specified by classNames
 *
 * @param classNames The names of the classes to expect
 * @param data The data to parse
 * @param error The error that occured (if any)
 *
 * @return an array of objects
 */
-(NSArray*)getXMLObjectCollectionWithClasses:(NSArray*)classNames data:(NSData*)data andError:(NSError* __autoreleasing *)error;

/** Internal */
-(void)pushWork;
/** Internal */
-(void)popWork;
/** Intenral */
-(void)pushParam;
/** Internal */
-(void)popParam;

/**
 * Set a parser error
 *
 * @param msg A message describing the error
 */
-(void)setError:(NSString*)msg;


@end
