#!/bin/sh

IOS="Release-iphoneos"
SIM="Release-iphonesimulator"
LIB="lib"
FILE="libPopperTools.a"

if [ ! -d "$IOS" ]; then
    echo "$IOS" "does not exist."
    exit 1
fi

if [ ! -d "$SIM" ]; then
    echo "$SIM" "does not exist."
    exit 1
fi

if [ ! -d "$LIB" ]; then
    mkdir $LIB
else
    rm -rf $LIB/*
fi
 
lipo -create $IOS/$FILE $SIM/$FILE -output $LIB/$FILE
cp -r $IOS/PopperTools $LIB/
