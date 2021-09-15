//
//  WPAPIHomepage.h
//  MyChart
//
//  Created by David Huntsman on 8/26/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//
@interface WPAPIHomepage : NSObject

/**
 * @brief Determines whether the homepage can be accessed by the current user.
 * @return Access result.
 */
+ (WPAPIAccessResult)accessResultForHomepage;

/**
 * @brief Provides the homepage view controller instance to be pushed on to the navigation stack.  If you do not simply push or present this view controller, note that to preserve its UI, the navigation controller's navbar view should hidden and this viewcontroller's view should be constrained to the hoizontal safe areas and to the top and bottom of the window (outside of the safe area).
 * @param manageNavbarVisibility - The homepage will attempt to hide the navbar when it's visible and show it again when new view controllers are pushed on top of it.  It will also attempt to hide the navbar on logout from itself (or from timeouts triggered within subpages).  Set this property to false if your navigation controller will manage its own visibility.
 * @return The homepage viewcontroller. Returns nil if there is no logged in user or if the user cannot access the homepage.
 */
+ (nullable UIViewController *)getHomepageControllerThatManagesNavbarVisibility:(BOOL)manageNavbarVisibility;

/**
 @brief Provides the homepage's health feed. The health feed is the UIViewController that houses the tableview of alerts pertaining to the logged-in user and all associated proxy subjects. All actions taken on the feed's UI are promoted as epichttp links and can be intercepted through the WPAPIDeepLinkActionDelegate
 @return The homepage's health feed. Returns nil if there is no logged in user or if the user cannot access the homepage.
 */
+ (nullable UIViewController *)getHealthFeed;


/**
 Sets the provided health feed controller to "select" the provided context for a wpr identifier.  This primarily reorders the feed so that the selected person is sorted to the top, and will scroll the feed to the top after reordering to highlight the selected person.

 @param healthFeed the feed to modify
 @param person the selected person.
 @warning If the person is deemed invalid, this function does nothing.
 */
+ (void)setHealthFeedContext:(nonnull UIViewController*)healthFeed withPerson:(id<IWPPerson> _Nonnull)person;

/**
Checks security for the activity corresponding to the given deep link

 @param deepLink the deep link for the activity to be checked. This can be a manually constructed deep link starting with a valid prefix (epichttp:// , epicmychart:// , or the app's launch scheme), or one of the WPAPIActivity constants.
 @param person the person whose access is being checked
 @warning In order to use this API for pinch-to-zoom activities (May 20+), the setting LoadHomepageMenus must be set to true in the SettingsForLibraryBuilds property list.
 @return WPAPIAccessResult that describes the patient's access to the activity corresponding to the deep link 
*/
+ (WPAPIAccessResult)accessResultForActivityWithEpicHttpDeepLink:(nonnull NSString*)deepLink forPerson:(id<IWPPerson>_Nonnull)person DEPRECATED_MSG_ATTRIBUTE("This API has been relocated to WPAPIActivity, and will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 Returns the view controller for the activity that corresponds to the provided deep link. Within the activity, the information displayed and the features available will be dependent on the current person and the user's security.

  @param deepLink the deep link for the activity to be opened. This can be a manually constructed deep link starting with a valid prefix (epichttp:// , epicmychart:// , or the app's launch scheme), or one of the WPAPIActivity constants.
  @warning In order to use this API for pinch-to-zoom activities (May 20+), the setting LoadHomepageMenus must be set to true in the SettingsForLibraryBuilds property list.
  @return A view controller for the corresponding activity that should be immediately displayed. Returns nil if the WPAPIDeepLinkActionDelegate handled the deep link or if there was an issue launching the activity (i.e. current patient doesn't have access to the activity, the deep link couldn't be parsed)
 */
+ (nullable UIViewController*)getViewControllerForActivityWithEpicHttpDeepLink:(nonnull NSString*)deepLink DEPRECATED_MSG_ATTRIBUTE("This API has been relocated to WPAPIActivity, and will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
Checks if the activity corresponding to the given deep link should be presented modally, or pushed onto the navigation stack

@param deepLink the deep link for the activity to be checked. This can be a manually constructed deep link starting with a valid prefix (epichttp:// , epicmychart:// , or the app's launch scheme), or one of the WPAPIActivity constants.
@return true if the activity's view controller should be presented modally, false if it should be pushed onto the navigation stack
*/
+ (BOOL)shouldPresentViewControllerModallyForActivityWithEpicHttpDeepLink:(nonnull NSString*)deepLink DEPRECATED_MSG_ATTRIBUTE("This API has been relocated to WPAPIActivity, and will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");
    
@end

