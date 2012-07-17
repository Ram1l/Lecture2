//
//  Student.m
//  Lecture2
//
//  Created by Lion User on 17/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Student.h"

@implementation Student

-(id)init {
    self = [super init];
    if (self != nil) {
        //init our data
    }
   
    return self;
}

-(void)saySomething {
    NSLog(@"Something!");
}

-(void)saySomething:(NSString *)word{
    NSLog(@"%@", word);
}

-(void)saySomething:(NSString *)word andDance:(NSString *)dance {
    NSLog(@"%@ and dance %@", word, dance);
}

@end
