#!/usr/bin/env bash

cmake -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" -S . -B ./debug
make --directory debug/
