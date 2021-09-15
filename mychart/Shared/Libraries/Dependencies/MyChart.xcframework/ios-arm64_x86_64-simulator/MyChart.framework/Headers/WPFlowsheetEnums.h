//
//  WPFlowsheetEnums.h
//  MyChart
//
//  Created by Jacob Andrews-Ohlman on 7/11/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

/*!
 @brief Maps to I FLO 27000. Use kWPFlowsheetRowDataTypeMinimum and kWPFlowsheetRowDataTypeMaximum to determine what are valid enum values.
 */
typedef NS_ENUM(NSInteger, WPFlowsheetRowDataType) {
    kWPFlowsheetRowDataTypeBloodPressure = 31999,
    
    kWPFlowsheetRowDataTypeHeight = 32000,
    kWPFlowsheetRowDataTypeWeight = 32001,
    kWPFlowsheetRowDataTypeLeanMass = 32002,
    kWPFlowsheetRowDataTypeBMI = 32003,
    kWPFlowsheetRowDataTypeBodyFatPercent = 32004,
    kWPFlowsheetRowDataTypePulse = 32005,
    
    kWPFlowsheetRowDataTypeBodyTemperature = 32006,
    kWPFlowsheetRowDataTypeBloodPressureSystolic = 32007,
    kWPFlowsheetRowDataTypeBloodPressureDiastolic = 32008,
    kWPFlowsheetRowDataTypeRespiratoryRate = 32009,
    
    kWPFlowsheetRowDataTypeOxygenSaturation = 32010,
    kWPFlowsheetRowDataTypePeripheralPerfusion = 32011,
    kWPFlowsheetRowDataTypeBloodGlucose = 32012,
    kWPFlowsheetRowDataTypeElectrodermalActivity = 32013,
    kWPFlowsheetRowDataTypeBloodAlcoholContent = 32014,
    kWPFlowsheetRowDataTypeForcedVitalCapacity = 32015,
    kWPFlowsheetRowDataTypeForcedExpiratory = 32016,
    kWPFlowsheetRowDataTypePeakExpiratoryFlowRate = 32017,
    
    kWPFlowsheetRowDataTypeStepCount = 32018,
    kWPFlowsheetRowDataTypeDistanceWalkingRunning = 32019,
    kWPFlowsheetRowDataTypeDistanceCycling = 32020,
    kWPFlowsheetRowDataTypeBasalEnergyBurned = 32021,
    kWPFlowsheetRowDataTypeActiveEnergyBurned = 32022,
    kWPFlowsheetRowDataTypeFloorsClimbed = 32023,
    kWPFlowsheetRowDataTypeNumberOfTimesFallen = 32024,
    kWPFlowsheetRowDataTypeInhalerUsage = 32025,
    
    kWPFlowsheetRowDataTypeDietaryFatTotal = 32026,
    kWPFlowsheetRowDataTypeDietaryFatPolyunsaturated = 32027,
    kWPFlowsheetRowDataTypeDietaryFatMonounsaturated = 32028,
    kWPFlowsheetRowDataTypeDietaryFatSaturated = 32029,
    kWPFlowsheetRowDataTypeDietaryCholesterol = 32030,
    kWPFlowsheetRowDataTypeDietarySodium = 32031,
    kWPFlowsheetRowDataTypeDietaryCarbohydrates = 32032,
    kWPFlowsheetRowDataTypeDietaryFiber = 32033,
    kWPFlowsheetRowDataTypeDietarySugar = 32034,
    kWPFlowsheetRowDataTypeDietaryEnergyConsumed = 32035,
    kWPFlowsheetRowDataTypeDietaryProtein = 32036,
    kWPFlowsheetRowDataTypeDietaryVitaminA = 32037,
    kWPFlowsheetRowDataTypeDietaryThiamin = 32038,
    kWPFlowsheetRowDataTypeDietaryRiboflavin = 32039,
    kWPFlowsheetRowDataTypeDietaryNiacin = 32040,
    kWPFlowsheetRowDataTypeDietaryPantothenicAcid = 32041,
    kWPFlowsheetRowDataTypeDietaryVitaminB6 = 32042,
    kWPFlowsheetRowDataTypeDietaryBiotin = 32043,
    kWPFlowsheetRowDataTypeDietaryFolicAcid = 32044,
    kWPFlowsheetRowDataTypeDietaryVitaminB12 = 32045,
    kWPFlowsheetRowDataTypeDietaryVitaminC = 32046,
    kWPFlowsheetRowDataTypeDietaryVitaminD = 32047,
    kWPFlowsheetRowDataTypeDietaryVitaminE = 32048,
    kWPFlowsheetRowDataTypeDietaryVitaminK = 32049,
    kWPFlowsheetRowDataTypeDietaryCalcium = 32050,
    kWPFlowsheetRowDataTypeDietaryIron = 32051,
    kWPFlowsheetRowDataTypeDietaryPhosphorus = 32052,
    kWPFlowsheetRowDataTypeDietaryIodine = 32053,
    kWPFlowsheetRowDataTypeDietaryMagnesium = 32054,
    kWPFlowsheetRowDataTypeDietaryZinc = 32055,
    kWPFlowsheetRowDataTypeDietarySelenium = 32056,
    kWPFlowsheetRowDataTypeDietaryCopper = 32057,
    kWPFlowsheetRowDataTypeDietaryManganese = 32058,
    kWPFlowsheetRowDataTypeDietaryChromium = 32059,
    kWPFlowsheetRowDataTypeDietaryMolybdenum = 32060,
    kWPFlowsheetRowDataTypeDietaryChloride = 32061,
    kWPFlowsheetRowDataTypeDietaryPotassium = 32062,
    kWPFlowsheetRowDataTypeDietaryCaffeine = 32063,
    kWPFlowsheetRowDataTypeInsulinDeliveryBasal = 32064,
    kWPFlowsheetRowDataTypeInsulinDeliveryBolus = 32065,
    
    kWPFlowsheetRowDataTypeMinimum = 31999,
    kWPFlowsheetRowDataTypeMaximum = 32065,
    kWPFlowsheetRowDataTypeUnknown = -1,
};

typedef NS_ENUM(NSInteger, WPFlowsheetRowMetadataType) {
    kWPFlowsheetRowMetadataTypeUnknown = -1,
    
    kWPFlowsheetRowMetadataTypeBloodGlucose = 1,
    kWPFlowsheetRowMetadataTypeInsulin = 2
};



typedef NS_ENUM(NSInteger, WPFlowsheetValueType) {
    kWPFlowsheetValueTypeNumeric = 1,
    kWPFlowsheetValueTypeString = 2,
    kWPFlowsheetValueTypeCustomList = 8,
} ;


/*!
 @brief Maps to I FLO 32060
 */
typedef NS_ENUM(NSInteger, WPAccumulationPeriod) {
    kWPAccumulationPeriodNone = 0,
    kWPAccumulationPeriodMinute = 1,
    kWPAccumulationPeriodHour = 2,
    kWPAccumulationPeriodDay = 3,
    kWPAccumulationPeriodWeek = 4,
    kWPAccumulationPeriodMonth = 5,
    kWPAccumulationPeriodYear = 6,
} ;
