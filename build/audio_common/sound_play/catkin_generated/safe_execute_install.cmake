execute_process(COMMAND "/home/nt/LearnRobocupOP/build/audio_common/sound_play/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/nt/LearnRobocupOP/build/audio_common/sound_play/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
