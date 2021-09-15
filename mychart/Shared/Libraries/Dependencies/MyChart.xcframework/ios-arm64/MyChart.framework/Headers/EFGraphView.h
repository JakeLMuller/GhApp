//
//  EFGraphView.h
//  EFGrapher
//
//  Created by Mike Epley on 7/16/14.
//  Copyright © 2014-2021 Epic. All rights reserved.
//

#import "EFDataSet.h"
#import <UIKit/UIKit.h>
#import "WPFlowsheetEnums.h"

@class EFGraphLegend, EFGraphDataView;

typedef NS_ENUM(NSInteger, EFGraphType) {
    EFGraphTypeLine          = 1,
    EFGraphTypeBar           = 2,
    EFGraphTypeBloodPressure = 3,
    EFGraphTypePoint         = 4,
    EFGraphTypeInsulin       = 5,
    EFGraphTypeHourlyTrend   = 6
};

@protocol GraphMetadataSwitchDelegate <NSObject>
-(void) didSelectMetadataTypes:(NSArray*)metadataTypes;
@end

@protocol GraphTrendSwitchDelegate <NSObject>
-(void) didToggleTrendSwitch;
@end

@interface EFGraphView : UIView <GraphMetadataSwitchDelegate>


@property (nonatomic, readonly) CGPoint lastDatumPoint;
@property (nonatomic, readonly) BOOL isShowingTrends;
@property (nonatomic, weak) id<GraphTrendSwitchDelegate> trendSwitchDelegate;
@property (nonatomic, readonly) EFGraphType graphType;

- (void) setDataSet:(EFDataSet *)dataSet dataType:(WPFlowsheetRowDataType)dataType graphType:(EFGraphType)graphType;
- (CGRect) getRectForGraph;
- (void) showMessage:(NSString*)message;
- (void) showData;
- (void) setDataViewHeight:(CGFloat)height;
- (void) deactivateDataViewHeightConstraint;
- (EFGraphDataView*) getDataView;
- (void) restoreToDefaults;

@end
