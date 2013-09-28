//
//  FailedBankInfo.h
//  CoreDateTutorial
//
//  Created by Jason Koceja on 9/27/13.
//  Copyright (c) 2013 Jason Koceja. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankDetails;

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) FailedBankDetails *details;

@end
