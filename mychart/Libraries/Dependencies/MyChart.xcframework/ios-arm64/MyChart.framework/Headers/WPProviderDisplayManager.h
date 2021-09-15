//
//  WPProviderDisplayManager.h
//  iChart
//
//  Created by Ben Drda on 1/6/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WPProvider;

@interface WPProviderDisplayManager : NSObject {

}

+(NSString *) displayNameFromProvider:(WPProvider *) provider includePCP:(BOOL) includePCP;

@end
