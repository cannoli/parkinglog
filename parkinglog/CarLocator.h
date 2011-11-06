//
//  CarLocator.h
//  WhereIsMyCar
//
//  Created by Shu Chiun Cheah on 7/10/11.
//  Copyright 2011 Indiefoodies. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocationManagerDelegate.h>
#import <MapKit/MKAnnotation.h>
#import <MapKit/MKMapView.h>

@class CLLocationManager;
@class MKMapView;
@interface CarLocator : NSObject<CLLocationManagerDelegate, MKAnnotation, MKMapViewDelegate> 
{
    CLLocationManager*  coreManager;
    MKMapView*          targetMapView;
    
    CLLocation*         parkedLocation;
    
    BOOL                parkingAnnotated;
    unsigned int        userLocatedCount;
    BOOL                mapLoaded;
}
@property (nonatomic,retain) CLLocationManager* coreManager;
@property (nonatomic,retain) MKMapView*         targetMapView;
@property (nonatomic,retain) CLLocation*        parkedLocation;
@property (nonatomic,assign) BOOL               parkingAnnotated;
@property (nonatomic,assign) unsigned int       userLocatedCount;
@property (nonatomic,assign) BOOL               mapLoaded;

+ (CarLocator*)getInstance;
+ (void) destroyInstance;

- (void) startUpdating;

@end
