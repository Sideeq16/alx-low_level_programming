#!/bin/bash

find . -name '*.c' -exec gcc -c {} \; && find . -name '*.o' -exec ar rcs liball.a {} \;
