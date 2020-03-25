#!/usr/bin/env bash

pip install --upgrade pip
pip install cpplint

folders=("include" "includes" "src" "source" "sources" "test" "tests")
for folder in "${folders[@]}"
do
    echo ${folder}
    if [[ -d ${folder} ]]; then
        command="cpplint --verbose=0 --recursive ${folder}/*"
        echo ${command}
        if ${command} | grep "error"; then
            echo "::error ::Review your code"
#exit 1            
        fi
    fi
done
