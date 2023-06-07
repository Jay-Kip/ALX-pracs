#!/bin/bash

if [ ${1,,} = Admin ]; then
	echo "Logged in as Admin!"
elif [ ${1,,} = help ]; then
	echo "Enter Username"
else
	echo "Invalid credentials!!!"
fi
