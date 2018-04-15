#ifndef VIDEOPROCESSOR_H
#define VIDEOPROCESSOR_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/video/video.hpp>
#include <opencv2/ml/ml.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include "tool.h"
using namespace std;
using namespace cv;
class VideoProcessor
{

public:
    typedef struct process_result{
        int width;
        int height;
        bool exist;
        int count;
        int front_count;
        int back_count;
        int other_count;
        int duration;
        vector <Rect> rects;
    }m_result;

    VideoProcessor()
    {

    }
    virtual  bool real_process( Mat &, m_result &)
    {
        return false;
    }

    virtual void init()
    {

    }
protected:
};


#endif // VIDEOPROCESSOR_H
