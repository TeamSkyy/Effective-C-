#include "FileSystem.h"

FileSystem::FileSystem() : _disks(10) {
    std::cout << "Constructed a file system, the disk is: ";
    std::cout << numDisks() << std::endl;
}

std::size_t FileSystem::numDisks() const {
    return _disks; 
}

//FileSystem tfs;
FileSystem& tfs() {
    static FileSystem fs;
    return fs;
}
