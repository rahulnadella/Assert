/*
 The MIT License (MIT) -> insist.h
 
 Copyright (c) 2015 Rahul Nadella http://github.com/rahulnadella
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

/*
 If the argument expression of this macro with functional form compares the expression to 
 be evaluated. If this expression evaluates to 0, this causes an assertion failure that 
 terminates the program, in which a message is written to the standard error device and 
 abort is called, terminating the program execution.
 
 The specifics of the message shown depend on the particular library implementation, 
 but it shall at least include: the expression whose assertion failed, the name of 
 the source file, and the line number where it happened. A usual expression format is:
 
 Assertion Failed: expression, file filename, line line number
 
 Example of usage: insist(frame);
 
 @since 1.0
 @version 1.0
 */
#define insist(e) if(!(e)) [NSException raise: @"Assertion Failed." format: @"%@:%d (%s)", [[NSString stringWithCString:__FILE__ encoding:NSUTF8StringEncoding] lastPathComponent], __LINE__, #e]
