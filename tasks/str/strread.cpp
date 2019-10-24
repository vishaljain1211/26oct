#include<iostream>
char* GetString()
{
	char c;
	char *ptr;
	size_t size=10;
	ptr = (char*)malloc(size);
	int i = 0;
	while (1)
	{
		c = getc(stdin);
		//
		ptr[i++] = c;
		if (i==size) {

			ptr = (char *)realloc(ptr, size+=10);
		}
		//
		if (c == '\n' || c==EOF)
		{
			ptr[i] = '\0';
			break;
		}
		//
	}
	return ptr;
}

int main(){
	GetString();
	return 0;
}


