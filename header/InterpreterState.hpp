//
//  InterpreterState.hpp
//  mathematical-function-interpreter
//

#ifndef InterpreterState_hpp
#define InterpreterState_hpp

class InterpreterState {
    
public:
    // virtual destructor
    virtual ~InterpreterState() { };
    
    // pure virtual run method
    virtual InterpreterState* run() = 0;
    
};

#endif /* InterpreterState_hpp */
