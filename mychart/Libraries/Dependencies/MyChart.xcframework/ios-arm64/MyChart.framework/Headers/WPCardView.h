//
//  WPCardView.h
//  MyChart
//
//  Created by Matthew Flatau on 1/23/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, kWPCardType) {
    kWPCardTypeNormal,
    kWPCardTypeTopHalf, //Just supposed to be the top have of a card
};


@interface WPCardView : UIView

@property (nonatomic, assign) kWPCardType cardType;
-(void) clearLabelsValues;

@end
