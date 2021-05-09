# LD_PRELOAD
use LD_PRELOAD to exploit c functions

use exemple:

1> compile the file

gcc -o strcmp.so -fPIC -shared strcmp.c

2> execute the file with your function

LD_PRELOAD=$PWD/strcmp.so ./file-to-exploit


