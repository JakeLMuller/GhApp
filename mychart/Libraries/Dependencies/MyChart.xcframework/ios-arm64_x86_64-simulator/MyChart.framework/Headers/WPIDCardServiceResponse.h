//
//  IDCardServiceResponse.h
//  iChart
//
//  Created by Sanders Baik on 3/27/14.
//  Copyright © 2014-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPIDCard.h"

@interface WPIDCardServiceResponse : WPResponse

@property (nonatomic,strong) WPIDCard *idCard;

@end
