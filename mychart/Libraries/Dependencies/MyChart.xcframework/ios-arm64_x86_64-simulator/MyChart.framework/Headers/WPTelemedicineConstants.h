//
//  WPTelemedicineConstants.h
//  iChart
//
//  Created by Matthew Flatau on 3/5/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

typedef NS_ENUM(NSInteger, WPTelemedicineConnectionStatus) {
    kWPTelemedicineStatusUnsure = 0,
    kWPTelemedicineStatusJoined = 1,
    kWPTelemedicineStatusHangup = 2,
    kWPTelemedicineStatusWaitRoom = 3,
};


typedef NS_ENUM(NSInteger, WPTelemedicineStreamingStatus) {
    kWPTelemedicineStreamingStatusPlay = 0,                //Play both directions, audio and video
    kWPTelemedicineStreamingStatusPauseBothOriginator = 1, //Pause audio and video locally
    kWPTelemedicineStreamingStatusPauseBoth = 2,
    kWPTelemedicineStreamingStatusPauseVideoOriginator = 3,    //Pause local video, audio is playing
    kWPTelemedicineStreamingStatusPauseVideo = 4,
    kWPTelemedicineStreamingStatusPauseAudioOriginator = 5,    //Pause local audio, video is playing
    kWPTelemedicineStreamingStatusPauseAudio = 6,
    kWPTelemedicineStreamingStatusPrivacy = 7,
    kWPTelemedicineStreamingStatusPrivacyAndMute = 8
};
