//
//  WPTelemedicineViewController.h
//  iChart
//
//  Created by Matthew Flatau on 3/5/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPAppointment.h"
#import "WPTelemedicineRoom.h"
#import "WPTelemedicineUser.h"
#import "WPSetConnectionStatusRequest.h"
#import "WPSetConnectionStatusResponse.h"
#import "WPSetStreamingStatusRequest.h"
#import "WPProviderImageView.h"

typedef NS_ENUM(NSInteger, WPVideoErrorType) {
    WPVideoErrorTypeInitFailed,
    WPVideoErrorTypeLoginFailed,
    WPVideoErrorTypeJoinConferenceFailed,
    WPVideoErrorTypeOutOfLicenses,
    WPVideoErrorTypeSetConnectionStatusJoinedFailed,
    WPVideoErrorTypeMicNotGrabbed,
} ;

@class WPInitVideoResult;

extern const NSTimeInterval kWPButtonAnimationDuration;

@interface WPTelemedicineViewController : WPViewController

@property (nonatomic, strong) WPAppointment *appointment;
@property(nonatomic, strong) WPTelemedicineRoom *videoRoom;
@property(nonatomic, strong) WPTelemedicineUser *videoUser;
@property (nonatomic, strong) NSString *videoVisitKey;

@property (nonatomic, strong) WPSetConnectionStatusRequest *connectionStatusRequest;

@property (nonatomic, assign) WPTelemedicineStreamingStatus status;

//weak IBOutlets
@property (nonatomic, weak) IBOutlet WPProviderImageView *doctorIcon;
@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UILabel *subtitleLabel;

@property (nonatomic, weak) IBOutlet UIView *bokehBackground;
@property (nonatomic, weak) IBOutlet UIView *bokehBackground1;
@property (nonatomic, weak) IBOutlet UIView *bokehBackground2;
@property (nonatomic, weak) IBOutlet UIView *bokehBackground3;
@property (nonatomic, weak) IBOutlet UIView *blackBackground;
@property (nonatomic, weak) IBOutlet UIView *titleContainerView;
@property (nonatomic, weak) IBOutlet UIAlertController *alert;
@property (nonatomic, weak) IBOutlet UILabel *statusLabel;

@property (nonatomic, weak) IBOutlet UIButton *cameraButton;
@property (nonatomic, weak) IBOutlet UIButton *microphoneButton;
@property (nonatomic, weak) IBOutlet UIButton *hangupButton;

//Strong IBOutlets
@property (nonatomic, strong) IBOutlet UIView *captureTouchView;    //Used to prevent touches being send to the video client

@property (nonatomic, assign) BOOL microphoneMutedByUser; //Microphone has been muted by the user
@property (nonatomic, assign) BOOL audioMutedBySystem; //Lost the audio stream due to another application, i.e. facetime
@property (nonatomic, assign) BOOL audioMutedByServer; //Muted by the server
@property (nonatomic, assign) BOOL videoMuted;

@property (nonatomic, assign) BOOL shouldPerformLogin;
@property (nonatomic, assign) BOOL isSubscribed;

@property (nonatomic, assign) BOOL errorGrabbingMic; //Vidyo wasn't able to grab the mic

//Buttons
- (IBAction)pressedCameraButton:(id)sender;
- (IBAction)pressedMicrophoneButton:(id)sender;
- (IBAction)pressedHangupButton:(id)sender;
- (IBAction)captureTouchViewPressed:(id)sender;

- (instancetype)initWithAppointment:(WPAppointment *)appointment andInitVideoResult:(WPInitVideoResult *)result;

- (void)animateBokeh;
- (void)killBokeh;

//Outgoing webservice calls
- (void)callSetConnectionStatus:(WPTelemedicineConnectionStatus)connectionStatus;
- (void)setStreamingStatus:(WPTelemedicineStreamingStatus)status;
//Incoming webservice calls
- (void)didSetConnectionStatusJoinedWithResponse:(WPSetConnectionStatusResponse*)resp;
- (void)showErrorMessageWithType:(WPVideoErrorType)errorType;
- (void)showSignOffMessage;


- (void)updateMicrophoneButton;
- (void)updateAudioStatus:(BOOL)didMute;
- (void)updateVideoButton:(BOOL)didMute;
- (void)updateStatusLabels;
- (void)leaveView;
- (void)performLogin;
- (void)signOff;

- (void)showHangupAlert;
- (void)setUpAudioDevices;
- (void)chooseHeadphonesForAudio;

- (void)audioSessionStopped;
- (void)audioSessionResumed;

- (void)didBecomeActive;
- (void)willResignActive;

- (void)centerStatusLabel;
@end
