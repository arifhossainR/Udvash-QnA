# C Program Template

Files:

- `c_template.c` — minimal, portable C program template.

Compile and run

GCC / MinGW (Windows WSL or native MinGW):

```bash
gcc -O2 -std=c11 -Wall -Wextra -o c_template c_template.c
./c_template
```

MSVC (Developer Command Prompt):

```powershell
cl /O2 /W4 c_template.c
c_template.exe
```

Notes

- The template includes small utility macros and a simple integer reader.
- Adjust optimization flags and standard version as needed.
