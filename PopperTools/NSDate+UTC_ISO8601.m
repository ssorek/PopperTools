//
//  NSDate+UTC_ISO8601.m
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


#import "NSDate+UTC_ISO8601.h"

@implementation NSDate (UTC_ISO8601)

#pragma mark - UTC

+ (NSDate*)UTC
{
    return [NSDate UTCWithDate:[NSDate date]];
}

+ (NSDate*)UTCWithDate:(NSDate*)date
{
    NSTimeZone* localTimeZone = [NSTimeZone localTimeZone];
    NSTimeZone* utcTimeZone = [NSTimeZone timeZoneWithAbbreviation:@"UTC"];
    
    NSInteger currentGMTOffset = [localTimeZone secondsFromGMTForDate:date];
    NSInteger gmtOffset = [utcTimeZone secondsFromGMTForDate:date];
    NSTimeInterval gmtInterval = (NSTimeInterval)(gmtOffset - currentGMTOffset);
    
#if __has_feature(objc_arc)
    return [[NSDate alloc] initWithTimeInterval:gmtInterval sinceDate:date];
#else
    return [[[NSDate alloc] initWithTimeInterval:gmtInterval sinceDate:date] autorelease];
#endif
}

- (NSDate*)convertToUTC
{
    return [NSDate UTCWithDate:self];
}


#pragma mark - ISO8601

- (NSString*)ISO8601String
{
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = @"yyyy-MM-dd'T'HH:mm:ssZ";
    NSString* dateString = [formatter stringFromDate:self];
#if !__has_feature(objc_arc)
    [formatter release];
#endif
    
    return dateString;
}

+ (NSDate*)dateFromISO8601String:(NSString*)string
{
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = @"yyyy-MM-dd'T'HH:mm:ssZ";
    NSDate* date = [formatter dateFromString:string];
#if !__has_feature(objc_arc)
    [formatter release];
#endif
    return date;
}


@end
