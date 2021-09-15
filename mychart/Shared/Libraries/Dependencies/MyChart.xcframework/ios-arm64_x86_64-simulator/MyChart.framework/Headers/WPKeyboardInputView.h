//
//  WPKeyboardInputView.h
//  MyChart
//
//  Created by Matthew Flatau on 4/16/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WPKeyboardType) {
    kWPKeyboardTypeNumberPad,
};

/**
 * @brief Protocol that declares methods that get called when a key is pressed in the number pad.
 */
@protocol WPKeyboardInputViewDelegate

/**
 * @brief Protocol method called when a key is pressed in the number pad.
 * @return key - the key pressed in the keyboard
 */
- (void)keyboardDidPressKey:(NSString *)key;

/**
 * @brief Protocol method called when the keyboard key is pressed in the number pad.
 */
- (void)keyboardDidPressKB;

@optional

/**
 * @brief Protocol method called when the biometric key is pressed in the number pad.
 */
- (void)keyboardDidPressBiometricAuthenticationButton;

@end

@class WPServer;

@interface WPKeyboardInputView : UIView

- (instancetype)initWithDelegate:(NSObject <WPKeyboardInputViewDelegate> *)delegate andKeyboardType:(WPKeyboardType)keyboardType;
- (void)setKeyboardButtonAccessibilityText:(WPServer *)server;


/**
 Set the keyboard button's visibility. It should be hidden for SAML server.

 @param server the web server
 */
- (void)setKeyboardButtonVisibility:(WPServer *)server;

@property (nonatomic, weak) IBOutlet NSObject <WPKeyboardInputViewDelegate> *delegate;
@property (nonatomic, assign) BOOL showBiometricAuthButton;
@property (nonatomic, assign) BOOL showKeyboardButton;
@property (nonatomic, assign) WPKeyboardType keyboardType;
@property (nonatomic, strong) UIColor *buttonColor;

@end
