//
//  WPLoginStrings.h
//  MyChart
//
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
#import "WPLocaleInfo.h"

// !!NOTE!! These are pre login strings - use NSLocalizedStringFromTable

#define STR_LOGIN_PROMPT_REMEMBER  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042428", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Prompt for the checkbox as to whether to remember the last username successfully used to log in to this organization.@LENGTH@16 characters")
#define STR_LOGIN_ALERT_UNKNOWN_USERNAME_PASSWORD  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042527", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the user attempted to log in with an incorrect username and/or password.%1@ is the custom login string, and %2@ is the custom password string")
#define STR_LOGIN_ALERT_EXPIRED_PASSWORD  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042607", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the password used to log in has expired.  The user needs to log into the website to reset the password and cannot log in until that's done. %1@ is the custom password string")
#define STR_LOGIN_ALERT_DISABLED  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042644", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the user cannot log in because his account was disabled by his organization.")
#define STR_LOGIN_ALERT_DELETED  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042704", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears in extremely rare circumstances- a user has no patient record associated with it.")
#define STR_LOGIN_ALERT_EXPIRED_ACCOUNT  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042754", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the account itself has expired, preventing the user from logging in.")
#define STR_LOGIN_ALERT_PROBLEM_PROCESSING  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042831", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when there is an error regarding the user's username and password, preventing the user from logging in.")
#define STR_LOGIN_ALERT_TOO_MANY_ATTEMPTS  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042916", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the user has too many unsuccessful login attempts, preventing the user from logging in.")
#define STR_LOGIN_ALERT_COMMUNICATION  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043025", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when a communication error prevents the user from logging in.")
#define STR_LOGIN_ALERT_GENERIC  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043145", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when an unknown error prevents the user from logging in. %1$@ is the app name, i.e. MyChart.")
#define STR_LOGIN_ALERT_TITLE_UPDATE  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043205", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Title for the alert that occurs when the app version needs to be upgraded.")
#define STR_LOGIN_BUTTON_CANCEL  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043319", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button exits an alert without making any changes.")
#define STR_LOGIN_ALERT_TITLE_GENERIC  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043511", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert title for a variety of login errors.")
#define STR_LOGIN_ALERT_BUTTON_OK  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043535", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button exits an alert without making any changes when no action is possible or required.")
#define STR_LOGIN_ALERT_CUSTOM_COMMUNICATION  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043554", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert for when the app cannot communicate with the custom server.  This is likely due to mistyping in the MyChart settings.")
#define STR_LOGIN_ALERT_NO_USERNAME_PASSWORD  NSLocalizedStringFromTableInBundle(@"LOGIN20111219043754", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the username or password is blank and user attempted to log in.")
#define STR_LOGIN_COPYRIGHT_INFO  NSLocalizedStringFromTableInBundle(@"LOGIN20111219042243", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@This is the copyright information.  Please run your translation by Legal.  %1$@ is the current year.")
#define STR_LOGIN_ACCESSIBLITYLABEL  NSLocalizedStringFromTableInBundle(@"LOGIN20140404102309", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Accessibility label for the login page that tells the current customer name and their MyChart brand name. {0} is MyChart Brand Name and {1} is the customer name. E.g. MyChart login page for Epic Medical Center.")
#define WP_STR_CUSTOMLOGIN_FAIL NSLocalizedStringFromTableInBundle(@"WP_STR_CUSTOMLOGIN_FAIL", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Alert appears when the SSO customlogin fail loading.")


// !!NOTE!! These are post login strings - use NSLocalizedStringFromTableInBundle

#define STR_LOGIN_ALERT_UPDATED_TERMS  NSLocalizedStringFromTableInBundle(@"LOGIN20111219044142", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert appears when the terms and conditions have been updated, and the user must accept them before continuing to the app.")
#define STR_LOGIN_BUTTON_REVIEW  NSLocalizedStringFromTableInBundle(@"LOGIN20111219044218", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button brings the user the most recent terms and conditions page.")
#define STR_LOGIN_BUTTON_DECLINE  NSLocalizedStringFromTableInBundle(@"LOGIN20111219050128", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button declines the EULA / Terms and Conditions being displayed.@LENGTH@13 characters")
#define STR_LOGIN_BUTTON_ACCEPT  NSLocalizedStringFromTableInBundle(@"LOGIN20111219050209", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button sends the user's acceptance of the terms and conditions (or indicates an accepted EULA) and allows the user to continue logging in (or using the app).@LENGTH@13 characters")
#define STR_LOGIN_CLOSE_BUTTON  NSLocalizedStringFromTableInBundle(@"LOGIN20140722092817", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Text for the button to dismaiss the modal login view. When a organization has a custom web page overlay for the login screen the modal view is presented when the user clicks on a login screen. Then it needs a close button.")
#define STR_LOGIN_MESSAGE_USE_PASSCODE  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_MESSAGE_USE_PASSCODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Message telling the user to use passcode id. \n divides the text into two lines. @LENGTH@18 characters @CONSTRAINT@Character limit of each line is 9.")
#define STR_LOGIN_MESSAGE_USE_TOUCH_ID  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_MESSAGE_USE_TOUCH_ID", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Message telling the user to use Touch ID. \n divides the text into two lines. @LENGTH@18 characters @CONSTRAINT@Character limit of each line is 9.")
#define STR_LOGIN_MESSAGE_USE_FACE_ID  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_MESSAGE_USE_FACE_ID", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Message telling the user to use Touch ID. \n divides the text into two lines. @LENGTH@18 characters @CONSTRAINT@Character limit of each line is 9.")
#define STR_LOGIN_BUTTON_ACCESSIBILITY_TITLE_DELETE  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_BUTTON_ACCESSIBILITY_TITLE_DELETE", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Accessibility text (read out loud by voice over) for the button that deletes a passcode character.")
#define STR_LOGIN_MESSAGE_ENTER_PASSCODE  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_MESSAGE_ENTER_PASSCODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Accessibility text (read out loud by voice over) telling the user to enter their passcode @LENGTH@35 characters")
#define STR_LOGIN_MESSAGE_FORMAT_ATTEMPTS_REMAINING  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_MESSAGE_FORMAT_ATTEMPTS_REMAINING", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Message that tells the user the number passcode attempts remaining after a failed attempt. %1lu is the number of attempts remaining.")
#define STR_LOGIN_ATTEMPT_REMAINING  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ATTEMPT_REMAINING", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Message telling the user that they have 1 attempt remaining to enter their passcode. @LENGTH@35 characters")
#define STR_LOGIN_ALERT_MESSAGE_PASSWORD_CHANGED_RESET_TOUCH_ID  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_PASSWORD_CHANGED_RESET_TOUCH_ID", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message when the user's password has changed and invalidated the existing Touch ID. Instructs the user to login and reset the Touch ID. %1$@ is server's login password name, e.g. 'Password'.")
#define STR_LOGIN_ALERT_MESSAGE_PASSWORD_CHANGED_RESET_FACE_ID  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_PASSWORD_CHANGED_RESET_FACE_ID", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message when the user's password has changed and invalidated the existing Face ID. Instructs the user to login and reset the Face ID. %1$@ is server's login password name, e.g. 'Password'.")
#define STR_LOGIN_ALERT_MESSAGE_NEW_PASSWORD_RESET_PASSCODE  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_NEW_PASSWORD_RESET_PASSCODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message when the user's password has changed and invalidated the existing passcode. Instructs the user to login and set a new passcode. %1$@ is server's login password name, e.g. 'Password'")
#define STR_LOGIN_ALERT_MESSAGE_TOUCH_ID_ERROR  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_TOUCH_ID_ERROR", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message when there was an issue logging in with Touch ID. Instructs the user to login using another login method.")
#define STR_LOGIN_ALERT_MESSAGE_PASSCODE_ERROR  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_PASSCODE_ERROR", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message when there was an error logging in with the passcode. Instructs the user to login with another login method.")
#define STR_LOGIN_ALERT_MESSAGE_OUT_OF_ATTEMPTS  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_OUT_OF_ATTEMPTS", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message that appears when the user has exceeded the maximum number of attempts to use the passcode. Instructs the user to login with another login method.")
#define STR_LOGIN_ALERT_TITLE_WRONG_PASSCODE  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_TITLE_WRONG_PASSCODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert title when the user has entered a wrong passcode")
#define STR_LOGIN_BUTTON_TITLE_OK  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_BUTTON_TITLE_OK", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button title that the user uses to dismiss an alert when the user has entered a wrong passcode.")
#define STR_LOGIN_ALERT_MESSAGE_PASSCODE_ONE_ATTEMPT_LEFT  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_PASSCODE_ONE_ATTEMPT_LEFT", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message telling the user that they have one last try to use the passcode.")
#define STR_LOGIN_ALERT_MESSAGE_PASSCODE_MULTIPLE_ATTEMPTS_LEFT  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_PASSCODE_MULTIPLE_ATTEMPTS_LEFT", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@The message of a dialog when trying to login using the passcode method and the given passcode is incorrect, but the user can try again. %1$s is the number of attempts remaining, represented as a numeral like 2 or 3 (will always be greater than 1)")
#define STR_LOGIN_BUTTON_TITLE_TRY_AGAIN  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_BUTTON_TITLE_TRY_AGAIN", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button title to try again when a user has entered a wrong passcode. The button dismisses an alert.")
#define STR_LOGIN_ALERT_TITLE_OOPS  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_TITLE_OOPS", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert title generally used for when something has awry.")
#define STR_LOGIN_ALERT_MESSAGE_ERROR_RETRIEVING_PASSCODE  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_ERROR_RETRIEVING_PASSCODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message when there was an error retrieving the passcode. This is unlikely to occur.")
#define STR_LOGIN_MESSAGE_LOGIN_IN_TO_SERVER  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_MESSAGE_LOGIN_IN_TO_SERVER", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message indicating to the user to log into a server using Touch ID. %1$@ is the MyChart brand name.")
#define STR_LOGIN_BUTTON_TITLE_USE_USERNAME_AND_PASSWORD  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_BUTTON_TITLE_USE_USERNAME_AND_PASSWORD", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert Button title that will switch the login mode from passcode to username and password mode. %1$@ is server's login ID name, e.g. 'Username'. %2$@ is server's login password name, e.g. 'Password'.")
#define STR_LOGIN_MESSAGE_ACCESSIBILITY_ENTER_PASSCODE_OF_LENGTH  NSLocalizedStringFromTableInBundle(@"STR_LOGIN_MESSAGE_ACCESSIBILITY_ENTER_PASSCODE_OF_LENGTH", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Accessibility text (read out loud by voice over) telling the user to enter passode of certain length. %1$@ is passcode length, e.g. 4.")
#define STR_LOGIN_ALERT_MESSAGE_UNABLE_TO_VALIDATE_TOUCHID NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ALERT_MESSAGE_UNABLE_TO_VALIDATE_TOUCHID", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Alert message that is displayed when there was an unexpected error while validating user's Touch ID.")
#define STR_LOGIN_BUTTON_TITLE_LOG_IN NSLocalizedStringFromTableInBundle(@"STR_LOGIN_BUTTON_TITLE_LOG_IN", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button title for the log in button that will log the user into a mychart server.")
#define STR_LOGIN_BUTTON_TITLE_DELETE_PIN_BUTTON NSLocalizedStringFromTableInBundle(@"STR_LOGIN_BUTTON_TITLE_DELETE_PIN_BUTTON", @"Login", [WPLocaleInfo currentLocale].bundle, @"@CONTEXT@Button accessibility title (read outloud by voiceover) for the delete passcode button")
#define STR_LOGIN_TWOFACTOR_CODE_SENT_EMAIL NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_CODE_SENT_EMAIL", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@String that tells the user that mychart has send a code to the email address on file. %1$@ is the mychart brand name.")
#define STR_LOGIN_TWOFACTOR_CODE_SENT_TEXT NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_CODE_SENT_TEXT", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@String that tells the user that mychart has send a code to the phone number on file. %1$@ is the mychart brand name.")
#define STR_LOGIN_TWOFACTOR_BUTTON_LABEL_EMAIL NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_BUTTON_LABEL_EMAIL", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Button label that identifies one of the methods of how a two factor code can be sent, in this case by email.@LENGTH@15 characters")
#define STR_LOGIN_TWOFACTOR_BUTTON_LABEL_TEXT NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_BUTTON_LABEL_TEXT", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Button label that identifies one of the methods of how a two factor code can be sent, in this case by text message.@LENGTH@15 characters")
#define STR_LOGIN_TWOFACTOR_BUTTON_LABEL_SUBMIT NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_BUTTON_LABEL_SUBMIT", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Button label that tells the user to submit the code.@LENGTH@15 characters")
#define STR_LOGIN_TWOFACTOR_LABEL_CODE_RECEIVED NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_LABEL_CODE_RECEIVED", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Link text that asks the user whether they have received the two factor code yet.@LENGTH@30 characters")
#define STR_LOGIN_TWOFACTOR_LABEL_SEND_CODE NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_LABEL_SEND_CODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Question text that informs the user that a code must be sent and asks them how they want it sent. %1$@ is the mychart brand name")
#define STR_LOGIN_TWOFACTOR_TITLE NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_TITLE", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Title text that is the title of the page.")
#define STR_LOGIN_TWOFACTOR_LABEL_CODE_NOT_RECEIVED NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_LABEL_CODE_NOT_RECEIVED", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Text that informs the user that the code can be sent again if they have not received one.")
#define STR_LOGIN_TWOFACTOR_LABEL_NO_METHOD NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_LABEL_NO_METHOD", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Text that informs the user that they do not have a method on file to send a two factor login code. Tells them to contact their healthcare provider.")
#define STR_LOGIN_TWOFACTOR_ALERT_MISSING_MESSAGE NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_ALERT_MISSING_MESSAGE", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Alert message text of an alert that tells the user the code has not been entered.")
#define STR_LOGIN_TWOFACTOR_ALERT_WRONG_CODE NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_ALERT_WRONG_CODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Alert message text of an alert that tells the user the code has been entered incorrectly.")
#define STR_LOGIN_TWOFACTOR_LABEL_TRUST_DEVICE NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_LABEL_TRUST_DEVICE", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Label text to inform the user that the associated switch will save/trust this device.@LENGTH@25 characters")
#define STR_LOGIN_TWOFACTOR_ALERT_INVALID_DESTINATION NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_ALERT_INVALID_DESTINATION", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Alert message text to inform the user that they did not give a destination correctly to the web service.")
#define STR_LOGIN_TWOFACTOR_ALERT_NO_DESTINATIONS NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_ALERT_NO_DESTINATION", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Alert message text to inform the user that there are no valid destinations to send a two factor code to.")
#define STR_LOGIN_TWOFACTOR_ALERT_EXPIRED NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_ALERT_EXPIRED", @"Login", [WPLocaleInfo currentLocale].bundle ,@"CONTEXT@Alert message text to inform the user that their two factor code has timed-out.")
#define STR_LOGIN_TWOFACTOR_ALERT_SENDING NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_ALERT_SENDING", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Alert message text to inform the user that there was an error sending the code.")
#define STR_LOGIN_ACCS_PASSCODE_BULLETS NSLocalizedStringFromTableInBundle(@"STR_LOGIN_ACCS_PASSCODE_BULLETS", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Accessibility text for the passcode bullets, informs the user of the current number of values entered for the passcode.")
#define STR_LOGIN_TWOFACTOR_ENTER_CODE NSLocalizedStringFromTableInBundle(@"STR_LOGIN_TWOFACTOR_ENTER_CODE", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@String that tells the user where to enter their two factor code that mychart has sent to the email address on file.@LENGTH@21 characters")
#define STR_LOGIN_WARNING_ALERT_TITLE NSLocalizedStringFromTableInBundle(@"STR_LOGIN_WARNING_ALERT_TITLE", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Title of a generic warning alert. Currently only used for a failed request for terms and conditions.")
#define STR_LOGIN_NO_TERMS_ALERT_MSG NSLocalizedStringFromTableInBundle(@"STR_LOGIN_NO_TERMS_ALERT_MSG", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Message displayed to user when we are unable to load the terms and conditions.")
#define WP_STR_LOGIN_RECOVER_BOTH_BUTTON NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_RECOVER_BOTH_BUTTON", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Title of the button that lets the user recover their username. %1$@ is the custom password string. %2$@ is the custom username string")
#define WP_STR_LOGIN_RECOVER_PASSWORD NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_RECOVER_PASSWORD", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Title of the button that lets the user recover their username. %1$@ is the custom password string")
#define WP_STR_LOGIN_RECOVER_USERNAME NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_RECOVER_USERNAME", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Title of the button that lets the user recover their username. %1$@ is the custom username string")
#define WP_STR_LOGIN_TITLE_RECOVER NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_TITLE_RECOVER", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@message on the recover username/password action sheet.")
#define WP_STR_LOGIN_SIGNUP_BUTTON NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_SIGNUP_BUTTON", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Title if the signup button on the login screen.")
#define WP_STR_LOGIN_SIGNUP_LABEL NSLocalizedStringFromTableInBundle(@"WP_STR_LOGIN_SIGNUP_LABEL", @"Login", [WPLocaleInfo currentLocale].bundle, @"CONTEXT@Help text on on the label above the sign up now button.")



@interface WPLoginStrings: NSObject

@end