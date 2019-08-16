# Doraemon VisualBox 

## Motivation
In the past month, I completed an Udacity Nanodegree for Sensor Fusion. In the LiDAR point cloud processing, filtering, segmentation, and clustering algorithms are implemented and evaluated; then in the Camera part, many combinations of detector/descriptor are tested to find the best combination in terms of matching accuracy and speed. In both parts, I need to change the parameters like below then recompile the project to see the differences. Like this:

```
cv::Mat descriptors;
string descriptorType = "BRIEF"; // BRIEF, ORB, FREAK, AKAZE, SIFT, BRISK

descKeypoints(dataBuffer.Back(result).keypoints, dataBuffer.Back(result).cameraImg, descriptors, descriptorType);
```
and this

```
vector<cv::KeyPoint> keypoints; 
string detectorType = "ORB";   // HARRIS, FAST, BRISK, ORB, AKAZE, SIFT

if (detectorType.compare("SHITOMASI") == 0) {
    detKeypointsShiTomasi(keypoints, imgGray, true);
}
else if (detectorType.compare("HARRIS") == 0) {
    detKeypointsHarris(keypoints, imgGray, true);
}
else {
    detKeypointsModern(keypoints, imgGray, detectorType, true);
}

```

Of course, I can improve this by adding a configuration file, like yaml or plain text instead of this hardcode one. But what's more, in the Udacity project template, all detected results are simply displayed in separated _imshow_ windows. And almost everytime running the code, I have to drag and pull, then zoom in and out to observe the performance differences, which is somehow annoying.

**Therefore**, I want to design a GUI with Qt to integrate the whole things together to make the algorithms switching and result displaying more smooth and comfortable. I know, there are already some opensource toolbox outthere for this task. But I want to apply what I have learned in _Design Pattern_ to this toobox design, such as Observer Pattern, Strategy Patterm, Template Method, etc. By this, I want to enable the future extension, like integrating new algorithms, more easily and time saving.


