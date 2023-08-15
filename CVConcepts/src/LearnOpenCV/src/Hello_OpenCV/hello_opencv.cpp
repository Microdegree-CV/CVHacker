#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img = cv::imread("../Data/lena.jpg", cv::IMREAD_GRAYSCALE);
    if (img.empty())
    {
        std::cout << "Could not find file" << std::endl;
    }

    cv::namedWindow("Lena", cv::WINDOW_AUTOSIZE);
    cv::imshow("lena", img);

    cv::waitKey(0);
    cv::destroyWindow("Lena");

    return 0;
}
