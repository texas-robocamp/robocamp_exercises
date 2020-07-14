#include <ros/ros.h>
#include <unistd.h>
#include "texas_robocamp/texbot_wrapper.h"

int main(int argc, char **argv) {

  ros::init(argc, argv, "robot");

  TexBot bot;

  while(ros::ok()) {
    
    ros::spinOnce();
  }

  return 0;

}
