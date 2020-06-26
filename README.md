# Navigation_Speech

Package for AutoNavigation with Speech

After pulging lidar and teensy, do 

sudo chmod 666 /dev/ttyACM...

sudo chmod 666 /dev/ttyUSB...

To Change the Company of lidar, edit in hut/launch/include/lidar.launch file

To Change the drive mechanism, edit in hut/launch/navigate.launch file

# Teleoperation of the robot

Terminal1: roslaunch hut bringup.launch

Make sure you install teleop keyboard 

sudo apt-get install ros-$VERSION-teleop-twist-keyboard

Terminal2: rosrun teleop_twist_keyboard teleop_twist_keybod.py 

# Mapping

Terminal1: roslaunch hut bringup.launch

Terminal2: roslaunch hut slam.launch

After lauching files, we use RviZ for vizualization in mapping

Terminal3: rosrun rviz rviz

Save the map

Terminal4: rosrun map_server map_saver -f mymap

# AutoNavigation of the robot using Rviz

Terminal1: roslaunch hut bringup.launch

In the navigate.launch file, we need to place the map on which navigation will be done.

Terminal2: roslaunch hut navigate.launch

After lauching files, we use RviZ for vizualization in navigation

Terminal3: rosrun rviz rviz

# AutoNavigation of the robot using python file

Terminal1: roslaunch hut bringup.launch

In the navigate.launch file, we need to place the map on which navigation will be done.

Terminal2: roslaunch hut navigate.launch

After lauching files, we use RviZ for vizualization in navigation

Terminal3: rosrun rviz rviz

To provide the commands from python file instead of RviZ, 

go to hut package, edit the coordinates in the go_to_specific_point.py file and run

Terminal4: python go_to_specific_point.py

# Speech Recognition only

Create a Virtual environment(Python 3.2 or above) in desired location

$ python3 -m venv

Activating Virtual environment

$ source venv/bin/activate

Install Pyaudio, yaml and necessary repositories in the virtual environment

$ pip install PyAudio==0.2.10

NOTE: THE SPEECH RECOGNITION FILE "recognise_speech" works only in the virtual environment

$ cd hut_ws/src/speech

$ python recognize_speech.py

# AutoNavigation Using Speech Recognition

Terminal1: roslaunch hut bringup.launch

In the navigate.launch file, we need to place the map on which navigation will be done.

Terminal2: roslaunch hut navigate.launch

After lauching files, we use RviZ for vizualization in navigation

Terminal3: rosrun rviz rviz

In coordinates_places.py file, write your own places and coordinates done to that.

go to speech folder, run

Terminal4: python coordinates_places.py

To provide coordinates for the robot, we run 

Terminal5: python go_to_specific_point_using_speech.py

To start speech recognition,

Terminal6: python recognize_speech.py
