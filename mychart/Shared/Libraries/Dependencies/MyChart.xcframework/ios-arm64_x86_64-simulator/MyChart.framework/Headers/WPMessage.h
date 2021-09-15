//
//  WPMessage.h
//  iChart
//
//  Created by Chetan Satish on 9/2/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPMessageRecipient.h"
#import "WPUtil_Xml.h"
#import "WPAttachment.h"
#import "WPOrganizationInfo.h"
#import "IWPProviderImageSource.h"
#import "WPGetMessageViewersResult.h"
#import "WPCustomerServiceTopic.h"
#import "WPUser.h"
typedef NS_ENUM(NSInteger, WPMessageTaskType){
    kWPMessageTaskTypeScheduling = 1,
    kWPMessageTaskTypeQuestionnaire,
    kWPMessageTaskTypeHistoryQuestionnaire,
};

typedef NS_ENUM(NSInteger, MESSAGETYPE) {
    //message types, maps to categories in I WMG 30
    kMessageTypeReply = -1,
    
    kMessageTypeMedicalAdvice = 11,
    kMessageTypeAppointmentRequest = 12,
    kMessageTypeAppointmentCancel = 13,
    kMessageTypeCustomerService = 14,
    kMessageTypeHMSchedule = 15,
    kMessageTypeMedsRenewal = 16,
    kMessageTypeDemographicsUpdate = 17,
    kMessageTypeReferralRequest = 18,
    kMessageTypeCreditCardPayment = 19,
    kMessageTypePreferencesUpdate = 20,
    kMessageTypeHistoryQuestionnaire = 22,
    kMessageTypeEvisit = 25,
} ;

typedef NS_ENUM(NSInteger, WPMessageFolder) {
    kWPMessageFolderUnknown = 0,
    kWPMessageFolderInbox = 1,
    kWPMessageFolderSent = 2,
    kWPMessageFolderNoList = -2,
} ;

@interface WPMessage : WPObject <IWPProviderImageSource>

@property (nonatomic, strong)	NSString*			parentMessageID;
@property (nonatomic, strong)	WPMessageRecipient*	to;
@property (nonatomic, strong)	WPMessageRecipient*	from;
@property (nonatomic, strong)   WPCustomerServiceTopic* topic;
//TODO: Subject could be implemented as WPObjects - but at this time it is easier to use a series of strings because that works better with the current XML/business service structure
@property (nonatomic, strong)	NSString*		subject; //ToDo: subject should use NSObject since it uses ID/Name
@property (nonatomic, strong)	NSString*		body;
@property (nonatomic, strong)   NSString*       htmlBody;
@property (nonatomic, strong)	NSDate*			date;
@property (nonatomic, assign)	BOOL			read;
@property (nonatomic, assign)	BOOL			canBeReplied;
@property (nonatomic, assign)	BOOL			allowAttachmentsForReply;
@property (nonatomic, strong)	NSString*		note; //despite the name, this may contain why a message cannot be replied to
@property (nonatomic, strong)   NSString*		note_id;
@property (nonatomic, strong)   NSString*       encMsgInfo;
@property (nonatomic, assign)   BOOL            isBillingMessage;
@property (nonatomic, assign)	BOOL			hasIncompleteTask;
@property (nonatomic, assign)	BOOL			hasAttachments;
@property (nonatomic, assign)   int             attachmentCount;

// Message viewer properties
@property (nonatomic, strong)	NSMutableArray*	viewers;
@property (nonatomic, assign) WPMessageViewersSetting showViewersSetting;
@property (nonatomic, assign) WPConfidentialitySetting confidentialMessagingSetting;
@property (nonatomic, strong) NSString *userWPR;
@property (nonatomic, strong) NSString *patientWPR;
@property (nonatomic, strong)	NSMutableArray*	tasks;

@property (nonatomic, strong) NSString*			subjectID; //SPECIAL DATA: this should only be set when the subject came from a defined list of options
@property (nonatomic, strong) NSMutableArray*	attachments;
@property (nonatomic, strong)	NSString*		previewString;

@property (nonatomic) MESSAGETYPE messageType;
@property (nonatomic) WPMessageFolder messageFolder;

/// organization info for where this message came from
@property(nonatomic,strong) WPOrganizationInfo *orgInfo;

- (NSString *) getViewers;   //returns an auto-released string.

@end

@interface WPMessageTask : WPObject

@property (assign, nonatomic) WPMessageTaskType type;
@property (strong, nonatomic) NSString *ticketId;
@property (assign, nonatomic) BOOL isCompleted;

/*!
 * @brief returns whether a task type is supported for a specific user. Compares security points for the currently accessed patient's security class. (The user's security class if they access themselves, or the proxy relationship class if the user is accessing a subject).
 */
+ (BOOL) isTaskType:(WPMessageTaskType)type supportedForUser:(WPUser *)user;

@end


