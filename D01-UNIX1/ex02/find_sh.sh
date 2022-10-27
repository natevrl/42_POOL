#!/bin/sh
ls -R | sed -n 's/\.sh$//p'
