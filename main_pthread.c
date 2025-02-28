#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * thread_function()
{
    printf("Hello from thread function!\n");

    return NULL;
}

int main()
{
    pthread_t p1; 
    int ret;

    ret = pthread_create(&p1, NULL, thread_function, NULL);

    if(ret != 0)
    {
        printf("Error occured while trying to create pthread\n");
        exit(1);
    }

    printf("Bye from main\n");

    return 0;
}
