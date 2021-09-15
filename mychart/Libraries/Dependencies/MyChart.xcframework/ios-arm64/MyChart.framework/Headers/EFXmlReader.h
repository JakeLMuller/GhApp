//
//  EFXmlReader.h
//  Tab
//
//  Created by Mike on 3/10/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <libxml/xmlreader.h>
#import "EFXmlException.h"

@interface EFXmlReader : NSObject {
	NSData *_buffer;
	xmlTextReaderPtr _reader;
}


-(id)initWithData:(NSData*)data;
-(xmlElementType)moveToContent;
-(bool)moveToElement;

-(bool)read;

-(xmlElementType)nodeType;

-(void)readStartElement;
-(void)readStartElement:(NSString*)name;
-(void)readEndElement;
-(NSString*)readString;
-(NSData*)readContentAsBase64;

-(NSString*)readElementString;
-(NSString*)readElementString:(NSString*)name;
-(bool)isStartElement;
-(bool)isStartElement:(NSString*)name;
-(bool)isEmptyElement;
-(NSString*)localName;
-(NSString*)name;
-(NSString*)value;

-(NSString*)getAttribute:(NSString*)name;

-(void)skip;

@end
