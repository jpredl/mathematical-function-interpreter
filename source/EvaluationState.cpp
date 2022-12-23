//
//  EvaluationState.cpp
//  mathematical-function-interpreter
//

#include <iostream>

#include "DefinitionState.hpp"
#include "EvaluationState.hpp"


EvaluationState::EvaluationState() {
    
}


EvaluationState::~EvaluationState() {
    
}


InterpreterState* EvaluationState::run() {
    
    // local variable for input
    std::string input;
        
    
    while (true) {
        
        // start dialog
        std::cout << "Evaluate f at x=" << std::endl;
        
        // get point for evaluation
        std::cin >> input;
        
        if (input == ":d") {
            return new DefinitionState;
        }
        else if (input == ":q") {
            return nullptr;
        }
    }
}
