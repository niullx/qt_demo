#ifndef INCLUDE_H
#define INCLUDE_H
#include <sys/statfs.h>
#include <sys/vfs.h>

// system info struct
struct CpuInfo_data
{
    long long total;
    long long usr;
    long long nic;
    long long sys;
    long long idle;
    long long iowait;
    long long irq;
    long long softirq;
    long long steal;
    double rate;
    double temp;
};

struct MemInfo_data
{
    long unsigned int total;
    long unsigned int free;
    long unsigned int used;
    double rate;
};

struct DiskInfo_data
{
    long long total;
    long long free;
    long long used;
    double rate;
};

#endif // INCLUDE_H
