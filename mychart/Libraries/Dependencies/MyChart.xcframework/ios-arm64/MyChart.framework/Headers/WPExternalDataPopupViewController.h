//
//  WPExternalDataPopupViewController.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 5/5/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
//  View controller for the popup that is displayed when the external data icon on a health summary table cell is tapped. More information is in WPExternalDataPopupView.h

#import "WPPopupViewController.h"
#import "WPOrganizationInfo.h"

@interface WPExternalDataPopupViewController : WPPopupViewController

@property (nonatomic, strong) NSMutableArray *  organizations;
@property (nonatomic, assign) BOOL              isDedupDataSource;
@property (nonatomic, assign) BOOL              shouldShowUpToDateString;
@property (nonatomic, assign) BOOL              shouldShowOrgErrorText;

- (instancetype)initWithOrgs: (NSMutableArray *) orgs andTitle: (NSString*)title;
- (instancetype)initWithOrgs: (NSMutableArray *) orgs andTitle: (NSString *)title isDedupDataSource:(BOOL)isDedupDataSource;
- (instancetype)initWithOrgs: (NSMutableArray *) orgs andTitle: (NSString *)title isDedupDataSource:(BOOL)isDedupDataSource shouldShowUpToDateString:(BOOL)shouldShowUpToDateString;
- (instancetype)initWithOrgs: (NSMutableArray *) orgs andTitle: (NSString *)title isDedupDataSource:(BOOL)isDedupDataSource shouldShowUpToDateString:(BOOL)shouldShowUpToDateString shouldShowOrgErrorText:(BOOL)shouldShowOrgErrorText;

@end
