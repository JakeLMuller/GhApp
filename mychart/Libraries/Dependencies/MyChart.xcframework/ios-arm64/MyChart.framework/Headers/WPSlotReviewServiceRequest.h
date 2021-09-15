//
//  WPSlotReviewServiceRequest.h
//  iChart
//
//  Created by Larry Irwin II on 8/5/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPSlotReviewServiceResponse.h"

@class WPSlotRequestProvider;
@class WPSlot;
@class WPSlotAppointment;
@class WPSlotAppointmentPool;
@class WPSlotAppointmentPoolOption;
@class WPAppointmentResource;

@interface WPSlotReviewServiceRequest : WPRequest

- (instancetype)initWithSlot:(WPSlot*)sSlot andRFVIndex:(NSString*)aRFVIndex useTeams:(BOOL)aUseTeams providerDepartments:(NSArray*)aProviderDepartments;

- (WPSlotReviewServiceResponse*)allocResponse;

/* 
 * Special XmlWriter function for this object because it is subclassed and this ensures that the body of this
 * object remains consistent. See WPPostAppointmentServiceRequest for example of use.
 */
- (void)writeXmlContentWithWriter:(EFXmlWriter*)writer;
+ (void)writeXmlNodeForSlot:(WPSlot*)slot withWriter:(EFXmlWriter*)writer;
+ (void)writeXmlNodeForSlotAppointment:(WPSlotAppointment*)slotAppt withWriter:(EFXmlWriter*)writer;
+ (void)writeXmlNodeForSlotAppointmentPool:(WPSlotAppointmentPool*)slotApptPool withWriter:(EFXmlWriter*)writer;
+ (void)writeXmlNodeForSlotAppointmentPoolOption:(WPSlotAppointmentPoolOption*)slotApptPoolOption withWriter:(EFXmlWriter*)writer;
+ (void)writeXmlNodeForAppointmentResource:(WPAppointmentResource*)resource withWriter:(EFXmlWriter*)writer;

@end
