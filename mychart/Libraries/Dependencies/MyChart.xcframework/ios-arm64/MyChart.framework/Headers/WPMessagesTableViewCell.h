//
//  WPMessagesTableViewCell.h
//  MyChart
//
//  Created by Chetan Satish on 1/22/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"
#import "WPProviderImageView.h"
#import "WPMessage.h"

typedef NS_OPTIONS(NSUInteger, WPMessageIcon) {
    kWPMessageIconUnread = 1 << 0,
    kWPMessageIconTask = 1 << 1,
} ;


@interface WPMessagesTableViewCell : WPCustomSelectionTableViewCell

// Public Outlets

@property (nonatomic, weak) IBOutlet UILabel *recipientLabel;
@property (nonatomic, weak) IBOutlet UILabel *subjectLabel;
@property (nonatomic, weak) IBOutlet UILabel *dateTextLabel;            /**< Label that holds the date */
@property (nonatomic, weak) IBOutlet UILabel *previewLabel;

@property (weak, nonatomic) IBOutlet WPProviderImageView *providerImageView;
@property (weak, nonatomic) IBOutlet UIImageView *taskIconImageView;
@property (weak, nonatomic) IBOutlet UIImageView *attachmentIconImageView;
@property (weak, nonatomic) IBOutlet UIView *customSeparator;
@property (weak, nonatomic) IBOutlet UIImageView *disclosureIndicator;
@property (weak, nonatomic) IBOutlet UIImageView *externalDataIcon;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *customSeparatorHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *patientReadConstraint;

//Used for inbox messages
@property (weak, nonatomic) IBOutlet UIView *unreadMessageIndicator;

//Used for sent messages
@property (weak, nonatomic) IBOutlet UIView *providerUnreadView;
@property (weak, nonatomic) IBOutlet UIStackView *providerUnreadStackView;
@property (weak, nonatomic) IBOutlet UIImageView *unreadImageView;
@property (nonatomic, weak) IBOutlet UILabel *providerUnreadLabel;


/**
 Sets up the message cell for inbox (received) messages

 @param message The message model to set the view up with
 */
- (void)setupInboxWithMessage:(WPMessage *)message;


/**
 Sets up the message cell for outbox (sent) messages

 @param message The message model to set the view up with
 */
- (void)setupSentWithMessage:(WPMessage *)message;

@end
