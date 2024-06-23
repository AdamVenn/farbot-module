/*******************************************************************************
 BEGIN_JUCE_MODULE_DECLARATION

    ID:                 farbot_module
    name:               farbot
    description:        FAbian's Realtime Box o' Tricks as a JUCE module. All credit to Fabian at https://github.com/hogliux/farbot
    website:            https://github.com/AdamVenn/farbot_module
    license:            MIT

 END_JUCE_MODULE_DECLARATION
*******************************************************************************/



/*
"Ideally, a module could be header-only module, so that a project can use it by simply
including the master header file."
    - JUCE Module Format.md

This module is such a header-only module.
*/

#pragma once

#include "include/farbot/fifo.hpp"
#include "include/farbot/AsyncCaller.hpp"
#include "include/farbot/RealtimeObject.hpp"
#include "include/farbot/RealtimeTraits.hpp"
