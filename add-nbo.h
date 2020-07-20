#include <stdio.h>
#include <stdint.h> // for uint32_t
#include <netinet/in.h> // for ntohl

uint32_t add_nbo(char *argv) {
    FILE *fp;
    uint32_t buf;
    size_t result;

    fp = fopen(argv, "r");

    /*file open Error*/
    if(fp == NULL) {
        printf("E: file open failed\n");
        return -1;
    }

    result = fread(&buf, sizeof(buf), 1, fp);

    /*file read Error*/
    if(result != 1){
        printf("E: file read error\n");
    }

    buf = ntohl(buf);

    fclose(fp);
    return buf;
}
