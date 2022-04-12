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

echo_and_run cd "/home/nt/LearnRobocupOP/src/dynamixel_motor/dynamixel_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/nt/LearnRobocupOP/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/nt/LearnRobocupOP/install/lib/python2.7/dist-packages:/home/nt/LearnRobocupOP/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/nt/LearnRobocupOP/build" \
    "/usr/bin/python2" \
    "/home/nt/LearnRobocupOP/src/dynamixel_motor/dynamixel_driver/setup.py" \
     \
    build --build-base "/home/nt/LearnRobocupOP/build/dynamixel_motor/dynamixel_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/nt/LearnRobocupOP/install" --install-scripts="/home/nt/LearnRobocupOP/install/bin"
