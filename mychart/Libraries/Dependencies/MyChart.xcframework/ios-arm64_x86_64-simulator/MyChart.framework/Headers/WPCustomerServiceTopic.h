//
//  WPCustomerServiceTopic.h
//  MyChart
//
//  Created by Justin Schneider on 1/17/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPCustomerServiceTopic : WPObject

@property (strong, nonatomic)   NSString*   title;
@property (strong, nonatomic)   NSString*   topicID;

-(id) initWithTopicID:(NSString *) topicID andTitle:(NSString *) title;

@end
