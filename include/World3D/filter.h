#ifndef WORLD_3D_FILTER_H
#define WORLD_3D_FILTER_H

#include <pcl/point_types.h>


namespace Doraemon  {
namespace VisualBox {
namespace world_3d  {

using PointT = pcl::PointXYZ;
using PointCloudT = pcl::PointCloud<PointT>;


class Filter {

public:
    virtual PointCloudT::Ptr filter(const PointCloudT::ConstPtr &cloud) = 0;
};





} // namespace world_3d 
} // namespace VisualBox
} // namespace Doraemon


#endif // !WORLD_3D_FILTER_H
