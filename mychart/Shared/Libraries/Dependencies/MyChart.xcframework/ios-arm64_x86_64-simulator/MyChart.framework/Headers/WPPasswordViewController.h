//
//  WPSetPinViewController.h
//  MyChart
//
//  Created by Alex J White on 4/2/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPServer.h"

@interface WPPasswordViewController : WPViewController <UITextFieldDelegate>

-(instancetype)init;
-(instancetype)initWithServer:(WPServer *)server andType:(WPLoginTokenStatus)type;

@property (strong, nonatomic) WPServer *server;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *topLayoutConstraint;

- (void)didHitCancel:(id)sender;

@end
