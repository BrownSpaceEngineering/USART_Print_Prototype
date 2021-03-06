#include <atmel_start.h>
#include "serial_print.h"
#include "serial_read.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace the code below with your application code */

	/* Set pin PB30 to output */
	// REG_PORT_DIR1 |= (1<<30);

	/* Make it blink! */
	s_read_init();

	while (1) {
		
	}
}
