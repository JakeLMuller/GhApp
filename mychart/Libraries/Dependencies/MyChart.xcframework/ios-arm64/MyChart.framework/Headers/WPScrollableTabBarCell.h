//
//  WPScrollableTabBarCell.h
//  
//
//  Created by Matthew Flatau on 12/30/15.
//
//

#import <UIKit/UIKit.h>

static NSString * const kWPScrollableTabBarCellReuseIdentifier = @"WPScrollableTabBarCell";

@interface WPScrollableTabBarCell : UICollectionViewCell

@property (nonatomic, weak) IBOutlet UILabel     *titleLabel;
@property (nonatomic, weak) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIView      *topHighlightView;
@property (nonatomic, weak) IBOutlet UIView      *badgeIconView;
@property (nonatomic, weak) IBOutlet UILabel     *badgeLabel;
@property (strong, nonatomic) IBOutlet UIButton *bottomBadgeButton;
@property (weak, nonatomic) IBOutlet UIImageView *contextImageView;


@property (nonatomic, strong) UIImage *selectedImage;
@property (nonatomic, strong) UIImage *unselectedImage;
@property (nonatomic, strong) UIImage *contextImage;
@property (nonatomic, strong) UIColor *topHighlightViewColor;

@end
