cd beagle
make clean 2>&1 | sed -e "s/\([^:]*\):\([0-9][0-9]*\)\(.*\)/\1 (\2) \3/" | sed -e "s/\.\././g"
make 2>&1 | sed -e "s/\([^:]*\):\([0-9][0-9]*\)\(.*\)/\1 (\2) \3/" | sed -e "s/\.\././g"
