//
//  WPPDFScrollView.h
//  MyChart
//
//  Created by Jesse Dumke on 9/10/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  NOTE: This class is based on sample code provided by Apple: 
//    developer.apple.com/library/ios/#samplecode/ZoomingPDFViewer/Listings/Classes_ZoomingPDFViewerViewController_m.html#//apple_ref/doc/uid/DTS40010281-Classes_ZoomingPDFViewerViewController_m-DontLinkElementID_10
//
//  REVISION HISTORY
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 07/2016 429081 Removing unnecessary properties, fixing memory leak

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WPTilePDFView.h"

@interface WPPDFScrollView : UIScrollView

@property (nonatomic, weak) WPTilePDFView *tiledPDFView;

- (void)setPage:(CGPDFPageRef)PDFPage;

@end
