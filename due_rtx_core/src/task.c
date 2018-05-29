/*************************************************************************************************
 * task.c -- Module routines
 *
 * Author: Ebin Baby
 *
 * Copyright: 2013 - Ebin Baby
 *
 * Warning: Nil
 *
 * Algorithm: Task Configurations
 *
 *************************************************************************************************/

#include "task.h"

/* -------------------         Local Declarations/Definitions Section        ------------------- */
osThreadId threadID_10x, threadID_20x, threadID_50x, threadID_100x, threadID_200x, threadID_500x, threadID_1000x;
uint32_t	thread_init_count, thread_10x_count, thread_20x_count, thread_50x_count, thread_100x_count, 
            thread_200x_count, thread_500x_count, thread_1000x_count, thread_bg_count;

uint8_t prekernelinit_run = 0;
uint8_t postkernelinit_run = 0;
uint8_t threadinit_fail = 0;

/* Thread Definition (thread_fn, priority, num of parallel threads, stack size */
osThreadDef(thread_10x,     osPriorityNormal, 1, THREAD_STACK_SIZE_BASIC);
osThreadDef(thread_20x,     osPriorityNormal, 1, THREAD_STACK_SIZE_BASIC);
osThreadDef(thread_50x,     osPriorityNormal, 1, THREAD_STACK_SIZE_BASIC);
osThreadDef(thread_100x,    osPriorityNormal, 1, THREAD_STACK_SIZE_BASIC);
osThreadDef(thread_200x,    osPriorityNormal, 1, THREAD_STACK_SIZE_BASIC);
osThreadDef(thread_500x,    osPriorityNormal, 1, THREAD_STACK_SIZE_BASIC);
osThreadDef(thread_1000x,   osPriorityNormal, 1, THREAD_STACK_SIZE_BASIC);


void preKernelInit(void)
{

#ifdef DEBUG
#endif  // DEBUG

    /* No code as of now */
    prekernelinit_run = 1;
    
    return;
    
}

void thread_init(void)
{
    
    #ifdef DEBUG
	    //	Debug define here
    #endif

    #ifdef RELEASE
	    //	Release define here
    #endif

    threadID_10x      = osThreadCreate (osThread(thread_10x),       NULL);    
    threadID_20x      = osThreadCreate (osThread(thread_20x),       NULL);    
    threadID_50x      = osThreadCreate (osThread(thread_50x),       NULL);    
    threadID_100x     = osThreadCreate (osThread(thread_100x),      NULL);    
    threadID_200x     = osThreadCreate (osThread(thread_200x),      NULL);
    threadID_500x     = osThreadCreate (osThread(thread_500x),      NULL);
    threadID_1000x    = osThreadCreate (osThread(thread_1000x),     NULL);

    threadinit_fail     = ( (NULL == threadID_10x)  ||
                            (NULL == threadID_20x)  ||
                            (NULL == threadID_50x)  ||
                            (NULL == threadID_100x) ||
                            (NULL == threadID_200x) ||
                            (NULL == threadID_500x) || 
                            (NULL == threadID_1000x) ); 

    /* Stay here for thread fail */
    while(threadinit_fail);

    thread_init_count++;
    return;
}

void postKernelInit(void)
{

#ifdef DEBUG
#endif  // DEBUG
    
    /* No code as of now */
    postkernelinit_run = 1;
    
    return;
    
}

void thread_10x(void const *argument)
{
    uint16_t dT = 10;  // 10 x
    
     /* Initialization of 10x Procs */

    for(;;)
    {
        osDelay(dT);
        
        /* 10x Procs called here */


        thread_10x_count++;
        
    }
}

void thread_20x(void const *argument)
{
    uint16_t dT = 20;  // 20 x
    
     /* Initialization of 20x Procs */
    
    for(;;)
    {
        osDelay(dT);
        
        /* 20x Procs called here */


        thread_20x_count++;
        
    }
}


void thread_50x(void const *argument)
{
    uint16_t dT = 50;  // 50 x
    
     /* Initialization of 50x Procs */
    
    for(;;)
    {
        osDelay(dT);
        
        /* 50x Procs called here */


        thread_50x_count++;
        
    }
}


void thread_100x(void const *argument)
{
    uint16_t dT = 100;  // 100 x
    
    /* Initialization of 100x Procs */
    
    for(;;)
    {
        osDelay(dT);
        
        /* 100x Procs called here */


        thread_100x_count++;
        
    }
}

void thread_200x(void const *argument)
{
    uint16_t dT = 200;  // 200 x

    /* 200x Procs Initialized here */

    
    for(;;)
    {
        osDelay(dT);

        /* 200x Procs called here */


        thread_200x_count++;
        
    }
}

void thread_500x(void const *argument)
{
    uint16_t dT = 500;  // 500 x

    /* 500x Procs Initialized here */

    
    for(;;)
    {
        osDelay(dT);

        /* 500x Procs called here */


        thread_500x_count++;
        
    }
}

void thread_1000x(void const *argument)
{
    uint16_t dT = 1000;  // 1000 x

    /* 1000 x Procs Initialized here */

    
    for(;;)
    {
        osDelay(dT);

        /* 1000 x Procs called here */


        thread_1000x_count++;
        

    }
}

/*--------------------------- os_idle_demon ---------------------------------*/

void thread_bg (void)
{
	/* The idle demon is a system thread, running when no other thread is ready to run. 
	   This function is called from idle demon */

    thread_bg_count++;
        
	return;
}
