#!/bin/bash

for i in *.c ;do sed s/_ext/_out/g $i > buff;mv buff $i;done
