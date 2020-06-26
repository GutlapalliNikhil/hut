#include "hut_base.h"

int main(int argc, char** argv )
{
    ros::init(argc, argv, "hut_base_node");
    HutBase hut;
    ros::spin();
    return 0;
}
