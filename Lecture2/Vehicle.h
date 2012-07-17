//
//  Vehicle.h
//  Lecture2
//
//  Created by Lion User on 17.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol spaceEngine <NSObject>
-(void)getCurrentLocation;


@optional
-(void)getFuelLevel;


@end

@interface Vehicle : NSObject

@property (nonatomic, strong) NSString *name;
//-(void)VehicleName: (NSString*) name;

@end
