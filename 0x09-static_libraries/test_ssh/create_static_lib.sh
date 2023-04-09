#!/bin/bash

find . -name '*.c' | sort | xargs gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 && find . -name '*.o' | sort | xargs ar rc libmy.a;
