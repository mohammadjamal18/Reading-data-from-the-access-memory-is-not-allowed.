Reading data from the access memory is not allowed.
Prevent out-of-bounds read to avoid undefined behavior that may lead to information disclosure.
## Description
This project demonstrates an out-of-bounds memory read in C++ and how
proper bounds checking can prevent undefined behavior that may lead
to information disclosure.

## Security Impact
Out-of-bounds reads may expose sensitive data stored in adjacent memory
and are a common source of memory safety vulnerabilities in C/C++.

## Mitigation
Validate user input and enforce strict bounds checking before accessing
memory buffers.

![Ruler Output Display](https://github.com/mohammadjamal18/Reading-data-from-the-access-memory-is-not-allowed./blob/main/Screenshot%20(1464).png)
