//
//  WPSlotsInformationResult.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"

@interface WPSlotsInformationResult : WPObject {

	/*
	 * Notes on error messages for searching slots
	 *
	 * cache:start at doSearch^WPASAP10
	 * web site: DisplayConfig gets values from mode=apptmake. if less then MAX_SEARCH_ERROR_INDEX
	 *   then use error node named "searchX" where X=code. Otherwise use error node named "custom".
	 *   We will mimic this in iPhone by private helper function to get error string for code. Also,
	 *   the web only shows an error if there is a code && the slot count == 0 && teams are not an option
	 *   (see WPApptSolsManager.cls)
	 *
	 *  An error code of 0 means no error.
	 */
	NSNumber*			searchStatusCode_;  
	NSString*			searchStatus_;
	
	NSNumber*			minSlots_;
	NSNumber*			totalSlotCount_;
	NSMutableArray*		slots_;				//WPSlot
	
	BOOL				isAdvanced_;
	BOOL				moreNext_;
	BOOL				isTeamSchedulingOK_;
	BOOL				canIgnoreSearchStatusCode_;

}

@property (nonatomic, strong) NSNumber*			searchStatusCode;
@property (nonatomic, strong) NSString*			searchStatus;
@property (nonatomic, strong) NSNumber*			minSlots;
@property (nonatomic, strong) NSNumber*			totalSlotCount;
@property (nonatomic, strong) NSMutableArray*	slots;

@property (nonatomic, assign) BOOL				isAdvanced;
@property (nonatomic, assign) BOOL				moreNext;
@property (nonatomic, assign) BOOL				isTeamSchedulingOK;
@property (nonatomic, readonly) BOOL			canIgnoreSearchStatusCode;

@end
