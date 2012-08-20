//
//  NSDate+UTC_ISO8601.h
//  PopperTools
//
// Thanks for using PopperTools!
//
// Copyright (c) 2012 Henrique Sasaki Yuya
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//


#import <Foundation/Foundation.h>

@interface NSDate (UTC_ISO8601)

#pragma mark - UTC

/*!
 
 @method UTC
 @abstract creates and returns now UTC
 @return now UTC
 
 */
+ (NSDate*)UTC;


/*!
 
 @method UTCWithDate:
 @abstarct create and returns UTC from an NSDate instance
 @return UTC created from an NSDate instance
 
 */
+ (NSDate*)UTCWithDate:(NSDate*)date;

/*!
 
 @method convertToUTC
 @abstract convert to UTC using self
 return UTC converted using self
 
 */
- (NSDate*)convertToUTC;


#pragma mark - ISO8601

/*!
 
 @method ISO8601String
 @abstract returns ISO8601 format string
 @retrun ISO 8601 format string
 
 */
- (NSString*)ISO8601String;

/*
 
 @method dateFromISO8601String:
 @abstract creates and returns an NSDate instance from ISO8601 format string
 @return created date
 
 */
+ (NSDate*)dateFromISO8601String:(NSString*)string;


@end
