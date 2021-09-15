//
//  WPRoleInfo.h
//  
//
//  Created by Yash Vaka on 1/11/16.
//
//

#import "WPObject.h"
#import "WPCategory.h"

@interface WPRoleInfo : WPObject

@property (nonatomic, strong) WPCategory*		Relationship;
@property (nonatomic, strong) WPCategory*		PCPType;
@property (nonatomic, strong) WPCategory*		Specialty;

@end
