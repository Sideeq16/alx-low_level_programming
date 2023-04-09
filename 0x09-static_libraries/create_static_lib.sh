#!/bin/bash
find . -name '*.c' | sort | xargc gcc -c; && find . -name '*.o' | sort | xargs ar rc liball.a;
