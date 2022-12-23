//
//  EvaluationState.hpp
//  mathematical-function-interpreter
//

#ifndef EvaluationState_hpp
#define EvaluationState_hpp

#include "InterpreterState.hpp"

class EvaluationState : public InterpreterState {
    
public:
    // constructor
    EvaluationState();
    
    // destructor
    ~EvaluationState();
    
    // override run method
    InterpreterState* run();
};

#endif /* EvaluationState_hpp */
