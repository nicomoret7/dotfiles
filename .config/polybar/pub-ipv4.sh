#!/bin/bash

echo $(dig TXT +short o-o.myaddr.l.google.com @ns1.google.com | sed 's/"//g')
