Assert
======
Usage
------------
If the argument expression of this macro with functional form compares the expression to be evaluated. If this expression evaluates to 0, this causes an assertion failure that terminates the program, in which a message is written to the standard error device and abort is called, terminating the program execution.
 
The specifics of the message shown depend on the particular library implementation, but it shall at least include: the expression whose assertion failed, the name of the source file, and the line number where it happened. A usual expression format is:  

**Assertion Failed: expression, file filename, line line number**
 
Example of usage: 

    insist(frame);
