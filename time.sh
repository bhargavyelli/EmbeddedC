# #!/bin/bash

time=$(date +%M)

if [ $time -lt 12 ];then
    echo good morning
elif [ $time -lt 18 ] ;then
    echo good afternoon
else
    echo good evening
fi
echo "$time"

#!/bin/bash

#!/bin/bash
# time=$(date +%H)
# if [$time -lt 12];then
#     message="Good Morning User"
# elif [$time -lt 18 ];then
#     message="Good Afternoon User"
# else
#     message="Good Evening User"
# fi
# echo "$message"hours 