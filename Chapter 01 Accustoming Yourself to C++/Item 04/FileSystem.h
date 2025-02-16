#pragma once
#include <iostream>

class FileSystem {
private:
    std::size_t _disks;
public:
    FileSystem();
    std::size_t numDisks() const; 
};

//extern FileSystem tfs;
FileSystem& tfs();