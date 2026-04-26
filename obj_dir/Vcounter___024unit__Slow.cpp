// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "Vcounter__pch.h"

void Vcounter___024unit___ctor_var_reset(Vcounter___024unit* vlSelf);

Vcounter___024unit::Vcounter___024unit() = default;
Vcounter___024unit::~Vcounter___024unit() = default;

void Vcounter___024unit::ctor(Vcounter__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcounter___024unit___ctor_var_reset(this);
}

void Vcounter___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcounter___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
