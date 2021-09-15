//
//  WPCurrentHealthIssuesServiceResponse.h
//  iChart
//
//  Created by Epic on 6/29/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *apallika 05/2017 478570 Adding support for external data

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPHealthIssueListResult.h"

@interface WPCurrentHealthIssuesServiceResponse : WPResponse {
	NSMutableArray * healthIssues;
}

@property (nonatomic, strong) NSMutableArray * healthIssues;
@property (nonatomic, strong) WPHealthIssueListResult *healthIssueListResult;

@end
