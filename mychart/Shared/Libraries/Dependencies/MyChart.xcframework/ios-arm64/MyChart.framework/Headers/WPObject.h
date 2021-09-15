//
//  WPObject.h
//  iChart
//
//  Created by Larry Irwin II on 4/22/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

@class EFXmlWriter;

@interface WPObject : NSObject <NSCoding>

@property (nonatomic, strong)	NSString*	objectID;
@property (nonatomic, weak)     NSString*	ID;       //alias for objectID. Easier to parse objects from C# than having 'ID' attributes
@property (nonatomic, strong)	NSString*	name;

//Virtual properties
@property (strong, nonatomic)	NSString*	displayName;
@property (weak, nonatomic, readonly)	NSString*	description;

- (instancetype)initWithObjectID:(NSString *)objectID andName:(NSString *)name;

/**
 * Called by the XML parsing method and used to set the internal values
 * This method uses KVP as the final call so all subclasses that override
 * this method SHOULD call super as the LAST line of the method
 * 
 * @param value the incoming XML value (currently a String or an Array)
 * @param key the key to assign the value to
 */
-(void)setXMLValue:(id)value forKey:(NSString*)key;

/**
 * To prevent an object from being serialized, override this
 * method and return nil
 *
 * @return an object to signal this object allows serialization
 */
+(BOOL)allowsXMLSerialization;

/*
 * Default compare which is by name. Used for sorting WPObject in a list.
 */
- (NSComparisonResult)compare:(WPObject *)otherObject;

@end
