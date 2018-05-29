/*************************************************************************************************
 * task.h -- Module includes
 *
 * Author: Ebin Baby
 *
 * Copyright: 2017 - Ebin Baby
 *
 *************************************************************************************************/

#ifndef TASK_H_INCLUDED
#define TASK_H_INCLUDED

/* ---------------------------       Standard Library Section        --------------------------- */
#include "cmsis_os.h"

/* --------------------------------       Project Section        ------------------------------- */


/*************************************************************************************************
 * Include headers of individual tasks added here
 *************************************************************************************************/

/* -------------------         Local Declarations/Definitions Section        ------------------- */
#define THREAD_STACK_SIZE_BASIC		0


void preKernelInit(void);
void postKernelInit(void);

void thread_init(void);			/* Not a thread */
void thread_bg(void);				/* Not a thread */	

void thread_10x(void const 		*argument);
void thread_20x(void const 		*argument);
void thread_50x(void const 		*argument);
void thread_100x(void const 	*argument);
void thread_200x(void const 	*argument);
void thread_500x(void const 	*argument);
void thread_1000x(void const 	*argument);



#ifdef DEBUG
	//	Debug define here
#endif

#ifdef RELEASE
	//	Release define here
#endif

#endif // TASK_H_INCLUDED
