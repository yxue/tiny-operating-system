#include "mem.h"

void memory_copy(char *dst, char *src, int n){
    int i;
    for(i = 0; i < n; i ++){
        *(dst+i) = *(src+i);
    }
}
