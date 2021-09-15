//
//  WPTelemedicineRoom.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//

#import "WPObject.h"

@interface WPTelemedicineRoom : WPObject {
    NSString *roomPin_;
    BOOL isOccupied_;
    NSString *roomID_;
    NSString *portalAddress_;
}
@property (nonatomic, strong) NSString *roomPin;
@property (nonatomic) BOOL isOccupied;
@property (nonatomic, strong) NSString *roomID;
@property (nonatomic, strong) NSString *portalAddress;
@property (nonatomic, readonly) NSString *urlString;

@end
