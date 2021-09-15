//
//  WPTelemedicineVendor.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPTelemedicineRoom.h"
#import "WPTelemedicineUser.h"

typedef NS_ENUM(NSInteger, WPTelemedicineVendorID) {
    kWPTelemedicineVendorIDVidyo = 5
} ;

@interface WPTelemedicineVendor : WPObject {
    WPTelemedicineRoom *room_;
    WPTelemedicineUser *member_;
}
@property (nonatomic, strong) WPTelemedicineRoom *room;
@property (nonatomic, strong) WPTelemedicineUser *member;
@property (nonatomic, readonly) WPTelemedicineVendorID vendorID;

@end
