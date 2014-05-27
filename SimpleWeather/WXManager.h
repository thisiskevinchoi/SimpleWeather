//
//  WXManager.h
//  SimpleWeather
//
//  Created by Kevin Choi on 5/26/14.
//  Copyright (c) 2014 Kevin Choi. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
// Note that you’re not importing WXDailyForecast.h; you’ll always use WXCondition as the forecast class. WXDailyForecast only exists to help Mantle transform JSON to Objective-C
#import "WXCondition.h"

@interface WXManager : NSObject
<CLLocationManagerDelegate>

// Use instancetype instead of WXManager so subclasses will return the appropriate type
+ (instancetype)sharedManager;

// These properties will store your data. Since WXManager is a singleton, these properties will be accessible anywhere. Set the public properties to readonly as only the manager should ever change these values privately
@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

// This method starts or refreshes the entire location and weather finding process
- (void)findCurrentLocation;

@end
