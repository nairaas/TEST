//
//  XNAppDelegate.h
//  XINGTest
//
//  Created by Naira on 5/1/14.
//  Copyright (c) 2014 Naira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
