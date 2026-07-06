#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <windows.h>


void printLines(wchar_t *lines[], int lines_len, int delay_time)
{
    int line_len = 6, i = 0;
    setlocale(LC_ALL, "Chinese_China.936");

    for (int line = 0; line < lines_len; line++)
    {
        wchar_t *currentline = lines[line];

        wchar_t s[256] = L"";
        int len = wcslen(currentline);
        int display_len = 0;
        for (i = 0; i < len; i++)
        {
            s[display_len] = currentline[i];
            display_len++;
            s[display_len] = L'\0';

            wprintf(L"\r%ls", s);
            Sleep(delay_time);
        }
     
    }
}