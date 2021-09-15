//
//  WPSingleTextFieldView.h
//  MyChart
//
//  Created by Yash Vaka on 3/14/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPSingleTextFieldView : UIView

@property (weak, nonatomic) IBOutlet UILabel *header;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIView *inputBackgroundView;

-(void) initWithHeaderString:(NSString *) headerString;

@end
