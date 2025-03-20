#!/bin/bash
set -e


gcc -o main main.c -I/opt/raylib/src -L/opt/raylib/src -lraylib -lGL -lm -lpthread -ldl

./main
