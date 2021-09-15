//
//  WPTelemedicineUser.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//

#import "WPObject.h"

@interface WPTelemedicineUser : WPObject {
    NSString *username_;
    NSString *password_;
    NSString *memberID_;
    BOOL isOnline_;
}

@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *memberID;
@property (nonatomic) BOOL isOnline;

@end
