#include <stdio.h>
#include <windows.h>

DWORD pid;

int main()
{
    char title[256]; 

   while (1)
   {
     printf("(Get Processid By Title)\nEnter title: ");
    scanf("%255s", title); 

    HWND hwnd = FindWindowA(NULL, title);
    if (hwnd != NULL) {
        if (GetWindowThreadProcessId(hwnd, &pid) != 0) {
            printf("ProcessId: %lu\n", pid); 
        } else {
            printf("Failed to get ProcessId\n");
        }
    } else {
        printf("Window not found!\n"); 
    }
   }
   
    
    return 0;
}
