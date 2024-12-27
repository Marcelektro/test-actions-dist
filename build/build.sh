#!/bin/bash

# a sample build script for a project

set -e # exit on error

PROJECT_ROOT=$(dirname "$0")/../ # get the project root

echo "Project root at $PROJECT_ROOT"

cd "$PROJECT_ROOT" # build from to the project root


mkdir -p dist # create the dist directory if it doesn't exist

gcc -o dist/main src/main.c # build the project using gcc

echo "Build complete"
