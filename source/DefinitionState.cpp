//
//  DefinitionState.cpp
//  mathematical-function-interpreter
//

#include <iostream>

#include "DefinitionState.hpp"
#include "EvaluationState.hpp"


DefinitionState::DefinitionState() {
    
}


DefinitionState::~DefinitionState() {
    
}


InterpreterState* DefinitionState::run() {
    
    // start dialog
    std::cout << "Define a mathematical function f(x)=" << std::endl;
    
    // get definition of mathematical function
    std::string definition;
    std::cin >> definition;
    
    if (definition == ":q") {
        return nullptr;
    }
    else {
        return new EvaluationState;
    }
}
