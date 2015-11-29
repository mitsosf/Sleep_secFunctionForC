# Sleep_secFunctionForC
Function that makes the program pause for given amount of seconds.
This works around problems caused by system differences as it uses the time(NULL) C function to measure time in seconds.

I implemented this on my first year as a university student because I noticed that if I used the built-in C sleep() function sometimes
it would count in milliseconds and sometimes in seconds, depending on the operating system. My function counts only in seconds so it can
be confidently used across many platforms.
