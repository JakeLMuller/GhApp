//
//  WPMedicalAdviceSettings.h
//  iChart
//
//  Created by Chetan Satish on 9/8/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import "WPObject.h"
#import "WPAttachmentSettings.h"

@interface WPMedicalAdviceSettings : WPObject {
	NSArray *_providerList;  //should be an array of WPMessageRecipients
	NSArray *_poolList;      //should be an array of WPMessageRecipients
	NSArray *_subjectList;
	WPAttachmentSettings *_attachmentSettings;	//attachment settings
}

@property (strong,nonatomic)	NSArray	*providerList;
@property (strong,nonatomic)	NSArray	*poolList;
@property (strong,nonatomic)	NSArray	*subjectList;
@property (strong,nonatomic)	WPAttachmentSettings *attachmentSettings;

@end
