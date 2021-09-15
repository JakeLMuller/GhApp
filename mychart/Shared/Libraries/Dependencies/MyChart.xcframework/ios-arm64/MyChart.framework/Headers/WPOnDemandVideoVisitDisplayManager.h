//
//  WPOnDemandVideoVisitDisplayManager.h
//  MyChart
//
//  Created by Eric Shaw on 11/7/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@protocol WPOnDemandVideoVisitAlertDelegate <NSObject>

-(void)showOnDemandVideoVisitAlert:(UIAlertController*)alert;

@end

@interface WPOnDemandVideoVisitDisplayManager : WPObject

@property (nonatomic, assign) BOOL isSubscribed;
@property (assign) id <WPOnDemandVideoVisitAlertDelegate> delegate;
- (void)checkOnDemandNotificationSignup:(id)delegate;

@end

