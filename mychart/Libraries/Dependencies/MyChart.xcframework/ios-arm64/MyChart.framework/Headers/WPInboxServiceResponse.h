//
//  WPInboxServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 9/2/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"


//Result object
@interface MessageListResult : WPObject
{
	NSMutableArray*	messageList;
	BOOL			loadMore;
	NSString*		positionInfo;
    NSMutableArray* nextMessagesMap;
}

@property (strong, nonatomic) NSMutableArray*	messageList;
@property (assign, nonatomic) BOOL				loadMore;
@property (strong, nonatomic) NSString*			positionInfo;
@property (strong, nonatomic) NSMutableArray*   nextMessagesMap;

@end

//Respose Object
@interface WPInboxServiceResponse : WPResponse {
	MessageListResult *msgListResult;
}

@property (strong,nonatomic) MessageListResult *msgListResult;

@end
