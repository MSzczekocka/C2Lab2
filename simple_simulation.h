#pragma once
#include "simulation.h"

class SimpleSimulation: public Simulation
{
protected:
    virtual void Next(){

    };

    virtual void Init(){
        safari.Add(new Animal);
    };

};
