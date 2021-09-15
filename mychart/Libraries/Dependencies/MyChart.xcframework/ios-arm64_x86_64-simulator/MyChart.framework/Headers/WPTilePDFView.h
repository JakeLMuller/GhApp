//
//  WPTilePDFView.h
//  iChart
//
//  Created by Jesse Dumke on 9/10/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  NOTE: This class is based on sample code provided by Apple: 
//    developer.apple.com/library/ios/#samplecode/ZoomingPDFViewer/Listings/Classes_ZoomingPDFViewerViewController_m.html#//apple_ref/doc/uid/DTS40010281-Classes_ZoomingPDFViewerViewController_m-DontLinkElementID_10
//
//
//  *mflatau 07/2016 429081 Allowing PDF Scale to be changed after initialization

#import <UIKit/UIKit.h>

@interface WPTilePDFView : UIView

@property (nonatomic) CGFloat PDFScale;

- (instancetype)initWithFrame:(CGRect)frame andScale:(CGFloat)scale;
- (void)setPage:(CGPDFPageRef)newPage;


@end
