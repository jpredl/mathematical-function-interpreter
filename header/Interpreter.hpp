//
//  Interpreter.hpp
//  mathematical-function-interpreter
//

#ifndef Interpreter_hpp
#define Interpreter_hpp

#include "InterpreterState.hpp"

class Interpreter {
    
public:
    // constructor
    Interpreter();
    
    // destructor
    ~Interpreter();
    
    // run method
    int run();
    
private:
    // current state
    InterpreterState* current_state;
    
    // set current state
    void set_state(InterpreterState* new_state);
    
};

#endif /* Interpreter_hpp */
