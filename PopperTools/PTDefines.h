//
//  PTDefines.h
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

#ifndef PopperTools_PTDefines_43691923_EF78_4B48_ADC0_EE4B589BE9FB
#define PopperTools_PTDefines_43691923_EF78_4B48_ADC0_EE4B589BE9FB

/*!
 
 @defined PT_DEBUG_MACROS
 @abstract debugging log utility macros
 
 */
#ifndef PT_DEBUG_MACROS

#ifdef DEBUG

#define LOG(...) NSLog(__VA_ARGS__)
#define LINE() NSLog(@"%d",__LINE__)
#define FUNC() NSLog(@"%s",__PRETTY_FUNCTION__)
#define FUNCLINE() NSLog(@"%s - %d",__PRETTY_FUNCTION__,__LINE__)
#define EXEC(__BLOCK,...) { dispatch_sync(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{ __BLOCK(__VA_ARGS__); });}

#else

#define LOG(...) ;
#define LINE() ;
#define FUNC() ;
#define FUNCLINE() ;
#define EXEC(__BLOCK,...) ;

#endif

#endif

/*!
 
 @defined BOOLSTR
 @abstract replaces "true" if the paramator is true(not 0, not NULL, not nil) otherwise replaces "false"
 @param __BOOL some value
 
 */
#define BOOLSTR(__BOOL) ((__BOOL) ? "true" : "false")

/*!
 
 @defined objcBoolString
 @abstract replaces @"YES" if the paramator is true(not 0, not NULL, not nil) otherwise replaces @"NO"
 @param __BOOL some value
 
 */
#define objcBoolString(__BOOL) ((__BOOL) ? @"YES" : @"NO")


/*!
 
 pdefined PTBLOCK
 @abstract rlpaces pre-blocks variable declaration
 @param __CLASS some object type
 
 */
#if __has_feature(objc_arc_weak)
#define PTBLOCK(__CLASS) __block __CLASS __weak
#elif __has_feature(objc_arc)
#define PTBLOCK(__CLASS) __block __CLASS __unsafe_unretained
#else
#define PTBLOCK(__CLASS) __block __CLASS
#endif

#endif
