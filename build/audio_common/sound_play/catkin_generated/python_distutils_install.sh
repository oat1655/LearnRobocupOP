#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/nt/LearnRobocupOP/src/audio_common/sound_play"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/nt/LearnRobocupOP/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/nt/LearnRobocupOP/install/lib/python2.7/dist-packages:/home/nt/LearnRobocupOP/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/nt/LearnRobocupOP/build" \
    "/usr/bin/python2" \
    "/home/nt/LearnRobocupOP/src/audio_common/sound_play/setup.py" \
    egg_info --egg-base /home/nt/LearnRobocupOP/build/audio_common/sound_play \
    build --build-base "/home/nt/LearnRobocupOP/build/audio_common/sound_play" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/nt/LearnRobocupOP/install" --install-scripts="/home/nt/LearnRobocupOP/install/bin"
