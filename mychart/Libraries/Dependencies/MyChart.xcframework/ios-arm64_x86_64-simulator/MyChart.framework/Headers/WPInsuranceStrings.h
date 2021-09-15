//
//  InsuranceStrings.h
//  MyChart
//
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
#import "WPLocaleInfo.h"

#define STR_INS_INSURANCE_TITLE  NSLocalizedStringFromTableInBundle(@"INS20141218120541", @"Insurance", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@The navigation bar title for the Insurance page")
#define STR_INS_LOADING_COVERAGES  NSLocalizedStringFromTableInBundle(@"INS20141218120749", @"Insurance", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Message that appears while coverages are being loaded")
#define STR_INS_MEMBER_ID_LABEL  NSLocalizedStringFromTableInBundle(@"INS20141218120816", @"Insurance", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label for the member ID data element within each coverage cell in the list of coverages")
#define STR_INS_ERROR_NO_COVERAGE_ON_FILE  NSLocalizedStringFromTableInBundle(@"INS20141218120854", @"Insurance", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Error message displayed if no coverages are on file")
#define STR_INS_LOADING_CARD  NSLocalizedStringFromTableInBundle(@"INS20141218120944", @"Insurance", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Message that appears while an ID card is being loaded")
#define STR_INS_ERROR_NO_ID_CARD  NSLocalizedStringFromTableInBundle(@"INS20141218121005", @"Insurance", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Error message displayed if no ID card is on file")
