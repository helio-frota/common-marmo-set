#!/bin/bash

# 1) find all files with extension .cc, .c and .h.
# 2) excludes the generated build directory created by cmake.
# 3) execute clang format.
find . -regex '.*\.\(cc\|c\|h\)' -not -path "*/build/*" -exec clang-format -style=file -i {} \;