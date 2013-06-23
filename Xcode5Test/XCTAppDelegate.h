//
//  XCTAppDelegate.h
//  Xcode5Test
//
//  Created by Jin Budelmann on 24/06/13.
//  Copyright (c) 2013 Jin Budelmann. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XCTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
