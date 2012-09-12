//
//  NSDictionary+SortedKeyEnumerator.m
//  PopperTools
//
//  Created by Henrique on 2012/08/28.
//  Copyright (c) 2012年 NEXTBOOK Inc. All rights reserved.
//

#import "NSDictionary+SortedKeyEnumerator.h"

@implementation NSDictionary (SortedKeyEnumerator)

- (NSEnumerator*)sortedKeyEnumeratorWithSortOption:(PTSortOptions)option
{
    return [[[self allKeys] sortedArrayUsingComparator:^NSComparisonResult(id obj1, id obj2) {
        
        NSString* fkey = obj1;
        NSString* skey = obj2;
        
        return ((option) ? -([fkey compare:skey]) : [fkey compare:skey]);
        
        
    }] objectEnumerator];
}

@end
