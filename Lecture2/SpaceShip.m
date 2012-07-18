//
//  SpaceShip.m
//  Lecture2
//
//  Created by Lion User on 18.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "SpaceShip.h"

@implementation SpaceShip
-(id)init {
    self = [super init];
    if (self != nil) {
       //init our data
    }
    
    return self;
}
-(void)getCurrentLocation {
    NSLog(@"Somewere!");
}
-(void)setCurrentSpeed : (NSString*) speed{
NSLog(@"%@", speed);
};

@end
