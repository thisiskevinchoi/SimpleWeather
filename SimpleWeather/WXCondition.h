//
//  WXCondition.h
//  SimpleWeather
//
//  Created by Kevin Choi on 5/26/14.
//  Copyright (c) 2014 Kevin Choi. All rights reserved.
//

#import <Mantle.h>

// The MTLJSONSerializing protocol tells the Mantle serializer that this object has instructions on how to map JSON to Objective-C properties
@interface WXCondition : MTLModel <MTLJSONSerializing>


// All the weather data properties
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSNumber *humidity;
@property (nonatomic, strong) NSNumber *temperature;
@property (nonatomic, strong) NSNumber *tempHigh;
@property (nonatomic, strong) NSNumber *tempLow;
@property (nonatomic, strong) NSString *locationName;
@property (nonatomic, strong) NSDate *sunrise;
@property (nonatomic, strong) NSDate *sunset;
@property (nonatomic, strong) NSString *conditionDescription;
@property (nonatomic, strong) NSString *condition;
@property (nonatomic, strong) NSNumber *windBearing;
@property (nonatomic, strong) NSNumber *windSpeed;
@property (nonatomic, strong) NSString *icon;


// Helper method to map weather conditions to image file
- (NSString *)imageName;

@end
