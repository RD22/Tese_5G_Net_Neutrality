kill -9 $(ps -ef | grep"captures" | head -n -1 | awk '{print $2}')
