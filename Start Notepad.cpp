#include<Windows.h>

int main()
{
	
	ShellExecuteA(0,"open","cmd","/c start notepad",0,0);
}