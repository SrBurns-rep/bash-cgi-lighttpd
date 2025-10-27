#!/usr/bin/env bash

sed "s|%PWDWWW%|$(pwd)/www|" lighttpd.conf.template > lighttpd.conf

lighttpd -Df ./lighttpd.conf
