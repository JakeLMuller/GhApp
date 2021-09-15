//
//  WPHealthIssue.h
//  iChart
//
//  Created by Epic on 6/29/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *apallika 05/2017 478570 Add support for organization info

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPUtil_Dates.h"
#import "WPUtil_Xml.h"
#import "WPOrganizationInfo.h"
#import "WPHealthIssueCode.h"
/*!
 Health Issue
 */
@interface WPHealthIssue : WPObject<InlineEducationSourceProtocol> {
	NSDate *date;
    NSDate *dateNoted;
    NSMutableArray *orgInfo;
}

@property (nonatomic,strong,nullable) NSDate *date;
@property (nonatomic,strong,nullable) NSDate *dateNoted;
@property (nonatomic,strong,nullable) NSMutableArray *orgInfo;   //Holds an array of WPOrganizationInfo objects to account for
                                                        //deduplication where an allergy can come from >1 organization
@property (nonatomic,strong,nullable) NSMutableArray *codeList;
@property (nonatomic,strong,nullable) WPHealthIssueCode *primaryCode;

//InlineEducationSourceProtocol
@property(nonatomic) BOOL hasInlineEducationSource;
@property(nonatomic, nonnull) NSString* getInlineEducationContextID;
@property(nonatomic) InlineEducationType getInlineEducationContext;
@property(nonatomic, nonnull) NSString* getInlineEducationSearchTerm;

- (BOOL) isExternal;
- (WPOrganizationInfo *_Nullable) getFirstOrg;

// Helper method that loop through a list of health code and find/set the primary health code for the given health issue
- (void) generatePrimaryCode;
@end
