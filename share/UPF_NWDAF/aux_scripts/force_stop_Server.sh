kill -9 $(ps -ef | grep -w "python3 NWDAF_server.py" | head -n 1 | awk '{print $2}')



