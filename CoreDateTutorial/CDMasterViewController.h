//
//  CDMasterViewController.h
//  CoreDateTutorial
//
//  Created by Jason Koceja on 9/27/13.
//  Copyright (c) 2013 Jason Koceja. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDMasterViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
