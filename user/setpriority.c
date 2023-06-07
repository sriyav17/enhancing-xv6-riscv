#include "kernel/types.h"
#include "user/user.h"

int main(int argc,char *argv[])
{
    int priority = atoi(argv[1]);
    int pid = atoi(argv[2]);

    set_priority(priority,pid);

    exit(0);
}