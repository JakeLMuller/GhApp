//
//  WPPatientVisitGuideLoadingViewController.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"
#import "WPPopupViewController.h"

@protocol WPPatientVisitGuideLoadedProtocol

- (void) visitGuideLoadedWithData:(nullable NSData *) data;

@end

@interface WPPatientVisitGuideLoadingViewController : WPPopupViewController

@property (nonatomic, weak, nullable) id <WPPatientVisitGuideLoadedProtocol> delegate;
@property (nonatomic, weak, nullable) IBOutlet UILabel *loadingText;
@property (nonatomic, weak, nullable) IBOutlet UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *textToSuperBottomConstraint;
@property (nonatomic, weak, nullable) IBOutlet NSLayoutConstraint *textToLoadingBottomConstraint;



@end
