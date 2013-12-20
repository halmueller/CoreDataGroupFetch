//
//  KeyedName.h
//  core data group by
//
//  Created by Hal Mueller on 12/19/13.
//  
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface KeyedName : NSManagedObject

@property (nonatomic, retain) NSString * key;
@property (nonatomic, retain) NSString * name;

@end
