//
//  WPMessageDetailResponse.h
//  iChart
//
//  Created by Chetan Satish on 9/21/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPMessage.h"
#import "WPMessageViewer.h"


@interface WPMessageDetailResponse : WPResponse

@property (nonatomic,strong) WPMessage* respMessage;

-(void)loadFromXMLData:(NSData*)xml;

@end
