#!/bin/bash

find . -name '*.c' | sort | xargs gcc -c && find . -name '*.o' | sort | xargs ar rc libmy.a;
