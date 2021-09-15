//
//  WPFDIContextItem.h
//
//
//  Created by Yash Vaka on 12/2/15.
//
//

#import "WPObject.h"

@interface WPFDIContextItem : WPObject

@property (nonatomic,strong) NSString* type;
@property (nonatomic,strong) NSString* contextItemName;
@property (nonatomic,strong) NSString* value;

-(instancetype)initWithType:(NSString *)type name:(NSString *)name andValue:(NSString *)value;

@end
