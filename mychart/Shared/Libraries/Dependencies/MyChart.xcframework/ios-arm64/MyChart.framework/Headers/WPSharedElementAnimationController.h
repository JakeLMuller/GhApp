//
//  WPSharedElementAnimationController.h
//  MyChart
//
//  Created by Nathan Hekman on 9/26/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//




@interface WPSharedElementAnimationController :  NSObject<UIViewControllerAnimatedTransitioning>

@property (nonatomic, strong) UIViewController *componentView;

- (instancetype)initWithSharedElements:(NSArray<id<PEComponentHostSharedAnimationElementProtocol>> *)sharedElements andBoundingElement:(id<PEComponentHostSharedAnimationElementProtocol>)boundingElement forPresentation:(BOOL)isPresenting;

@end
