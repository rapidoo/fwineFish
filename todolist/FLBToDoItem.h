//
//  FLBToDoItem.h
//  todolist
//
//  Created by Frederic Le Bris on 24/03/2014.
//  Copyright (c) 2014 Frederic Le Bris. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FLBToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
