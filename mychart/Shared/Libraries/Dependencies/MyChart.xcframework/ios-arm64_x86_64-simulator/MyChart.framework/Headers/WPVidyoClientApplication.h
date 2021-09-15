//
//  WPVidyoClientApplication
//  iChart
//
//  Created by Matt Flatau on 1/15/2014.
//  Copyright © 2014-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 12/2014 338621 Cleaning up WPVidyoViewControllerProtocol
//  *mflatau 03/2015 360976 Handling audio interruptions

#if (VIDYO_ALLOWED)

#include "VidyoClient.h"
#include "WPStreamingStatusResult.h"
#include <AVFoundation/AVFoundation.h>


#ifndef VIDYOCLIENT_H
#define VIDYOCLIENT_H


// Receive out event from VidyoClient
void vidyoClientOnVidyoClientEvent(VidyoClientOutEvent actionType,
										 VidyoVoidPtr param, 
										 VidyoUint paramSize,
										 VidyoVoidPtr data);

#endif // VIDYOCLIENT_H

#pragma mark - WPVidyoNotifications
static NSString * const WPNotificationVidyoJoinConference = @"WPNotificationVidyoJoinConference";
static NSString * const WPNotificationVidyoSignedOut = @"WPNotificationVidyoSignedOut";
static NSString * const WPNotificationVidyoSignedOutReasonKey = @"WPNotificationVidyoSignedOutReasonKey";
static NSString * const WPNotificationVidyoConferenceStarted = @"WPNotificationVidyoConferenceStarted";
static NSString * const WPNotificationVidyoParticipantsChanged = @"WPNotificationVidyoParticipantsChanged";
static NSString * const WPNotificationVidyoServerMutedAudio = @"WPNotificationVidyoServerMutedAudio";
static NSString * const WPNotificationVidyoServerMutedVideo = @"WPNotificationVidyoServerMutedVideo";
static NSString * const WPNotificationVidyoClientMutedVideo = @"WPNotificationVidyoClientMutedVideo";
static NSString * const WPNotificationVidyoClientMutedAudio = @"WPNotificationVidyoClientMutedAudio";
static NSString * const WPNotificationVidyoOutOfLicenses = @"WPNotificationVidyoOutOfLicenses";
static NSString * const WPNotificationVidyoBringControlsToFront = @"WPNotificationVidyoBringControlsToFront";
static NSString * const WPNotificationVidyoNeedsOrientationAndRectFromController = @"WPNotificationVidyoNeedsOrientationAndRectFromController";
static NSString * const WPNotificationVidyoMicNotGrabbed = @"WPNotificationVidyoMicNotGrabbed";

#pragma mark - WPVidyoNotification Keys
/*
 * Used with WPNotificationVidyoParticipantsChanged
 */
static NSString * const WPNotificationKeyVidyoParticipantCount = @"WPNotificationKeyVidyoParticipantCount";

/*
 * Used with WPNotificationVidyoServerMutedAudio, WPNotificationVidyoServerMutedVideo,
 * WPNotificationVidyoClientMutedVideo, WPNotificationVidyoClientMutedAudio
 */
static NSString * const WPNotificationKeyVidyoMuted = @"WPNotificationKeyVidyoMuted";

typedef NS_ENUM(NSInteger, WPVidyoClientBackgroundStatus) {
    WPVidyoClientBackgroundStatusInConference,
    WPVidyoClientBackgroundStatusVidyoNotStarted,
    WPVidyoClientBackgroundStatusNoConferenceSignedIn,
    WPVidyoClientBackgroundStatusRejoiningConference,
    WPVidyoClientBackgroundStatusSigningOut,
};

@interface WPVidyoClientApplication : NSObject

+ (BOOL)clientInitWithController:(UIViewController *)vidyoController orientation:(UIInterfaceOrientation)orientation andRect:(VidyoRect)videoRect;
+ (VidyoClientOrientation)getVideoOrientationForInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation;
+ (VidyoRect)vidyoRectForFrame:(CGRect)frame;

//Events (require VIDYO_ALLOWED to do anything)
+ (BOOL)attemptLoginWithUsername:(NSString *)name password:(NSString *)password toPortal:(NSString *)address;
+ (void)toggleCameraWithEvent;
+ (void)switchCameras;
+ (void)resetCamera;
+ (void)resizeWithRect:(VidyoRect)rect;
+ (void)resizeForOrientation:(UIInterfaceOrientation)orientation withRect:(VidyoRect)rect;
+ (void)rotateToOrientation:(UIInterfaceOrientation)orientation;
+ (void)showPreview:(BOOL)isPip;
+ (void)muteVideo:(BOOL)willMute;
+ (void)muteMicrophone:(BOOL)willMute;
+ (WPVidyoClientBackgroundStatus)statusForSetBackgroundActivity:(BOOL)shouldBackground;
+ (void)updateAudioCallState:(VidyoClientTelephoneCallState)type;
+ (BOOL)signOff;
+ (void)stopClient;
+ (void)hideVideo;

@end

#endif // VIDYO_ALLOWED
