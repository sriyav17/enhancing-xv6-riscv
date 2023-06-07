#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[])
{
    if(argc < 3)
        fprintf(2, "Invalid number of arguments\n");

    if(atoi(argv[1]) == -1)
        fprintf(2, "Trace mask NaN");

    trace(atoi(argv[1]));
    exec(argv[2], argv+2);
    return 0;
}