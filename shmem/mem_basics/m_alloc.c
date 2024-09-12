#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

static int increment_size = 1;
static int block_size = sizeof(int); //init block size the user wants to allocate. Taken int for now, convert later to user input 

void *m_alloc(size_t size); //prototype of custom malloc fn
void *m_free(void* mem);

int main(int argc, char* argv[]){
    int *a = malloc(sizeof(int));
    int *newMemory = m_alloc(block_size);
    m_free(newMemory);
    a = newMemory;

    printf("Malloc assigned: %p\nCustom assigned: %p", a, newMemory);
    
}

void *m_alloc(size_t size){
    void* prevBrk = sbrk(size);
    void* newBrk = sbrk(size);
    void* newMem = prevBrk;

}

void *m_free(void* mem){
    void* setbackMem = mem - block_size;
    if(brk(setbackMem) < 0){
        perror("Could not reset heap-end");
    };
}