#include <atmel_start.h>
#include "serial_print.h"
#include "serial_read.h"
#include <string.h>
#include <stdlib.h>

#define INPUT_BUF_SIZE 20

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace the code below with your application code */

	/* Set pin PB30 to output */
	// REG_PORT_DIR1 |= (1<<30);

	/* Make it blink! */
	// s_read_init();

	uint8_t *command = malloc(INPUT_BUF_SIZE);

	printf("This is a message\r\n");

	printf("This is a message with a number: %d\r\n", 105);

	while (1) {
		scanf("%s", command);

		printf("This is your command: %s\r\n", command);
		memset(command,0, INPUT_BUF_SIZE);
	}
}
