#include "opencv2/core/matx.hpp"
#include "opencv2/core/types.hpp"
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[]) {
  // NOTE: The basic data types are those that are assembled directly from C++
  // primitives. These types include simple vectors and matrices, as well as
  // representations of simple geometric concepts like points, rectangles,
  // sizes, and the like.

  cv::Vec2b v2b;    // cv::Vec{2,3,4,6}{b,w,s,i,f,d}
  cv::Matx33f m33f; // cv::Matx{1,2,3,4,6}{1,2,3,4,6}{f,d}
#if 0

#endif
  cv::Point2i p2(0, 1);    // cv::Point
  cv::Point3i p3(1, 2, 3); // cv::Point
  //
  cv::Scalar s; // cv::Scalar

  // NOTE: Can not cast size class to the fixed vector classes, while the point
  // class and the fixed classes can be cast to the size classes
  cv::Size sz; // cv::Size

  //
  cv::Rect r; // cv::Rect
#if 0
  r.x;
  r.y;
  r.width;
  r.height;
  r.area();
  r.tl();
  r.br();
  r.contains(p);
#endif

  cv::RotatedRect rr; // cv::RotatedRect
#if 0
  rr.center;
  rr.size;
  rr.angle;
#endif

  cv::Complexf z1; // cv::Complexf

  // NOTE: These objects represent more abstract concepts such as the
  // garbage-collecting pointer class, range objects used for slicing, and
  // abstractions such as termination criteria.

  cv::TermCriteria tc;
  cv::Range rng;
  cv::Ptr<cv::Matx33f> ptr(new cv::Matx33f);
  cv::Ptr<cv::Matx33f> ptr2 = cv::makePtr<cv::Matx33f>();
  cv::Exception e;
  cv::DataType<int> i;
  // cv::InputOutputArray ioarr;

  // NOTE: Large array types, such as cv::Mat

  return 0;
}
