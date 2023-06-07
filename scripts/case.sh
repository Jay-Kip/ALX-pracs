#!/bin/bash

case ${1,,} in
	Jay | Admin)
		echo "Logged in as Admin"
		;;
	help)
		echo "Enter username"
		;;
	*)
		echo "Invalid credentials"
esac
