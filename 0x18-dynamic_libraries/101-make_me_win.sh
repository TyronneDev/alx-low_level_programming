#!/bin/bash
wget -P /tmp https://github.com/TyronneDev/alx-low_level_programming/tree/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD="$PWD/../win.so"
