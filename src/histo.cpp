
#include "utils.hpp"

cv::Mat tp3::histo(const cv::Mat& oImage, size_t N) {
    CV_Assert(!oImage.empty() && oImage.type()==CV_8UC3 && oImage.isContinuous());
    CV_Assert(N>1 && N<=256);
    cv::Mat oHist(3,(int)N,CV_32FC1,cv::Scalar_<float>(0.0f));

    // @@@@ TODO

    return oHist;
}