#!/bin/bash

mkdir -p ./bin

pushd ./bin > /dev/null

clang -g -std=c99 -I ../include ../test/libsubleq/main.c -o libsubleq_test

./libsubleq_test

popd > /dev/null
