//
//  WPLegacyPatientPreferencesCollectionViewCell.h
//  MyChart
//
//  Created by Surender Pal Singh on 6/9/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPLegacyPatientPreferences.h"
#import "WPCardView.h"

@class WPPatientContext;

//Preference Cell Modification Protocol
@protocol WPPreferenceCellModifiedDelegate <NSObject>
@required
- (void)didModifyPreferencesInformation;
- (void)startedTypingInCell:(NSInteger)cellIndex;
- (void)didModifyNickname:(NSString*)modifiedNickname forCell:(NSInteger)cellIndex;
- (void)didModifyPhoto:(UIImage*)modifiedPhoto forCell:(NSInteger)cellIndex;
- (void)didModifyColorIndex:(NSInteger) colorIndex forCell:(NSInteger)cellIndex;
- (void)changePhotoUploadStatus:(WPPhotoUploadStatus) photoUploadStatus forCell:(NSInteger)cellIndex;
@end

@interface WPLegacyPatientPreferencesCollectionViewCell : UICollectionViewCell <UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet WPCardView *cardView;

@property (nonatomic, strong) NSMutableArray *colorButtons;
@property (nonatomic, strong) WPLegacyPatientPreferences *patientIndexPreference;
@property (nonatomic, assign) NSInteger patientIndex;

@property (nonatomic, weak) IBOutlet UIImageView *patientImageView;
@property (nonatomic, assign) BOOL hasPhotoInImageView;

@property (nonatomic, weak) IBOutlet UILabel *patientNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *addPhotoText;

@property (nonatomic, weak) IBOutlet UIButton *editPhotoButton;
@property (nonatomic, weak) IBOutlet UILabel *nicknameHeading;
@property (nonatomic, weak) IBOutlet UITextField *patientNicknameField;
@property (nonatomic, weak) IBOutlet UILabel *colorHeading;
@property (nonatomic, weak) IBOutlet UIView *colorSelection;

@property (nonatomic, weak) IBOutlet UIView *proxyExpirationView;
@property (nonatomic, weak) IBOutlet UILabel *proxyExpirationLabel;
@property (weak, nonatomic) IBOutlet UILabel *refusalPatientLabel;

@property (strong, nonatomic) IBOutlet NSLayoutConstraint *proxyExpirationHeightConstraint;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *nameLabelLeadingConstraint;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *nameLabelTrailingConstraint;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *nicknameHeadingHeightConstraint;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *nicknameFieldHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *refusalLabelHeightConstraint;

@property (nonatomic, weak) id<WPPreferenceCellModifiedDelegate> preferenceModifiedDelegate;

- (void)setCellToPatientPreference:(WPLegacyPatientPreferences *)patientIndexPreference patientIndex:(NSInteger)patientIndex;
- (void)removePatientImage;
- (void)setPatientImage:(UIImage *)image;

@end
