//
//  WPProviderPopupView.h
//  MyChart
//
//  Created by Yash Vaka on 1/15/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//
//  *apallika   05/2017 478570  Adding support for external data

#import <UIKit/UIKit.h>
#import "WPProviderImageView.h"

@interface WPProviderPopupView : UIView

@property (weak, nonatomic) IBOutlet WPProviderImageView *providerPhoto;
@property (weak, nonatomic) IBOutlet UILabel *providerName;
@property (weak, nonatomic) IBOutlet UILabel *providerInfoLabel;
@property (weak, nonatomic) IBOutlet UILabel *providerSpecialityLabel;
@property (weak, nonatomic) IBOutlet UIStackView *orgList;
@property (weak, nonatomic) IBOutlet UIImageView *externalDataIcon;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *photoWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *photoLeftConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *externalDataIconTopToPhotoConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *externalDataIconLeadingToPhotoConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *providerNameLeadingToPhotoConstraint;

- (void)hideProviderPhoto: (BOOL) isExternal;

@end
