//
//  MathematicalFunctionEvaluator.cpp
//  mathematical-function-evaluator
//
//  Created by Jan-Philipp on 23.12.22.
//

#include <iostream>

#include "Interpreter.hpp"
#include "DefinitionState.hpp"


Interpreter::Interpreter() {
    // set initial state
    this->current_state = new DefinitionState;
}

Interpreter::~Interpreter() {
    
}


int Interpreter::run() {
    // display initial dialog
    std::cout << "----------------------------------" << std::endl;
    std::cout << "This is a mathematical function interpreter." << std::endl;
    std::cout << std::endl;
    std::cout << "About:" << std::endl;
    std::cout << "  Input a mathematical function and evaluate it at various points." << std::endl;
    std::cout << std::endl;
    std::cout << "Details:" << std::endl;
    std::cout << "  Define a function f mapping a real number x to a real number f(x). If f is well-defined, it can be evaluated at various points x." << std::endl;
    std::cout << std::endl;
    std::cout << "Commands:" << std::endl;
    std::cout << "  Commands can be inputted whenever inputs are permitted. The following commands are available:" << std::endl;
    std::cout << "  :d - define a new function" << std::endl;
    std::cout << "  :q - terminate this application" << std::endl;
    std::cout << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    // run the state machine
    while (this->current_state) {
        // run the current state and transition to the new state
        this->set_state(this->current_state->run());
    }
    
    // display final dialog
    std::cout << "Terminating the application" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    
    return 0;
}

void Interpreter::set_state(InterpreterState* new_state) {
    delete this->current_state;
    this->current_state = new_state;
}
