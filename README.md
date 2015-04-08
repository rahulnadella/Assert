Assert
======

Overview
--------

If the argument expression of this macro with functional form compares the expression to be evaluated. If this expression evaluates to 0, this causes an assertion failure that terminates the program, in which a message is written to the standard error device and abort is called, terminating the program execution.
 
The specifics of the message shown depend on the particular library implementation, but it shall at least include: the expression whose assertion failed, the name of the source file, and the line number where it happened. 

An usual expression format is -->  *Assertion Failed: expression, file filename, line line number*

#####Version
>Version 1.0 - Design and Implementation of the Assert

#####Build
>Master -> Only works on iOS 5.0 or greater

Usage
--------
 
To use this function include **insist.h** header file in your project 
 
*Example of usage:* 

    insist(frame);

License
--------

*MIT License* --> A short, permissive software license. Basically, you can do whatever you want as long as you include the original copyright and license notice in any copy of the software/source.  There are many variations of this license in use.
