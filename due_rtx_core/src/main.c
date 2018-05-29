/*************************************************************************************************
 * Purpose:
 * This program is used to configure / use RTX
 *
 * Copyright: 2012 - Ebin Baby
 *
 * Version  : 1.0
 * Author   : Ebin Baby
 * Date     : 24/06/2017
 *
 * Warning: Nil
 *
 * Restrictions: Tested Arduno Due with RTX
 *
 * Algorithms:
 *
 * References: RL-ARM User's Guide
 *
 *************************************************************************************************/

/* ---------------------------       Standard Library Section        --------------------------- */
#include "cmsis_os.h"

/* --------------------------------       Project Section        ------------------------------- */
#include "task.h"

/* ---------------------------            Debug/Release              --------------------------- */
#ifdef DEBUG
#endif	// DEBUG

#ifdef RELEASE
#endif  // RELEASE
/* ---------------------------         Local Includes Section        --------------------------- */

/* -------------------         Local Declarations/Definitions Section        ------------------- */


void thread_x( void const *arg)
{
	static int i = 0;

  for(;;)
  {
		osDelay(10);
    i++;  
	}

}

osThreadDef(thread_x, osPriorityLow, 1, 0);

int main (void)
{
	#ifdef DEBUG
		//	Debug code here
	#endif

	#ifdef RELEASE
		//	Release code here
	#endif

	preKernelInit();

	osKernelInitialize();
	
	/* tasks/threads initialized here */
  //    osThreadCreate (osThread(thread_x),       NULL);    
	thread_init();

	postKernelInit();

	/* Start OS */
	osKernelStart();
	
}
