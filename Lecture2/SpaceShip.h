//
//  SpaceShip.h
//  Lecture2
//
//  Created by Lion User on 18.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Vehicle.h"



@interface SpaceShip : Vehicle <spaceEngine>

-(void)setCurrentSpeed: (NSString*)speed;

@end
