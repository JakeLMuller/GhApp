//
//  WPCheckMessageResult.h
//  MyChart
//
//  Created by Zac Ling on 8/20/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

@class WPObject;

@interface WPCheckMessageResult : WPObject

@property (nonatomic, assign)	NSInteger       status;    // 1 is canReply; 0 is cannotReply
@property (nonatomic, assign)   NSInteger       note_id;   // the id of failure reason note for I18N

@end
