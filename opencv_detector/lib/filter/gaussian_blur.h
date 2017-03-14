#pragma once

#include "filter.h"

namespace TooManyPeeps {

  class GaussianBlur : public Filter {
    private:
      int kernelSize;
      int blurFactor;

    public:
      GaussianBlur(const cv::Mat& original, cv::Mat& result, double blurFactor, int kernelSize=5);

    public:
      virtual void execute(void);
  };

};
