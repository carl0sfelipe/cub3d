#!/bin/bash

# Traverse the directory and subdirectories for .c files
find . -type f -name "*.c" -print0 | while IFS= read -r -d '' file; do
    # Remove the first 12 lines from each .c file found
    tail -n +13 "$file" > "$file.tmp" && mv "$file.tmp" "$file"
done

