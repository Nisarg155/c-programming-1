#!/bin/bash

# Check if year is provided
if [ -z "$1" ]; then
  echo "Please provide a year as the first argument."
  exit 1
fi

year="$1"

# Check if at least one month is provided
if [ $# -lt 2 ]; then
  echo "Please provide one or more months as the remaining arguments."
  exit 1
fi

# Shift the arguments to access the months
shift

# Loop through the months and display the calendar
for month in "$@"
do
  # Convert month to number if it's given as a string
  case "$month" in
    Jan*) month_num="01";;
    Feb*) month_num="02";;
    Mar*) month_num="03";;
    Apr*) month_num="04";;
    May*) month_num="05";;
    Jun*) month_num="06";;
    Jul*) month_num="07";;
    Aug*) month_num="08";;
    Sep*) month_num="09";;
    Oct*) month_num="10";;
    Nov*) month_num="11";;
    Dec*) month_num="12";;
    [1-9]|1[0-2]) month_num="$month";;
    *) echo "Invalid month: $month"
       exit 1;;
  esac

  # Display the calendar for the month and year
  cal "$month_num" "$year"
done
