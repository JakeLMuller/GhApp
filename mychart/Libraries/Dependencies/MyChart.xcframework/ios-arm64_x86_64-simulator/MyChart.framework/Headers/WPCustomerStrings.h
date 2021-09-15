//
//  WPCustomerStrings.h
//  MyChart
//
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
// 

#define STR_CUST_ALERT_TITLE_MAINTENANCE  NSLocalizedStringFromTableInBundle(@"CUST1", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert title for when the MyChart server is undergoing maintenance and the user cannot log in.")
#define STR_CUST_ALERT_MAINTENANCE  NSLocalizedStringFromTableInBundle(@"CUST2", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert displays when server is undergoing maintenance.")
#define STR_CUST_ALERT_TITLE_UPDATE  NSLocalizedStringFromTableInBundle(@"CUST4", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert title for when the user's version of mychart is too old to communicate with the server.")
#define STR_CUST_ALERT_UPDATE  NSLocalizedStringFromTableInBundle(@"CUST5", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message for when the version of mychart is too old to communicate with the server. %1$@ is the app name, i.e. MyChart.")
#define STR_CUST_BUTTON_OK  NSLocalizedStringFromTableInBundle(@"CUST6", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button for one-button alert to close the alert.")
#define STR_CUST_CUSTOM_SERVER_NAME  NSLocalizedStringFromTableInBundle(@"CUST7", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Name of the custom server from the MyChart Settings")
#define STR_CUST_OVERLAY_LOADING  NSLocalizedStringFromTableInBundle(@"CUST14", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Overlay message for when the phonebook is loading")
#define STR_CUST_OVERLAY_LOADING_ORGS  NSLocalizedStringFromTableInBundle(@"CUST18", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Overlay when loading the healthcare organizations")
#define STR_CUST_BUTTON_CANCEL  NSLocalizedStringFromTableInBundle(@"CUST19", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Cancels the alert")
#define STR_CUST_OVERLAY_ERROR_LOADING_LIST  NSLocalizedStringFromTableInBundle(@"CUST20", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Displays when the customer list fails to load.")
#define STR_CUST_ALERT_TITLE_OOPS  NSLocalizedStringFromTableInBundle(@"CUST21", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Generic alert for when something bad happens")
#define STR_CUST_ALERT_NO_NEARBY_PROVIDERS  NSLocalizedStringFromTableInBundle(@"CUST22", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert text displays when geolocation searching for a provider returns 0 results.")
#define STR_CUST_ALERT_GEOLOCATION_ERROR  NSLocalizedStringFromTableInBundle(@"CUST24", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert telling the user that the app was unable to determine the user's current location.")
#define STR_CUST_ALERT_GEOLOCATION_OFF  NSLocalizedStringFromTableInBundle(@"CUST25", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Tells the user they have to search because location services is turned off in the settings.")
#define STR_CUST_BUTTON_APP_STORE  NSLocalizedStringFromTableInBundle(@"CUST26", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button takes the user directly to the App Store to upgrade MyChart.")
#define STR_CUST_NAMEZIPSTATE  NSLocalizedStringFromTableInBundle(@"CUST31", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Hint for the search field for provider selection.  Accepts name, state, or zip of a provider@LENGTH@16 characters")
#define STR_CUST_NAMECOUNTRY NSLocalizedStringFromTableInBundle(@"CUST32",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Hint for the search field for provider selection when the user's location is not in the US")
#define STR_CUST_LABEL_UNABLE_TO_DETECT_LOCATION NSLocalizedStringFromTableInBundle(@"CUST33",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Displays when the user's location could not be automatically determined")
#define STR_CUST_LABEL_DETECTING_LOCATION NSLocalizedStringFromTableInBundle(@"CUST34",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Displays while the user's location is being automatically determined")
#define STR_CUST_LABEL_SELECT_A_COUNTRY NSLocalizedStringFromTableInBundle(@"CUST35",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label for selecting a country in the phonebook")
#define STR_CUST_LABEL_SEARCH_BY_NAME NSLocalizedStringFromTableInBundle(@"CUST36",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label for a link that puts the focus on the phonebook searchbar")
#define STR_CUST_BUTTON_USE_MY_LOCATION NSLocalizedStringFromTableInBundle(@"CUST37",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button to start the process of finding hospitals near the user’s location")
#define STR_CUST_BUTTON_GO_BACK NSLocalizedStringFromTableInBundle(@"CUST38",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Cancel the popup dialog for selecting a country")

#define STR_CUST_CELL_ACCESSIBILITY_LABEL  NSLocalizedStringFromTableInBundle(@"CUST20140404103943", @"Customer", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Accessibility label for each cell in the Healthcare provider selection page. {0} is the organization name and {1} is the MyChart brand name. E.g. Epic Medical Center MyChart.")
#define STR_CUST_COPYRIGHT_INFO  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042243", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@This is the copyright information.  Please run your translation by Legal.  %1$@ is the current year.")
#define STR_CUST_ALERT_TITLE_ORGANIZATION_NOTIFICATION NSLocalizedStringFromTableInBundle(@"STR_CUST_ALERT_TITLE_ORGANIZATION_NOTIFICATION",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert title telling the user that the organization they are attempting to switch to is incorrect for the push notification they just activated.")
#define STR_CUST_ALERT_MESSAGE_ORGANIZATION_NOTIFICATION NSLocalizedStringFromTableInBundle(@"STR_CUST_ALERT_MESSAGE_ORGANIZATION_NOTIFICATION",@"Customer",[WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message telling the user that the organization they are attempting to switch to is incorrect for the push notification they just activated.")

@interface WPCustomerStrings: NSObject

+(NSString *)appVersionTooLowAlertTitle;
+(NSString *)appVersionTooLowAlertMessage;
+(NSString *)orgNotificationAlertTitle;
+(NSString *)orgNotificationAlertMessage;

@end
