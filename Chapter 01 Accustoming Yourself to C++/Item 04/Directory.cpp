#include "Directory.h"
#include "FileSystem.h"
Directory::Directory() {
    std::cout << "Constructed a directory, the disk is: ";
    //std::cout << tfs.numDisks() << std::endl;
    std::size_t disks = tfs().numDisks();
}

Directory& tempDir() {
    static Directory td;
    return td;
}