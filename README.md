#0x00
Binary Exploitation resources

*0x04*
- https://sockpuppet.org/issue-79-file-0xb-foxport-hht-hacking.txt.html
- https://microcorruption.com/login
- https://en.wikipedia.org/wiki/Von_Neumann_architecture

*0x07*

strace - trace system calls

ltrace - traces library functions

strings - print all the strings in thr program

objdump - give object dump of the binary

hexdump - hexdump

### Radare2

```
r2 license1

aaa - auto analyze and autoname

afl - print all functions found by r2

a - analysis of code

a? - list options with a

s sys.main - seek the main function

pdf - print disassembly of current function

VV - visual graph of the function

tab & shift + tab - To move around the boxes

shift + hjkl - move the boxes

p - to cycle through different representations

?  - display help

db 0x00001064 - set breakpoint at address

:dc - run the program

Shitft + s - to step through the function
```
