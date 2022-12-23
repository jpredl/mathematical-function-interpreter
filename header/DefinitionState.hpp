//
//  DefinitionState.hpp
//  mathematical-function-interpreter
//

#ifndef DefinitionState_hpp
#define DefinitionState_hpp

#include "InterpreterState.hpp"

class DefinitionState : public InterpreterState {
    
public:
    // constructor
    DefinitionState();
    
    // destructor
    ~DefinitionState();
    
    // override run method
    InterpreterState* run();
};

#endif /* DefinitionState_hpp */
