#include "main.h"

/**
 * rev_string - print a string reversed followed by new line
 * @s: The pointer to string
 *
 * Return: On success 1.
 */

void rev(char *s)
{
	    int i, max, half;
	        char first, last;
		    
		    i=0;
		        while (s[i] != '\0')
				    {
					            i++;
						        }
			    printf("%d\n", i);
			        max = i - 1;
				    printf("%d\n", max);
				        half = max / 2;
					    printf("%d\n", half);
					        while (half >=0)
							    {
								            first = s[max - half];
									           // printf("%c", first);
										   //         printf("%c, %d\n", first, (max-half));
										   //                 last = s[half];
										   //                        // printf("%c", last);
										   //                                printf("%c, %d\n", last, half);
										   //                                        s[half] = first;
										   //                                               // printf("%c", s[half]);
										   //                                                       printf("%c, %d\n", s[half], half);
										   //                                                               s[max - half] = last;
										   //                                                                      // printf("%c", s[max - half]);
										   //                                                                              printf("%c, %d", s[max - half], (max-half));
										   //                                                                                      half--;
										   //                                                                                              printf("\n");
										   //                                                                                                  }
										   //                                                                                                  }
