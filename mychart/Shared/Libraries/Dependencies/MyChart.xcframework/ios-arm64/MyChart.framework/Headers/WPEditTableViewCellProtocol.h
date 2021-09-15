//
//  WPEditTableViewCellProtocol.h
//  iChart
//
//  Created by Matthew Flatau on 9/18/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
@protocol WPEditTableViewCellProtocol <NSObject>

- (void)setIndexPath:(NSIndexPath *)indexPath;
- (NSIndexPath *)indexPath;
- (void)setObjectTag:(id)objectTag;
- (id)objectTag;
- (void)setCanResignFirstResponder:(BOOL)canResign;

@property (nonatomic, assign) BOOL showInfoButton;
@property (readonly, weak) UILabel *rowTitleLabel;
@property (readonly, weak) UILabel *rowDetailTextLabel;

@end
#endif
