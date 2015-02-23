//
//  AppDelegate.h
//  Conflux for iOS
//
//  Created by Diego Pereira on 1/22/15.
//  Copyright (c) 2015 Conflux. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "synergy/Synergy.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property Synergy *synergy;

@end

