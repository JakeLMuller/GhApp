//
//  WPCreditCardsViewController.h
//  iChart
//
//  Created by Jesse Dumke on 7/10/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"
#import "WPCreditCard.h"
#import "WPCreditCardEntryViewController.h"

@protocol WPCreditCardsViewDelegate <NSObject>
@required
- (void) selectedCreditCard:(WPCreditCard *)card;
@end

@interface WPCreditCardsViewController : WPTableViewController <WPCreditCardEntryDelegate>

@property (nonatomic, strong) NSMutableArray *allowedBrands;
@property (nonatomic, strong) WPCreditCard* selectedCard;
@property (nonatomic, weak) id <WPCreditCardsViewDelegate> delegate;
@property (nonatomic) BOOL allowSavingCards;
@property (nonatomic) BOOL collectSecurityCode;

//Weak IBOutlets
@property (nonatomic, weak) IBOutlet UILabel *enterNewCardLabel;

//Strong IBOutlets
@property (nonatomic, strong) IBOutlet UITableViewCell *otherCell;

- (instancetype)initWithCreditCards:(NSMutableArray *)creditCardArray selectedCard:(WPCreditCard *)card;

@end
