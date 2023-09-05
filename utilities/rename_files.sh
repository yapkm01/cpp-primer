#!/bin/bash

# rename files with "*-*" to "*_*"
for f in *.*;
do
	ls $f | sed -r 's/[-]/_/g' | xargs -i mv $f {}
done;

# rename files with "*.txt" to "*.md"
for f in *txt;
do
	ls $f | sed -r 's/txt/md/g' | xargs -i mv $f {}
done;
