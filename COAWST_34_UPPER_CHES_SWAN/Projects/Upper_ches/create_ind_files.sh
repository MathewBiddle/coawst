#!/bin/bash
# This script creates the indirect files using the dates in 
# times.txt and the swan_upper_ches_template.ind file (replacing 
# template with the date in the time file
#
# To run, uncomment the line below and execute from the command line.

# cat times.txt | while read i; do sed "s/template/$i/g" swan_upper_ches_template.ind > swan_upper_ches_$i.ind; done 
