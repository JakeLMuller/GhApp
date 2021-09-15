//
//  WPGetMessageViewersResponse.h
//  MyChart
//
//  Created by Alex J White on 2/8/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPGetMessageViewersResult.h"

@interface WPGetMessageViewersResponse : WPResponse

@property (nonatomic,strong) WPGetMessageViewersResult *result;

-(void)loadFromXMLData:(NSData*)xml;


@end
