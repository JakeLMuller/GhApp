//
//  WPUtil_UI.h
//  iChart
//
//  Created by Larry Irwin II on 7/8/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, kWPAlignmentType) {
	kWPAlignmentCenterFix,
	kWPAlignmentRightFix,
	kWPAlignmentLeftFix,
} ;

typedef NS_ENUM(NSInteger, WPButtonStyle) {
    kWPButtonStylePositiveAction,
    kWPButtonStyleNegativeAction,
    kWPButtonStyleNeutralLight,
    kWPButtonStyleNeutralDark,
} ;

#define UIScreenMainScreen	[UIScreen mainScreen]
#define UIScreenBounds		[UIScreenMainScreen bounds]

#define UIScreenWidth		UIScreenBounds.size.width
#define UIScreenHeight		UIScreenBounds.size.height
#define UINavigationBarPortraitHeight		64
#define UINavigationBarLandscapeHeight		49

#define WP_TOOLBAR_HEIGHT		44

extern const CGFloat kWPHeaderHeight;
extern const CGFloat kWPFirstHeaderHeight;


@interface WPUtil_UI : NSObject {

}

/// Reduces a color's lightness for better contrast
+ (UIColor *)getColorForAccessibility:(UIColor *)colorToConvert;

/*
 * Calls the appropriate UIGraphicsBeginImageContext function, based on OS.
 * The right function needs to be called to display high-res images for iPhone 4.
 */
+(void)beginImageContext:(CGSize) size;


/*
 * Returns custom Accessory image view for selected/unselected state
 */
+(UIImageView *)accessoryImageView:(BOOL)selected;

/*
 * Print out the details of a frame, since it seems like we always need to be debugging frames,bounds,etc
 */
+(void)printFrame:(CGRect)frame;
+(void)printFrame:(CGRect)frame withDesc:(NSString*)desc;

/*
 * Draw a gradient within the given path
 */
+(void) drawGradientInPath:(CGPathRef)path 
			   withContext:(CGContextRef)context 
		   usingColorSpace:(CGColorSpaceRef)colorSpace 
				  topColor:(CGColorRef)topColor 
			   bottomColor:(CGColorRef)bottomColor;
+(void) drawGradientInPath:(CGPathRef)path 
			   withContext:(CGContextRef)context 
		   usingColorSpace:(CGColorSpaceRef)colorSpace 
				  topColor:(CGColorRef)topColor 
			   bottomColor:(CGColorRef)bottomColor
			usingBlendMode:(CGBlendMode)blendMode;

/*
 * These methods adjust the width of labels and their content views for when the label string is not a constant.
 */
 
//Adjust the label width based on its contents, then also adjust the labelled view's width and position by the same amount
+ (CGFloat)fitWidthOfLabel:(UILabel *)label minimumWidth:(CGFloat)minimum maximumWidth:(CGFloat)maximum andView:(UIView *)view withAlignment:(kWPAlignmentType) align;
//Adjust the label width based on its contents.  Returns the new width
+ (CGFloat)fitWidthOfLabel:(UILabel *)label minimumWidth:(CGFloat)minimum maximumWidth:(CGFloat)maximum;
//Adjust the width of a view by a specified amount.
+ (void)adjustWidthOfContentView:(UIView *)view byAmount:(CGFloat)amount withAlignment:(kWPAlignmentType) align;

//This method returns a UIView for a section header, with the title given
+ (UIView *)sectionHeaderViewWithTitle:(NSString *)title;

//This method returns a UIView for a tableview footer, with the view and message given
+ (UIView *)footerForView:(UIView *)view withMessage:(NSString *)message;

//Calculates the necessary height for a section using the above sectionView
+ (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section;

//Stretch a view to fit a label with the min and max allowed lines
//Pass label as the view if you only want ot size the label
//Pass 0 for min or max to ignore those settings
+ (void)adjustHeightOfView:(UIView *)view withLabel:(UILabel *)label minimumNumberOfLines:(NSInteger)min maximumNumberOfLines:(NSInteger)max;

//Since the adjustsFontSizeToFitWidth does not work for multiline labels (iOS6 only), do it ourselves.
//Relies on the minimumfontScale to determine the minimum font size. Will also change the number of lines to 0,
//but will not stretch the label out anymore than it already is.
+(void)adjustFontSizeToFitWidth:(UILabel *)label;

/**
 * OS Version-specific functions
 */
//Return the current UI nav and status bar style
+ (UIBarStyle)barStyle;
+ (int)getYIQContrastForHexColor:(unsigned int)color;
+ (UIStatusBarStyle)statusBarStyleForBackgroundHexColor:(unsigned int)color;
+ (UIStatusBarStyle)statusBarStyleForBackgroundColor:(UIColor *)color;
+ (UIStatusBarStyle)statusBarStyleMatchingColor:(UIColor *)color;
+ (UIColor *)textColorForBackgroundHexColor:(unsigned int)color;
+ (UIColor *)textShadowColorForBackgroundHexColor:(unsigned int)color;
+ (UIColor *)colorfulLegibleLoginColorFromOrgColor:(UIColor *)color;
+ (NSString *)getCSSStringFromColor: (UIColor *) color;
+ (void)tintImageView:(UIImageView *)image withTintColor:(UIColor *)color;

+ (void)setButton:(UIButton *)button withStyle:(WPButtonStyle)style;

+ (CGFloat)heightForLabel:(UILabel *)label;
+ (CGFloat)heightForLabel:(UILabel *)label withMaxSize:(CGSize)size;
+ (int)calculateLinesForLabel:(UILabel *) label;

+ (void)addTopBorderForView:(UIView *)view;

+ (void)makeViewIntoCard:(UIView *)view;

+ (UIBarButtonItem *)getImageButtonWithSize:(NSInteger)size;

@end
