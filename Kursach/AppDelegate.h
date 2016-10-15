//
//  AppDelegate.h
//  Kursach
//
//  Created by Динара Нафеева on 15.10.16.
//  Copyright © 2016 Динара Нафеева. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

