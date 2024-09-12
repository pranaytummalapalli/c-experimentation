#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

static int increment_size = 1;
static int block_size = sizeof(int); //init block size the user wants to allocate. Taken int for now, convert later to user input 

void *m_alloc(size_t size); //prototype of custom malloc fn

int main(int argc, char* argv[]){
    int *a = malloc(sizeof(int));
    int *newMemory = m_alloc(block_size);

    printf("Malloc assigned: %p\nCustom assigned: %p", a, newMemory);
    
}

void *m_alloc(size_t size){
    void* prevBrk = sbrk(size);
    void* newBrk = sbrk(size);
    void* newMem = prevBrk;

}