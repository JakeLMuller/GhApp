//
//  WPLocaleInfo.h
//  EpicOnHand
//
//  Created by Eric Crews on 11/17/10.
//  Copyright © 2011-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WPServer;
#import <UIKit/UIKit.h>


@interface WPLocaleInfo : NSObject <PELocaleInfo>
+ (WPLocaleInfo *)currentLocale;
+ (NSLocale *)xmlFormatterLocale;
+ (NSString *)getCountryNameForCountryCode:(NSString *)countryCode;
+ (UIImage *)getCountryFlagImageForCountryCode:(NSString *)countryCode;
+ (NSString *)getUSStateNameForCode:(NSString *)stateCode;
+ (NSString *)regionFromLocale:(NSString *)locale;
+ (void)chooseBundleForServer:(WPServer *)server;
- (BOOL)isTwelveHourDateFormat;
- (BOOL)isArabicLocale;
- (void)resetCommandLocale;
+ (NSString *)getDefaultLocaleEpic;
+ (NSString *)languageFromLocale:(NSString *) locale;
+ (void)updateLocaleInBundle:(WPLocaleInfo *)localeInfo :(NSString *)userLanguage :(NSMutableString *)formatterLocale;
+ (void)setLanguageLocaleOverride:(NSString *)languageString;
+ (void)setFormatterLocaleOverride:(NSString *)formatterString;
+ (NSString *)getLanguageOverride;
+ (NSString *)getFormatterOverride;
- (NSLocale *)getLanguageLocale;
- (NSString *)getLanguageString;

- (NSString*) getPatternFromDateFormatTemplate:(NSString *)dateFormatTemplate;

/// get the bundle for strings of a specific locale
/// @param locale the locale to query, defaulting to english if not found
/// @param bundle the bundle where resources live
+ (NSBundle *)findStringBundleForLocale:(NSString *)locale fromBundle:(NSBundle *)bundle;

#ifdef INTERNALBUILD  //Defined in Targets/iChart > Info > Build > User-Defined > GCC_PREPROCESSOR_DEFINITIONS
+ (void)switchLocale;
#endif


- (LocalizedLocale) getLocalizedLocale;

@property (nonatomic, strong) NSString *dateFormat;
@property (nonatomic, strong) NSString *timeFormat;
@property (nonatomic, strong) NSString *commandLocale; //Locale calculated to get proper custom strings from the server
@property (nonatomic, strong) NSString *mediumDate;
@property (nonatomic, strong) NSNumberFormatter *formatter;
@property (nonatomic, strong) NSNumberFormatter *USFormatter;
@property (nonatomic, strong) NSNumberFormatter *currencyFormatter;
@property (nonatomic, strong) NSDateFormatter *dateFormatter;
@property (nonatomic, strong) NSLocale *serverFormatterLocale; //Formatter locale specified in the phonebook
@property (nonatomic, strong) NSString *userLocale; //Locale calculated from the phonebook and the device
@property (nonatomic, strong) NSBundle *bundle;
@property (nonatomic) BOOL gibberish;
@property (nonatomic, readonly) BOOL isUserLocaleUS;
@property (nonatomic, readonly) BOOL isServerLocaleUS;

@end
