//
//  WPAPIMyChartNow.h
//  MyChart
//
//  Created by David Van Fleteren on 9/12/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

/**
 @brief List of activities available in MyChart Now
 */
typedef NS_ENUM(NSInteger, WPAPIMyChartNowActivity) {
    WPAPIMyChartNowActivityCareTeam = 1,
    WPAPIMyChartNowActivityMedications = 2,
    WPAPIMyChartNowActivityEducation = 3,
    WPAPIMyChartNowActivityQuestionnaires = 4,
    WPAPIMyChartNowActivityTestResults = 5,
};

@protocol WPAPIMyChartNowFeatureListDelegate;

@interface WPAPIMyChartNow : NSObject

/**
 * @brief Returns the corresponding MyChart Now feature name for the given activity
 * @param activity a MyChart Now activity
 *
 * @return Corresponding MyChart Now feature name for the given activity
 */
+ (NSString* _Nonnull)myChartNowFeatureNameForActivity:(WPAPIMyChartNowActivity)activity;

/**
 * @brief Determines whether or not the MyChart Now widget can be accessed in the current context (i.e. the current patient and user).
 *
 * @return Access result.
 */
+ (WPAPIAccessResult)accessResultForMyChartNow;

/**
 * @brief Provides an instance of the MyChart Now widget view controller within the current context (i.e. the current patient and user)
 *
 * @return An instance of the MyChartNow view controller. Returns nil if there is no logged in user or if MyChartNow cannot be accessed in the current context.
 */
+ (nullable UIViewController *)getMyChartNowController;

/**
 * @brief Resolves a push notification deep link to a feature within MyChartNow. MyChartNow deep links are formatted like epicmychart://mychartnowhome?mode=xxxxxx
 *
 * If this function returns null, it means that the deep link could not be handled. If a MyChartNow deep link cannot be handled, the calling app should obtain the MyChartNow ViewController and display it to the user.
 *
 * @param params the parameter dictionary from the deep link
 * @return a UIViewController that can be presented to display the deep link activity
 */
+ (nullable UIViewController *)getMyChartNowDeepLinkControllerForParams:(nullable NSDictionary *)params;

/**
 * @brief Asynchronously retrieve the MyChart Now feature list. This list of strings can
    be used to determine which features to hide from the menu
 * @param delegate - delegate used to retrieve list or error
 */
+ (void)getMyChartNowFeatureListWithDelegate:(nonnull id <WPAPIMyChartNowFeatureListDelegate>)delegate;

@end

#pragma mark -

@protocol WPAPIMyChartNowFeatureListDelegate <NSObject>

/*!
 * @brief Callback when the feature list was successfully retrieved
 * @param features
 */
- (void)didGetMyChartNowFeatures:(NSArray<NSString *> * _Nullable)features;

@optional
/*!
 * @brief Callback when the feature list could not be retrieved. This could be because
 *        the patient does not have access or is not in a MyChart Now context
 * @param error - Error with error codes defined in WPAPIRequestControllerErrorCodes
 */
- (void)didFailToGetMyChartNowFeaturesWithError:(nonnull NSError *)error;

@end
