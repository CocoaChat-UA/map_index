//
// Created by dmitriy on 14.04.13.
//
#import <Foundation/Foundation.h>

#import <MapKit/MKGeometry.h>
#import <MapKit/MKAnnotation.h>

@protocol MKAnnotation;

@interface MIIndex : NSObject

- (void)addAnnotations:(NSArray *)annotations;
- (void)addAnnotation:(id <MKAnnotation>)annotation;
- (void)removeAnnotations:(NSArray *)annotations;
- (void)removeAnnotation:(id <MKAnnotation>)annotation;
- (NSSet *)annotationsInMapRect:(MKMapRect)mapRect;

- (NSArray *)annotations;

@end