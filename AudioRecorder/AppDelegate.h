//
//  AppDelegate.h
//  AudioRecorder
//
//  Created by 1024 on 22/11/2016.
//  Copyright © 2016 Aliaksandr Karzhenka. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

