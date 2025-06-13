# Quad-Edge Data Structure and Library

This is a minimally freshened-up version of Paul Heckbert's quad-edge data
structure from
https://www.cs.cmu.edu/afs/andrew/scs/cs/15-463/2001/pub/src/a2/quadedge.html.

## Build

    mkdir build
    cd build
    cmake ../
    make

## Usage

    ./test

There are no dependencies besides the standard tempalte library. I didn't know
what the `svl/Vec3.h` header was, so I included a plausible replacement that
just wraps `std::array<double,3>`.
