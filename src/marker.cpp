#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv) {

    m_markerCorners3d.push_back(cv::Point3f(-70.0f, -70.0f, 0));
    m_markerCorners3d.push_back(cv::Point3f(+70.0f, -70.0f, 0));    
    m_markerCorners3d.push_back(cv::Point3f(+70.0f, +70.0f, 0));
    m_markerCorners3d.push_back(cv::Point3f(-70.0f, +70.0f, 0));

    camMatrix = (Mat_<double>(3, 3) << 598.29493, 0, 304.76898, 0, 597.56086, 233.34673, 0, 0, 1);
    distCoeff = (Mat_<double>(5, 1) << -0.53572,1.35993,-0.00244,0.00620,0.00000);

    Marker& m = detectedMarkers[i];
    cv::Mat Rvec;
    cv::Mat_<float> Tvec;
    cv::Mat raux, taux;

    cv::solvePnP(m_markerCorners3d, m.points, camMatrix, distCoeff, raux, taux, false, CV_P3P);

    raux.convertTo(Rvec, CV_32F);    //旋转向量
    taux.convertTo(Tvec, CV_32F);   //平移向量

    cv::Mat_<float> rotMat(3, 3);
    cv::Rodrigues(Rvec, rotMat);  //由于solvePnP返回的是旋转向量，故用罗德里格斯变换变成旋转矩阵

    //格式转换
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> R_n;
    Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> T_n;
    cv2eigen(rotMat, R_n);
    cv2eigen(Tvec, T_n);
    Eigen::Vector3f P_oc;

    P_oc = -R_n.inverse()*T_n;

}