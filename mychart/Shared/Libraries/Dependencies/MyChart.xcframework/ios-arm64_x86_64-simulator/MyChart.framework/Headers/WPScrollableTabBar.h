//
//  WPScrollableTabBar.h
//  
//
//  Created by Matthew Flatau on 12/30/15.
//
//

#import <UIKit/UIKit.h>

@class WPScrollableTabBar;

@protocol WPScrollableTabBarDelegate <NSObject>

- (void)scrollableTabBar:(WPScrollableTabBar *)tabBar didSelectItemAtIndex:(NSInteger)index;

@end


typedef NS_ENUM(NSInteger, WPScrollableTabBarItemStyle) {
    kWPScrollableTabBarItemStyleNormal,
    kWPScrollableTabBarItemStyleRounded,
};


@interface WPScrollableTabBarItem : NSObject

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) UIImage *unselectedImage;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIImage *contextIcon;  //icon on the leading side of the title that can be used to convey additional context
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) UIColor *topHighlightViewColor; // By default, it will be the tintColor, this is for override
@property (nonatomic, strong) UIColor *imageBorderColor;
@property (nonatomic, strong) NSNumber *badgeCount;
@property (nonatomic, assign) WPScrollableTabBarItemStyle style;
@property (nonatomic, strong) NSString *accessibilityLabelTitle; // Override the default accessibility title
@property (nonatomic) BOOL showBottomBadge;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end



@interface WPScrollableTabBar : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, weak) IBOutlet id <WPScrollableTabBarDelegate> tabBarDelegate;
@property (nonatomic, assign) NSInteger selectedIndex;

@end
