//
//  WPTestResultDetailComponentAPI.h
//  MyChart
//
//  Created by Zach Rawson on 9/18/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

//"Bridging" class to allow Swift components to reuse the existing MyChart Test Result details code while the framework is not fully migrated over to PE / MyChart Now. Once that migration is complete, this should be deleted.

@interface WPTestResultDetailComponentAPI : NSObject <PETestResultDetailComponentAPIProtocol>

@end
