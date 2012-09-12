//
//  NSDictionary+SortedKeyEnumerator.h
//  PopperTools
//
//  Created by Henrique on 2012/08/28.
//  Copyright (c) 2012年 NEXTBOOK Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : uint32_t {
    
    PTSortOptionAscending = 0x0,
    PTSortOptionDescending = 0x1,
    
} PTSortOptions;

@interface NSDictionary (SortedKeyEnumerator)

- (NSEnumerator*)sortedKeyEnumeratorWithSortOption:(PTSortOptions)option;

@end
