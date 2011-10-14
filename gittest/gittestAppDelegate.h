//
//  gittestAppDelegate.h
//  gittest
//
//  Created by lynn 林 on 11-10-14.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class gittestViewController;

@interface gittestAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet gittestViewController *viewController;

@end
