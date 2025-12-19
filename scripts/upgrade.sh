#!/usr/bin/env sh

ip="10.0.0.2"
#echo $#
if [ "$#" -lt "1" ]; then
    echo "$0 ipaddr"
    exit 1
fi
ip=$1
fname=build/stm32f7.bin
if [ "$#" -ge "2" ]; then
    fname=$2
fi
echo $ip $fname
#fping -q -c 1 -t 1500 $ip
#if [ "$?" != "0" ]; then
#    echo "$ip not available"
#    exit 1
#fi
crc=`cksfv -b -q $fname | tail -n 1 | awk '{print $(NF)}'`
tftp $ip -m binary -c put $fname $crc.bin

#tftp 10.0.1.4 -m binary -c get flash0.bin
