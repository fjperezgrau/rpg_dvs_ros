// This file is part of DVS-ROS - the RPG DVS ROS Package

#include <pluginlib/class_list_macros.h>

#include "dvs_ros_driver/driver_nodelet.h"

namespace dvs_ros_driver
{

void DvsRosDriverNodelet::onInit()
{
  driver_ = new dvs_ros_driver::DvsRosDriver(getNodeHandle(), getPrivateNodeHandle());

  NODELET_INFO_STREAM("Initialized " <<  getName() << " nodelet.");
}

PLUGINLIB_DECLARE_CLASS(dvs_ros_driver, DvsRosDriverNodelet, dvs_ros_driver::DvsRosDriverNodelet, nodelet::Nodelet);

}
