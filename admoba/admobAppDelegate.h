//
//  admobAppDelegate.h
//  admoba
//
//  Created by 浦野 昌平 on 12/09/02.
//  Copyright (c) 2012年 浦野 昌平. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "admobViewController.h"
@interface admobAppDelegate : UIResponder <UIApplicationDelegate> {
    admobViewController *vc;
}

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
