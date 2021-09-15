//
//  HealthAdvisoriesStrings.h
//  MyChart
//
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPLocaleInfo.h"

#define STR_HA_TITLE_HA  NSLocalizedStringFromTableInBundle(@"HA1", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Default title for the activity")
#define STR_ACC_HA_NO_INFO  NSLocalizedStringFromTableInBundle(@"HA3", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Accesibility text spoken when the user has no health advisories to view. %1$@ is the name of the activity")
#define STR_HA_NO_INFO  NSLocalizedStringFromTableInBundle(@"HA4", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label shown when the user has no health advisories to view")
#define STR_HA_LABEL_DUE_SOON  NSLocalizedStringFromTableInBundle(@"HA7", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are coming due soon. Label for the date the health advisory should be completed.@LENGTH@10 characters")
#define STR_HA_LABEL_DUE  NSLocalizedStringFromTableInBundle(@"HA8", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@This is the default status if a Health Advisory has a due date but no status.@LENGTH@6 characters")
#define STR_HA_LABEL_LAST_DONE  NSLocalizedStringFromTableInBundle(@"HA9", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Appears underneath a health advisory saying when an action satisfying the advisory was last completed. %1$@ is the date the advisory was completed.@LENGTH@25 characters")
#define STR_HA_LABEL_OVERDUE_SINCE  NSLocalizedStringFromTableInBundle(@"HA11", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are overdue, if a due date is known. %1$@ - the due date@LENGTH@25 characters")
#define STR_HA_LABEL_DUE_SINCE  NSLocalizedStringFromTableInBundle(@"HA12", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are due (but not yet overdue), if a due date is known. %1$@ - the due date")
#define STR_HA_LABEL_DUE_SOON_ON  NSLocalizedStringFromTableInBundle(@"HA13", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are due soon, if a due date is known. %1$@ - the due date@LENGTH@25 characters")
#define STR_HA_LABEL_NOT_DUE_UNTIL  NSLocalizedStringFromTableInBundle(@"HA14", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are not due yet, if an eventual due date is known. %1$@ - the due date@LENGTH@25 characters")
#define STR_HA_LABEL_NOT_DUE_YET  NSLocalizedStringFromTableInBundle(@"HA15", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are not due yet, if no due date is known.@LENGTH@25 characters")
#define STR_HA_LABEL_COMPLETED_ON  NSLocalizedStringFromTableInBundle(@"HA16", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are completed, if the last done date is known.%1$@ - the date@LENGTH@25 characters")
#define STR_HA_LABEL_COMPLETED  NSLocalizedStringFromTableInBundle(@"HA17", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are completed, if the last done date is not known.@LENGTH@25 characters")
#define STR_HA_LABEL_ADDRESSED_ON  NSLocalizedStringFromTableInBundle(@"HA18", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are addressed, if the last done date is known.%1$@ - the date@LENGTH@25 characters")
#define STR_HA_LABEL_ADDRESSED  NSLocalizedStringFromTableInBundle(@"HA19", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are addressed, if the last done date is not known.@LENGTH@25 characters")
#define STR_HA_LABEL_POSTPONED_UNTIL  NSLocalizedStringFromTableInBundle(@"HA20", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are postponed, if the date is known.%1$@ - the date@LENGTH@25 characters")
#define STR_HA_LABEL_PENDING  NSLocalizedStringFromTableInBundle(@"HA21", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are pending, if the date is known.%1$@ - the date@LENGTH@25 characters")
#define STR_HA_LABEL_POSTPONED  NSLocalizedStringFromTableInBundle(@"HA22", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are postponed, if the date is not known.@LENGTH@25 characters")
#define STR_HA_LABEL_NOT_DUE NSLocalizedStringFromTableInBundle(@"HA23", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Status of Health Advisories which are aged out or excluded.@LENGTH@25 characters")
#define STR_HA_MARK_COMPLETE_BUTTON NSLocalizedStringFromTableInBundle(@"HA24", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Text for the health advisory mark complete button on a specific topic.")
#define STR_HA_OVERDUE_SECTION NSLocalizedStringFromTableInBundle(@"HA25", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Title of the section header displayed on the overdue section")
#define STR_HA_DUE_SECTION NSLocalizedStringFromTableInBundle(@"HA26", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Title of the section header displayed on the due soon section")
#define STR_HA_NOTDUE_SECTION NSLocalizedStringFromTableInBundle(@"HA27", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Title of the section header displayed on the not due section")
#define STR_HA_PENDING_SECTION NSLocalizedStringFromTableInBundle(@"HA28", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Title of the section header displayed on the pending section")
#define STR_HA_MARK_COMPLETE_TITLE NSLocalizedStringFromTableInBundle(@"HA29", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Title of the Mark Complete activity where a user can mark a specific topic as complete and provide a date of completion.")
#define STR_HA_LABEL_DATE_COMPLETED  NSLocalizedStringFromTableInBundle(@"HA30", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Label shown above a Date Picker for a user to mark the date that they completed a health advisory topic.@LENGTH@12 characters")
#define STR_HA_ACCEPT_BUTTON NSLocalizedStringFromTableInBundle(@"HA31", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"Label shown on a button below the date picker to allow a user to accept their health advisory topic update after entering a date.@LENGTH@12 characters")
#define STR_HA_SUCCESS_MESSAGE NSLocalizedStringFromTableInBundle(@"HA32", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"Text shown on an alert to let the user know that their topic was successfully updated.@LENGTH@36 characters")
#define STR_HA_INVALID_DATE_MESSAGE NSLocalizedStringFromTableInBundle(@"HA33", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"Text shown on an alert to let the user know that their topic was unsuccessfully updated due to an invalid date entered before their Date of Birth.@LENGTH@36 characters")
#define STR_HA_INVALID_DATE_DUPLICATE_MESSAGE NSLocalizedStringFromTableInBundle(@"HA34", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"Text shown on an alert to let the user know that their topic was unsuccessfully updated due to duplicate date entry.@LENGTH@36 characters")
#define STR_HA_BUTTON_OK NSLocalizedStringFromTableInBundle(@"HA35", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"Button label on an alert for a user to ok out of the message.@LENGTH@6 characters")
#define STR_HA_INVALID_DATE_TITLE NSLocalizedStringFromTableInBundle(@"HA36", @"HealthAdvisories", [WPLocaleInfo currentLocale].bundle, @"Title shown on an alert to let the user know that their topic was unsuccessfully updated due to an invalid date entered.@LENGTH@15 characters")
