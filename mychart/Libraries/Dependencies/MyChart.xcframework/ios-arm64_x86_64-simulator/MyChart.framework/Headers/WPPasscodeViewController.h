//
//  WPPasscodeViewController.h
//  MyChart
//
//  Created by Ben Drda on 4/18/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPServer.h"
#import "WPKeyboardInputView.h"

@interface WPPasscodeViewController : WPViewController
@property (nonatomic, strong) WPServer *server;
@property (nonatomic, strong) NSString *authToken;
@property (nonatomic, strong) NSString *tokenDisplayName;
@property (nonatomic, strong) NSString *password;
@property (nonatomic) WPLoginTokenStatus type;
@property (nonatomic, weak) IBOutlet UIView *passcodeContainer;
@end
