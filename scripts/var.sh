#!/bin/bash
echo "Enter your name"

read name
p=$(pwd)

echo "Hello $name"

sleep 1

echo "You are at $p"
