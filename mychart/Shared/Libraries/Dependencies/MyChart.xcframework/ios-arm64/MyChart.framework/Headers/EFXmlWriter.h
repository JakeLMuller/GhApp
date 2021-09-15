//
//  EFXmlWriter.h 
//  Tab
//
//  Created by Mike on 3/5/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 1/2014 282432 added write attribute name
//  *mflatau 03/2015 354336 Adding writeNumber

#import <Foundation/Foundation.h>
#import <libxml/xmlwriter.h>
#import "EFXmlException.h"

@interface EFXmlWriter : NSObject {
	xmlBufferPtr _buffer;
	xmlTextWriterPtr _writer;
}

+(NSString*)namespace2010;
+(NSString*)namespace2011;
+(NSString*)namespace2012;
+(NSString*)namespace2013;
+(NSString*)namespace2014;
+(NSString*)namespace2015;
+(NSString*)namespace2016;
+(NSString*)namespace2017;
+(NSString*)namespace2018;
+(NSString*)namespace2019;
+(NSString*)namespaceSOAP;
+(NSString*)namespaceMSArray;

-(id)init;
-(void)writeRootElement:(NSString*)elementName withNamespace:(NSString*)ns;
-(void)writeEndRootElement;
-(void)writeStartElement:(NSString*)elementName;
-(void)writeStartElement:(NSString*)elementName nameSpace:(NSString*)ns;
-(void)writeStartElement:(NSString*)prefix name:(NSString*)elementName;
-(void)writeStartElement:(NSString*)prefix name:(NSString*)elementName nameSpace:(NSString*)ns;
-(void)writeAttributeName:(NSString *)name andValue:(NSString *)value;
-(void)writeString:(NSString*)value;
-(void)writeNumber:(NSNumber *)num;
-(void)writeEndElement;
- (void)writeDictionary:(NSDictionary *)dictionary;

-(void)writeBase64:(NSData*)data;
-(NSData*)getData;
-(void)close;
@end
