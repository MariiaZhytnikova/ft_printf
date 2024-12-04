## printf
This repository contains a custom implementation of the printf function in C. It mimics the behavior of the standard printf, supporting a variety of format specifiers, including %c, %s, %p, %d, %i, %u, %x, %X, and %%.
Supported Format Specifiers:

    %c: Print a single character.
    %s: Print a string of characters.
    %p: Print a pointer (memory address).
    %d: Print a signed decimal integer.
    %i: Print a signed integer (same as %d).
    %u: Print an unsigned decimal integer.
    %x: Print an unsigned hexadecimal integer in lowercase.
    %X: Print an unsigned hexadecimal integer in uppercase.
    %%: Print a literal percentage sign.

Features

  Supports standard and custom format specifiers.
  Handles variable arguments using va_list, va_start, and va_end.
  Flexible and easy to extend with additional format specifiers.
