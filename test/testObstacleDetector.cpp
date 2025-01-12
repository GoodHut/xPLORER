/**============================================================================
 * @file       : testObstacleDetector.cpp
 * @author     : Akash Atharv, Rishabh Choudhary
 * @version    : 1.0
 * @Copyright  : 3-Clause BSD
Copyright (c) 2018, Akash Atharv, Rishabh Choudhary
 
Redistribution and use in source and binary forms, with or without  
modification, are permitted provided that the following conditions are 
met:
 
1. Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.
 
2. Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the   
documentation and/or other materials provided with the distribution.
 
3. Neither the name of the copyright holder nor the names of its 
contributors may be used to endorse or promote products derived from this 
software without specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS 
IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
THE POSSIBILITY OF SUCH DAMAGE.
 * @brief      : Test file for testing class obstacleDetector
 *============================================================================
 */

#include <ros/ros.h>
#include <gtest/gtest.h>
#include "../include/xplorer/obstacleDetector.hpp"
#include "../include/xplorer/navigator.hpp"

/**
 * @brief Test to find if object is initialized and the obstacleDetector 
 *        program functions properly
 * @param ObstacleDetectorComponentTest Gtest framework
 * @param ObstacleDetector_Object_is_initialized Test name
 */
TEST(ObstacleDetectorComponentTest, ObstacleDetector_Object_is_initialized) {
        EXPECT_NO_FATAL_FAILURE(obstacleDetector obs);
}
/**
 * @brief Test to find if collision is not detected at a particular time
 * @param ObstacleDetectorComponentTest Gtest framework
 * @param Collision_should_not_be_detected Test name
 */
TEST(ObstacleDetectorComponentTest, Collision_should_not_be_detected) {
        obstacleDetector obs;
        ros::NodeHandle n4;
        ros::WallDuration(25).sleep();
        ros::spinOnce();
        EXPECT_FALSE(obs.collisionDetect());
}
