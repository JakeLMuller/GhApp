//
//  WPGeneralStrings.h
//  MyChart
//
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.

#import "WPLocaleInfo.h"

#define STR_GEN_BUTTON_OK  NSLocalizedStringFromTableInBundle(@"GEN1", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button closes an alert when no action is possible.")
#define STR_GEN_RELATIVE_TODAY  NSLocalizedStringFromTableInBundle(@"GEN2", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@String used for when a date is converted to a relative date, and that date is today@LENGTH@8 characters")
#define STR_GEN_RELATIVE_TOMORROW  NSLocalizedStringFromTableInBundle(@"GEN3", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@String used for when a date is converted to a relative date, and that date is tomorrow@LENGTH@8 characters")
#define STR_GEN_RELATIVE_YESTERDAY  NSLocalizedStringFromTableInBundle(@"GEN4", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@String used for when a date is converted to a relative date, and that date is yesterday")
#define STR_GEN_DATETIME  NSLocalizedStringFromTableInBundle(@"GEN5", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Manually builds a date/time format. %1$@ is the date, e.g., 10/27/10.  %2$@ is the time, e.g., 10:24 AM@LENGTH@21 characters@CONSTRAINTS@literal strings need to be enclosed in single quotes.  Don't enclose the parameters in literal quotes")
#define STR_GEN_SUCCESS_TITLE_1  NSLocalizedStringFromTableInBundle(@"GEN6", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@One of the random positive alert titles")
#define STR_GEN_SUCCESS_TITLE_2  NSLocalizedStringFromTableInBundle(@"GEN7", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@One of the random positive alert titles")
#define STR_GEN_SUCCESS_TITLE_3  NSLocalizedStringFromTableInBundle(@"GEN8", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@One of the random positive alert titles")
#define STR_GEN_SUCCESS_TITLE_4  NSLocalizedStringFromTableInBundle(@"GEN9", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@One of the random positive alert titles")
#define STR_GEN_ALERT_DATA_FAIL NSLocalizedStringFromTableInBundle(@"GEN10", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert body lets the user know that the data retrieval operation failed.")
#define STR_GEN_ALERT_ERROR_TITLE  NSLocalizedStringFromTableInBundle(@"GEN11", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Generic alert title for an error")
#define STR_GEN_ALERT_ERROR_NETWORK_NEEDED  NSLocalizedStringFromTableInBundle(@"GEN12", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert body for when a loss of network is detected. %1$@ is the app name, i.e. MyChart.")
#define STR_GEN_BUTTON_OK_DELEGATE  NSLocalizedStringFromTableInBundle(@"GEN20120103045503", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button closes an alert when no action is possible.")
#define STR_GEN_RELATIVE_TODAY_UNCAP  NSLocalizedStringFromTableInBundle(@"GEN13", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@String used for when a date is converted to a relative date, and that date is today and needs to be uncapitalized@LENGTH@8 characters")
#define STR_GEN_RELATIVE_TOMORROW_UNCAP  NSLocalizedStringFromTableInBundle(@"GEN14", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@String used for when a date is converted to a relative date, and that date is tomorrow and needs to be uncapitalized@LENGTH@8 characters")
#define STR_GEN_RELATIVE_YESTERDAY_UNCAP  NSLocalizedStringFromTableInBundle(@"GEN15", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@String used for when a date is converted to a relative date, and that date is yesterday and needs to be uncapitalized")
#define STR_GEN_CANNOT_OPEN_LINK  NSLocalizedStringFromTableInBundle(@"STR_GEN_CANNOT_OPEN_LINK", @"General", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the pressed link cannot be opened.")

@interface WPGeneralStrings: NSObject

+ (NSString *) buttonOk;

@end
