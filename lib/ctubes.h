#ifndef CTUBES_H
#define CTUBES_H
struct process {
    int fd;
    char* (*recvline)();
    char* (*recvuntil)(char* seq)();
    ssize_t (*send)(char* data)();
    ssize_t (*sendline)(char* data)();
}
#endif
