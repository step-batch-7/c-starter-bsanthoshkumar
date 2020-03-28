#!/bin/bash

file=$1;
gcc -o executable $file && ./executable
rm -rf executable