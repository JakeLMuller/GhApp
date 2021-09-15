//
//  WPGetOrganizationsWithAccessToFeatureResponse.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 5/8/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPGetOrganizationsResult : WPObject
@property (strong, nonatomic) NSMutableArray* organizations;
@end

@interface WPGetOrganizationsWithAccessToFeatureResponse : WPResponse

@property (nonatomic, strong) WPGetOrganizationsResult *result;
/**
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
