//
//  WPTestTranscription.h
//  iChart
//
//  Created by Chetan Satish on 7/2/10.
//  Copyright © 2010-2021 Epic. All rights reserved.

#import <Foundation/Foundation.h>
#import "WPObject.h"


@interface WPTestTranscription : WPObject {
	NSString *documentID;
	NSString *text;
}

@property (nonatomic,strong, nullable) NSString *documentID;
@property (nonatomic,strong, nullable) NSString *text;

@end
