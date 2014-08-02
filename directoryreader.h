#ifndef DIRECTORYREADER_H
#define DIRECTORYREADER_H

#include "ICamera.h"


class DirectoryReader : public ICamera
{
public:
    DirectoryReader(std::string directoryPath="pointclouds/");
    virtual PointCloudT::Ptr getCloud();

private:
    std::string directoryPath;
    std::vector<std::string> files;
    std::vector<PointCloudT::Ptr> clouds;
    int count;

    void loadFiles();
};

#endif // DIRECTORYREADER_H
