//
//  WPCopyableLabel.h
//  iChart
//
//  Created by Jonathon Walz on 1/10/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPCopyableLabel : UILabel {
    NSString *textToCopy_;
}

@property (nonatomic, copy) NSString *textToCopy;

@end
