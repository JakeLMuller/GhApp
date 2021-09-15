//
//  WPGetMessageAttachmentsResponse.h
//  MyChart
//
//  Created by Yash Vaka on 2/1/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"

@interface WPAttachmentsResult : WPObject

@property (strong,nonatomic) NSMutableArray *attachments;

@end

@interface WPGetMessageAttachmentsResponse : WPResponse

@property (nonatomic, strong) WPAttachmentsResult *attachmentsResult;

@end

