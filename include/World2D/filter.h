#ifndef WORLD_2D_FILTER_H
#define WORLD_2D_FILTER_H

#include <opencv2/core/core.hpp>


namespace Doraemon  {
namespace VisualBox {
namespace world_2d  {


class Filter {

public:
    virtual cv::Mat filter(const cv::Mat &img) = 0;
};







} // namespace world_2d 
} // namespace VisualBox
} // namespace Doraemon


#endif // !WORLD_2D_FILTER_H
