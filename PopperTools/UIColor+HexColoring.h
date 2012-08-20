//
//  UIColor+HexColoring.h
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

#import <UIKit/UIColor.h>

@interface UIColor (HexColoring)

/*!
 
 @method colorWithHex:
 @abstract creates and returns UIColor by hex colouring
 @param hex unsigned integer value
 @return UIColor instance
 
 @discussion usage - [UIColor colorWithHex:0xffa500ff] -> returns orange color.
 
 */
+ (UIColor*)colorWithHex:(uint32_t)hex;

/*!
 
 @method colorWithHexString:
 @abstract creates and returns UIColor by hex colouring
 @param string hex colouring style string
 @return UIColor instance
 
 @discussion usage - [UIColor colorWithHexString:@"ffa500ff"] -> returns orange color.
 
 */
+ (UIColor*)colorWithHexString:(NSString*)string;

@end
