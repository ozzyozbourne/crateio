/* Unix test*/

#include <sys/socket.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    struct ifaddrs *addresses;
    if(getifaddrs(&addresses) == -1){
        printf("getifaddrs call failed\n");
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
