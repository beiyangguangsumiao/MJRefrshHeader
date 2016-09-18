//
//  AppDelegate.h
//  Config
//
//  Created by 丸子 on 16/8/14.
//  Copyright © 2016年 丸子. All rights reserved.
//

#import <UIKit/UIKit.h>

#if DEBUG

#define ABC @"我是debug"

#elif AdHoc

#define ABC @"我是adhoc"

#else 

#define ABC @"我是release"

#endif


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

