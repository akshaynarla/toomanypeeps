#pragma once

#include "types/process_filter.h"
#include "../tracking/contour_finder.h"

namespace TooManyPeeps {

  class FindContours : public ProcessFilter {

    private:
      ContourFinder contourFinder;

    public:
      FindContours(const cv::Mat& original, cv::Mat& result, double minimumArea, double maximumArea);

    public:
      virtual void execute(void);
  };

};
