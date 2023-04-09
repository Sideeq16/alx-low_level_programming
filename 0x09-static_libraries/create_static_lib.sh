#!/bin/bash
find . -name '*.c' gcc -c {} \; && find . -name '*.o' -exec ar rc liball.a {}\;
