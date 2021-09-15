//
//  WPActivityWebViewController.h
//  MyChart
//
//  Created by Yechan Hong on 5/29/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <WebKit/WebKit.h>
#import "WPWebViewController.h"
#import "WPSwiftProtocols.h"
#import <CoreLocation/CoreLocation.h>

typedef NS_ENUM(NSInteger, WPMyChartWebViewMode) {
    //Scheduling
    kWPMyChartWebViewModeScheduling = 1,
    kWPMyChartWebViewModeSchedulingTask,
    kWPMyChartWebViewModeReschedule,
    kWPMyChartWebViewModeSchedulingTickets,
    kWPMyChartWebViewModeCareTeamDirectScheduling,
    kWPMyChartWebViewModeCareTeamAppointmentRequest,
    kWPMyChartWebViewModeCampaignsScheduling,
    //Echeckin and Questionnaires
    kWPMyChartWebViewModeECheckin,
    kWPMyChartWebViewModeQuestionnaires,
    kWPMyChartWebViewModeAppointmentDetails,
    kWPMyChartWebViewModeOldServerAppointmentQuestionnaires,
    kWPMyChartWebViewModeNewServerAppointmentQuestionnaires,
    kWPMyChartWebViewModeNewServerHistoryAppointmentQuestionnaires,
    kWPMyChartWebViewModePatientAssignedQuestionnaireTask,
    //Messaging tasks
    kWPMyChartWebViewModeQuestionnairesTask,
    kWPMyChartWebViewModeHistoryQuestionnairesTask,
    //Other
    kWPMyChartWebViewModeCustom,
    kWPMyChartWebViewModePatientEstimates,
    kWPMyChartWebViewModeEVisits,
    kWPMyChartWebViewModeBillSummary,
    kWPMyChartWebViewModeBillPayment,
    kWPMyChartWebViewModeRxRefillPayment,
    kWPMyChartWebViewModeVisitPayment,
    kWPMyChartWebViewModeFinancialAssistance,
    kWPMyChartWebViewModeMainPage,
    kWPMyChartWebViewModePremiumScheduling,
    kWPMyChartWebViewModePreventiveCare,
    
    //Letters
    kWPMyChartWebViewModeLetters,
    kWPMyChartWebViewModeEducation,
    kWPMyChartWebViewModeSymptomChecker,
    kWPMyChartWebViewModeNone,
    
    //H2G
    kWPMyChartWebViewModeManageMyAccounts,
    kWPMyChartWebViewModeCommunityIntialConnection,
    kWPMyChartWebViewModeUpdateMyAccounts,
    
    //On My Way
    kWPMyChartWebViewModeOnMyWay,
    
    //AVS
    kWPMyChartWebViewModeAVSVisitSummary,
    kWPMyChartWebViewModeAVSVisitDetails,
    kWPMyChartWebViewModePastAdmissionsAvs,
    
    //Open Notes
    kWPMyChartWebViewModeNotes,
    kWPMyChartWebViewModeAdmissionsNotes,
    
    //DXR Visit
    kWPMyChartWebViewModeDXRAppt,
    
    // Logout
    kWPMyChartWebViewModeLogout,
    
    // Keep Alive
    kWPMyChartWebViewModeKeepAlive,
    
    // Keep Alive ASP
    kWPMyChartWebViewModeKeepAliveASP,
    
    // Screenings
    kWPMyChartWebViewModeScreenings,
    // Family Access
    kWPMyChartWebViewModeFamilyAccess,
    
    //Medications
    kWPMyChartWebViewModeMedications,
    
    // Document Center
    kWPMyChartWebViewModeDocumentCenter,
    
    //Generic MO or pinch-to-zoom
    kWPMyChartWebViewModeGenericMoJumpLink,
    
    // homepage sub-activites
    kWPMyChartWebViewModeBillingDetails,
    kWPMyChartWebViewModeBillingPayments,
    kWPMyChartWebViewModeBillingAutopay,
    kWPMyChartWebViewModePatientEstimateDetails,
    
    // homepage hubs
    kWPMyChartWebViewModeDocumentHub,
    
    // Pregnancy Hub and sub-activities
    kWPMyChartWebViewModePregnancyHubEnroll,
    
    // To Do Change Details
    kWPMyChartWebViewModeToDoChangeDetails,
    
    // Custom Report for Test result
    kWPMyChartWebViewModeTestResultDetail,
    
    // Contact Verification
    kWPMyChartWebViewModeContactVerification,
    kWPMyChartWebViewModeMobileVerification,
    kWPMyChartWebViewModeEmailVerification,
    
    // Immunizations
    kWPMyChartWebViewModeImmunizations,
};

@protocol WPWebSessionCallbackProtocol;
@protocol WPGetMyChartUrlCallbackProtocol;
@protocol WPGetMyChartJumpTokenCallbackProtocol;

@interface WPActivityWebViewController : WPWebViewController <WPGetMyChartJumpTokenCallbackProtocol, WebSessionCallbackProtocol, WPGetMyChartUrlCallbackProtocol, CLLocationManagerDelegate>

@property (nonatomic) BOOL wasClosePressed;
@property (nonatomic, strong) NSString* stringMode;
@property (nonatomic) NSInteger patientIndex;
@property (nonatomic, strong) NSDictionary<NSString *,NSString*> * moParameters;
@property (nonatomic) BOOL isExternal;
@property (nonatomic, strong) NSString* orgId;

@property (nonatomic) BOOL shouldLogoutOfMyCWebOnClose;     // Force a logout on MyChart Web when close is pressed
// Returns TRUE if the corresponding button exists in the current webpage that is loaded
@property (nonatomic, readonly) BOOL previousStepButtonExists;
@property (nonatomic, readonly) BOOL cancelButtonExists;
@property (nonatomic, readonly) BOOL finishLaterButtonExists;

@property (nonatomic) BOOL shouldExitAfterLoad;  // Immediately exit after the webview loads (e.g. used for logging out using bye.asp
@property (nonatomic, strong) NSString* startUrl;
@property (nonatomic, strong) NSString* myChartHost; //MyChart Url domain


- (instancetype)initWithMode:(WPMyChartWebViewMode)mode parameters:(NSDictionary<NSString *,NSString*> *)params andPresentationStyle:(WPViewPresentationStyle)style;
- (instancetype)initWithMode:(WPMyChartWebViewMode)mode parameters:(NSDictionary<NSString *,NSString*> *)params andPresentationStyle:(WPViewPresentationStyle)style patientIndex:(NSInteger)patientIndex;
- (instancetype)initWithMode:(WPMyChartWebViewMode)mode parameters:(NSDictionary<NSString *,NSString*> *)params andPresentationStyle:(WPViewPresentationStyle)style patientIndex:(NSInteger)patientIndex isExternal:(BOOL)isExternal orgID:(NSString*)orgID;
- (instancetype)initWithStringMode:(NSString *)modeString parameters:(NSDictionary<NSString *,NSString*> *)params andPresentationStyle:(WPViewPresentationStyle)style patientIndex:(NSInteger)patientIndex isExternal:(BOOL)isExternal orgID:(NSString*)orgID NS_DESIGNATED_INITIALIZER;
- (void)launchPageWithParameters:(NSDictionary<NSString *,NSString*> *)params;
- (BOOL)shouldAllowForNavigationAction:(WKNavigationAction *)navigationAction;
- (BOOL)shouldAllowForNavigationAction:(WKNavigationAction *)navigationAction openPDFInSeparateWebview:(BOOL)openPDFInSeparateWebview;
- (BOOL)checkAllowedHost:(NSURL *)url;
- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation;
- (IBAction)closePressed:(id)sender;
- (void)logoutOfMyCWebsite;
//Closes controller with optional animation and completion
- (void)closeControllerAnimated:(BOOL)animated completion:(void (^)(void))completion;
//Helper function, closes controller animated with no completion
- (void)closeController NS_SWIFT_NAME(closeController());

- (void)tryBackNavigation;
- (NSString *)getJSExistsString:(NSString *) elementSelector;
- (NSInteger) getWebViewPatientIndex;
//Exit Conditions
- (void)workflowCompleteWithURL:(NSURL *)url;
- (void)workflowCompleteAndCloseWithURL:(NSURL *)url;
- (void)handleBackNavigation;
- (BOOL)shouldShowBackNavigation;
+ (void)clearCookies;
- (BOOL)handleFallbackToJumpToken:(NSURL *)url withQueryParameters:(NSDictionary *)queryParameters;
//Misc
/**
* Checks for and if found - handles provider bio links by launching them into a new external webview
* Returns YES if one is found and handled, NO otherwise
* @url the url to check
*/
- (BOOL)checkForAndHandleProviderBioLinksWithURL:(NSURL *)url;
@end
