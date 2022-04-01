#include "main.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
	  int count;
	  
	  if (argc >= 0)
	  {
		  for (count = 0; count < argc; count++)
		  {
			  printf("%s\n", argv[count]);
		  }
	  }
	  else
	  {
		  printf("The command had no other arguments.\n");
	  }
	  return 0;
}
