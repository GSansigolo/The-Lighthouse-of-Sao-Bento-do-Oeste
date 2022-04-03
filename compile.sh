#!/bin/bash
export NCPU=`nproc`
python3 model_text_formatter.py
make clean && make -j${NCPU} all
exit 0

