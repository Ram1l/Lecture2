//
//  AppDelegate.h
//  Lecture2
//
//  Created by Lion User on 17/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Student.h"
#import "Vehicle.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate, StudentDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@end
