//
//  NSString+WP.h
//  iChart
//
//  Created by Chetan Satish on 8/19/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 323413 09/2014 Adding stringByRemovingHTML
//  *csatish 01/2016 403704 Added previewString

#import <Foundation/Foundation.h>

@interface NSString (WP)

+ (BOOL)isNullOrWhiteSpace:(NSString *)aString;

- (NSString *)resolveEpicHttp;
- (NSString *)resolveEpicHttpAddHTML:(BOOL)addHTML;
- (NSString *)preserveDoubleNewlinesOnly;
- (NSString *)encodeHTMLEntities:(BOOL)allowATags;
- (NSString *)removeAllHTML; //includes epichttp links as well

- (NSString *)stringByCompressingWhiteSpaces;

/**
 Trim leading and trailing white spaces
 
 @return trimmed string
 */
- (NSString *)stringByTrimmingWhiteSpaces;

- (NSString *)stringByRemovingHTML;
- (NSComparisonResult)WPLocalizedCaseInsensitiveCompare:(NSString *)otherString;
- (NSString *)WPLocalizedUppercaseString;
- (NSString *)WPLocalizedLowercaseString;

/**
* @brief Adds ltr markers at the beginning and end of the string.
*/
- (NSString *)addLTRMarkers;

/**
 * @brief Adds rtl markers at the beginning and end of the string.
 */
- (NSString *)addRTLMarkers;

/**!
 * @brief Create a preview string of length 200 by removing newline and white space characters before and after the newlines.
 */
- (NSString *)previewString;
@end

@interface NSAttributedString (WP)
/**!
 * @brief Create a formatted attributed string from an array of attributed strings.
 *
 * @param format - the string first formatting information to start with. This string MUST 
 *              have arguments in the form %i$@ where i is the index of the arguement to supply.
 * @param arguments - An array of attributed strings in the order they should be added to the format string.
 */
+ (instancetype)attributedStringWithFormat:(NSString *)format arguments:(NSArray *)arguments;

@end

@interface NSMutableAttributedString (WP)

- (void)addLine:(NSAttributedString *)line;

@end
