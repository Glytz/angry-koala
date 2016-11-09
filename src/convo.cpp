
#include "utils.hpp"

cv::Mat tp3::convo(const cv::Mat& oImage, const cv::Mat_<float>& oKernel) {
    CV_Assert(!oImage.empty() && oImage.type()==CV_8UC3 && oImage.isContinuous());
    CV_Assert(!oKernel.empty() && oKernel.cols==oKernel.rows && oKernel.isContinuous());
    CV_Assert(oImage.cols>oKernel.cols && oImage.rows>oKernel.rows);
    cv::Mat oResult(oImage.size(),CV_32FC3);

    // @@@@ TODO

    return oResult;
}