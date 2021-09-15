//
//  WPMessageViewController.h
//  iChart
//
//  Created by Epic on 9/4/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *bdrda 12/11 221804 I18N
//  *mflatau 04/2014 310313 Adding underscores to variables to distinguish from properties
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 01/2015 338750 clean up

#import <UIKit/UIKit.h>
#import "WPViewController.h"
#import "WPMessage.h"
#import "WPProviderImageView.h"
#import "WPShareViewController.h"

@class WPMessage;

@interface WPMessageViewController : WPViewController <WPShareDelegate>

@property (nonatomic, strong) NSString *messageID;
@property (nonatomic, strong) WPMessage *message;       // This is the message object passed in from the message list
@property (nonatomic, strong) WPMessage *messageDetail; // This is the real message detail object loaded from IC
@property (nonatomic) BOOL isMessageIDEncrypted;

@property (nonatomic) BOOL h2gEnabled;
@property (nonatomic, strong) WPOrganizationInfo *orgInfo;

//Used for peek and pop
@property (nonatomic, assign) BOOL previouslyUnread;

@property (weak, nonatomic) IBOutlet UIScrollView *messageScrollView;
@property (weak, nonatomic) IBOutlet UIStackView *messageStackView;

@property (weak, nonatomic) IBOutlet UILabel  *messageRecipientLabel;
@property (strong, nonatomic) IBOutlet UIView *bodyView;
@property (nonatomic, weak) IBOutlet WPProviderImageView *providerImageView;

@property (nonatomic, weak) IBOutlet UIToolbar *toolBar;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *replyButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *trashButton;

//Used only for inbox messages
@property (strong, nonatomic) IBOutlet UIView *tasksHeaderView;
@property (weak, nonatomic) IBOutlet UILabel *tasksHeaderLabel;

@property (strong, nonatomic) IBOutlet UIView *attachmentsView;
@property (weak, nonatomic) IBOutlet UILabel *attachmentsLabel;
@property (weak, nonatomic) IBOutlet UIImageView *attachmentsIcon;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *attachmentLoadingIndicator;

@property (strong, nonatomic) IBOutlet UIView *messageViewersView;
@property (weak, nonatomic) IBOutlet UILabel *messageViewersLabel;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *animationConstraint;



// IB Actions
- (IBAction)replyMessage:(id)sender;
- (IBAction)deleteMessage:(id)sender;
- (IBAction)getMedicalAdvice:(id)sender;

- (instancetype)initWithMessageID:(NSString *)msgID; //default mesage type would be inbox
- (instancetype)initWithMessage:(WPMessage *)message;

- (void)loadData;
- (void)deleteMessageRequest:(WPMessage *)message;

@end

