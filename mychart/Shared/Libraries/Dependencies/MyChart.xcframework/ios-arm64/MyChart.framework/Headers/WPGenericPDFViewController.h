//
//  WPGenericPDFViewController.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPShareViewController.h"

@interface WPGenericPDFViewController : WPViewController <WPShareDelegate>

@property (weak, nonatomic) IBOutlet WKWebView *webView;

- (instancetype)initWithPDFData:(NSData *)pdfData;
- (instancetype)initForModalViewWithPDFData:(NSData *)pdfData;
- (instancetype)initForModalViewWithPDFData:(NSData *)pdfData withName:(NSString*)pdfName allowShare:(BOOL)allowShare isPatientDocument:(BOOL)isPatientDocument dcsID:(NSString *)dcsID;

@end
