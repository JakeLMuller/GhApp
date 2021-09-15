//
//  WPGetMedicalAdviceSubjectListViewController.h
//  iChart
//
//  Created by Larry Irwin II on 4/25/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPObject.h"
#import "WPMessage.h"
#import "WPPopupViewController.h"

@protocol WPGetMedicalAdviceSubjectPickerDelegate <NSObject>
- (void) WPGetMedicalAdviceSubjectDelegateSelectedSubject:(WPObject*)subject;
@end

@interface WPGetMedicalAdviceSubjectListViewController : WPPopupViewController
	<UITableViewDelegate, UITableViewDataSource>
{
	WPMessage*		currentMessage;
	NSArray*		listOfSubjects;
	NSIndexPath*	currentSelection;
	id<WPGetMedicalAdviceSubjectPickerDelegate>	__weak delegate;
}

@property (nonatomic, weak) id<WPGetMedicalAdviceSubjectPickerDelegate>	delegate;

- (id)initWithSubjects:(NSArray *)subjectList forMessage:(WPMessage*)message;
@end
