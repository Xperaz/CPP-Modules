# C++ templates

  Templates make it possible to use one function or class to handle many different data types.<br>
  The template concept can be used in two different ways: with functions and with classes.

  ## Function Templates

  Suppose you want to write a function that returns the absolute value of a number<br>
  For every type we need to create a new function (int, long, float...) : Rewriting the same function body over and over for different types is time-consuming and
  wastes space in the listing.<br>

  It would be nice if there were a way to write such a function just once, and have it work for many different data types. This is exactly what function templates do for you.<br>

  ## A Simple Function Template
  
