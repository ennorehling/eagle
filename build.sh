#!/bin/sh

function rebuild-pkg {
    tolua $1.pkg > $1_lua.c.tmp
    diff -q -I '^** Generated' $1_lua.c.tmp $1_lua.c || mv $1_lua.c.tmp $1_lua.c
    rm -f $1_lua.c.tmp
}

rebuild-pkg jni/log
rebuild-pkg jni/gl
ndk-build && ant -q compile && ant -q install
