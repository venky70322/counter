// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024UNIT_H_
#define VERILATED_VCOUNTER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vcounter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcounter___024unit();
    ~Vcounter___024unit();
    void ctor(Vcounter__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcounter___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
