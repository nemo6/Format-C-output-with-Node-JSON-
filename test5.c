#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "test", buffer[30], buffer2[300];
    buffer[0]='\0';
    buffer2[0]='\0';
    int i;

    strcat(buffer2, "[\n");
 
    for (i = 0; i < 10; ++i)
    {
    	if( i == 9){

		sprintf(buffer, "{\"test\":\"%s\",\"test2\":%d}\n", str1, i);
		strcat(buffer2, buffer);

    	}else{

        sprintf(buffer,"{\"test\":\"%s\",\"test2\":%d},\n", str1, i);
        strcat(buffer2, buffer);

        }
    }

    strcat(buffer2, "]");
 
    printf("%s",buffer2);
    
}