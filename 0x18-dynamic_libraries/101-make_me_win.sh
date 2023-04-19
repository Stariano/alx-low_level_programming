#!/bin/bash
wget -O /tmp/crack.so https://github.com/Stariano/alx-low_level_programming/raw/main/0x18-dynamic_libraries/crack.so
export LD_PRELOAD=/tmp/crack.so
