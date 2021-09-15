//
//  WPLoadingView.h
//  iChart
//
//  Created by Epic on 7/21/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>


@interface WPLoadingView : UIView

+(void)hideView;
+(WPLoadingView *)showInView:(UIView*)view;

@end
