//
//  WPSpringboardInfo.h
//  iChart
//
//  Created by Epic on 3/3/10.
//  Copyright © 2010-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

/**
 * Used by the springboard to generate the proper icons
 */
@interface WPSpringboardInfo : NSObject

@property (nonatomic, strong) NSString *defaultTitle;   /** Default title for the activity */
@property (nonatomic, strong) NSString *title;          /** Title below the icon */
@property (nonatomic, strong) NSString *stringKey;      /** Key to access the custom strings */
@property (nonatomic, strong) UIImage *hitImage;        /** Image to display when hit */
@property (nonatomic, strong) UIImage *image;           /** Image to dispaly when not hit */

@end
