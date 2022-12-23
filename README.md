#  Mathematical Function Interpreter

Input a mathematical function and evaluate it at various points.

## About

Define a function f mapping a real number x to a real number f(x). If f is well-defined, it can be evaluated at various points x.

This repository is a work in progress.

## Goals

The function f will be inputted as a string. The string will be parsed into an evaluable mathematical expression. For this purpose I want to

* define a context-free grammar
* implement a lexical and syntactical analysis to turn the inputted string into to a syntax tree
* generate an evaluable mathematical expression from the syntax tree

## References

Alfred V. Aho, Monica S. Lam, Ravi Sethi und Jeffrey D. Ullman. Compilers:
Principles, Techniques, & Tools. Second Edition. Addison-Wesley, 2007.

