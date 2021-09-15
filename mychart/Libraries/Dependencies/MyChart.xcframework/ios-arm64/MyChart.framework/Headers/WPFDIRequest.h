//
//  WPFDIRequest.h
//  MyChart
//
//  Created by Yash Vaka on 11/6/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPFDIContextItem.h"

@class WPFDIResponse;

@interface WPFDIRequest : WPRequest{
}

- (WPFDIResponse *)allocResponse;

@property (strong, nonatomic) NSString *fdiID;
@property (assign, nonatomic) BOOL isFdiIdEncrypted;
@property (strong, nonatomic) NSString *documentId;
@property (strong, nonatomic) NSString *nowEncounterCSN;
@property (strong, nonatomic) NSString *nowEncounterUCI;
@property (strong, nonatomic) NSString *fdiIDType;
@property (strong, nonatomic) NSString *serverUniqueID;
@property (strong, nonatomic) NSMutableArray *contextArray;
@property (strong, nonatomic) WPOrganizationInfo *organizationInfo;
@property (strong, nonatomic) NSString *ltkID;

@end

