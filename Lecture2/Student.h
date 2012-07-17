//
//  Student.h
//  Lecture2
//
//  Created by Lion User on 17/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol StudentDelegate <NSObject>
-(void)drinkBeer;

@optional
-(void)learnSomething;

@end

@interface Student : NSObject


-(void)saySomething;
-(void)saySomething: (NSString*)word;
-(void)saySomething:(NSString *)word andDance:(NSString*) dance;

@end
