//
//  NSURL+LibraryHandling.h
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

@interface NSURL (LibraryHandling)

/*!
 
 @method appLibraryDirectoryURL
 @abstract creates and returns URL for <app directory>/Library/
 @return URL for <app directory>/Library/
 
 */
+ (NSURL*)appLibraryDirectoryURL;

/*!
 
 @method appLibraryCacheDirectoryURL
 @abstract creates and returns URL for <app directory>/Library/Caches/
 @return URL for <app directory>/Library/Caches/
 
 */
+ (NSURL*)appLibraryCacheDirectoryURL;

/*!
 
 @method userDocumentsDirectoryURL
 @abstract creates and returns URL for <app directory>/Documents/
 @return URL for <app directory>/Documents/
 
 */
+ (NSURL*)userDocumentsDirectoryURL;

/*!
 
 @method downloadDirectoryURL
 @abstract creates and returns URL for <app directory>/Library/Caches/download/
 @return URL for <app directory>/Library/Caches/download/
 
 @discussion
 You have to rewrite if your app's download directory is not <app directory>/Library/Caches/download/.
 If <app directory>/Library/Caches/download/ does not exist, your app would not work expected.
 
 */
+ (NSURL*)downloadDirectoryURL;

@end
