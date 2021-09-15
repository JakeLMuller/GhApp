//
//  EFXmlException.h
//  Tab
//
//  Created by Mike on 3/10/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <libxml/xmlreader.h>
#import <libxml/xmlerror.h>

@interface EFXmlException : NSException {
    int	_code;
    NSString  *_message;
    xmlErrorLevel _level;
    int	_line;
}

-(id)initWithError:(xmlErrorPtr)err;

+(EFXmlException*)fromCurrentError;

@end
