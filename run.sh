second_param=$1
Yellow="\e[33m"
Reset="\e[0m"

if [ -z $1 ]; then
  echo -e "${Yellow}Enter the C filename!${Reset}"
  exit 0
fi


gcc $second_param
./a.out